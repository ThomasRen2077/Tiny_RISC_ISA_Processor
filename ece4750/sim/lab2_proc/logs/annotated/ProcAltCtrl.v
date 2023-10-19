//      // verilator_coverage annotation
        `ifndef LAB2_PROC_PROC_ALT_CTRL_V
        `define LAB2_PROC_PROC_ALT_CTRL_V
        
        `include "vc/trace.v"
        `include "tinyrv2_encoding.v"
        
        
        module lab2_proc_ProcAltCtrl
        (
 029302   input  logic        clk,
 000042   input  logic        reset,
        
          // Instruction Memory Port
 010574   output logic        imem_reqstream_val,                         // Request Message to Instruction Memory Valid Signal
%000000   input  logic        imem_reqstream_rdy,                         // Instruction Memory Ready Signal
 009220   input  logic        imem_respstream_val,                        // Instruction Memory Response Message Valid Signal
 010532   output logic        imem_respstream_rdy,                        // Processor Ready to Receive Instruction Signal
 001862   output logic        imem_respstream_drop,                       // Drop Instruction Signal
        
          // Data Memory Port
 001148   output logic        dmem_reqstream_val,                         // Request Message to Data Memory Valid Signal         
 000628   input  logic        dmem_reqstream_rdy,                         // Data Memory Ready Signal
 001132   input  logic        dmem_respstream_val,                        // Data Memory Response Message Valid Signal
 001132   output logic        dmem_respstream_rdy,                        // Processor Ready to Receive Data Signal
%000000   output logic [2:0]  dmem_reqstream_msg_type,                    // Data Operation Type of Request Message
        
          // mngr communication port
 000196   input  logic        mngr2proc_val,                              // Mngr2Proc Message Valid Signal
 000196   output logic        mngr2proc_rdy,                              // Processor Ready to Receive Mngr Message Signal
 000080   output logic        proc2mngr_val,                              // Proc2mngr Message Valid Signal
 000060   input  logic        proc2mngr_rdy,                              // Mngr Ready to Receive Proc Message Signal 
        
          // multiplier communication port
 000002   output logic        IntMulAlt_reqstream_val,                    // Request Message to Multiplier Valid Signal
 000002   input  logic        IntMulAlt_reqstream_rdy,                    // Multiplier Ready Signal
 000002   input  logic        IntMulAlt_respstream_val,                   // Multiplier Response Message Valid Signal
 000306   output logic        IntMulAlt_respstream_rdy,                   // Processor Ready to Receive Multiplier Message Signal
        
          // control signals (ctrl->dpath)
 010532   output logic        reg_en_F,                                   // Register Enable of F Stage
 000008   output logic [1:0]  pc_sel_F,                                   // PC redirection Select Mux Signal
 000624   output logic        reg_en_D,                                   // Register Enable of D Stage
 001842   output logic [1:0]  op1_byp_sel_D,                              // Operand 1 Bypass Mux Signal
 000490   output logic [1:0]  op2_byp_sel_D,                              // Operand 2 Bypass Mux Signal
 000002   output logic        op1_sel_D,                                  // Operand 1 Select Mux Signal
 000188   output logic [1:0]  op2_sel_D,                                  // Operand 2 Select Mux Signal
%000000   output logic [1:0]  csrr_sel_D,                                 // CSRR Select Signal
 000010   output logic [2:0]  imm_type_D,                                 // Immediate Type
 000306   output logic        reg_en_X,                                   // Register Enable of X Stage
 000230   output logic [3:0]  alu_fn_X,                                   // Alu Function Signal
 000002   output logic [1:0]  ex_result_sel_X,                            // Execuation Result Select Mux Signal 
 000918   output logic        reg_en_M,                                   // Register Enable of M Stage
 000362   output logic        wb_result_sel_M,                            // Register File Write Result Select
%000000   output logic        reg_en_W,                                   // Register Enable of W Stage
 000732   output logic [4:0]  rf_waddr_W,                                 // Register File Write Address
 005212   output logic        rf_wen_W,                                   // Register File Write Enable
%000000   output logic        stats_en_wen_W,                             // Execuation Result Select Mux Signal
        
          // status signals (dpath->ctrl)
 000004   input  logic [31:0] inst_D,                                     // Instruction to Decode
 007750   input  logic        br_cond_eq_X,                               // Branch conition equal signal
 002234   input  logic        br_cond_lt_X,                               // Branch conition less than signal
 002486   input  logic        br_cond_ltu_X,                              // Branch conition less than unsigned int signal
        
          // extra ports
 009133   output logic        commit_inst
        );
        
        //------------- val, stall, and squash variable -------------
        
 000042   logic val_F;                                                  // Valid Signal for Instruction in F stage
 008787   logic val_D;                                                  // Valid Signal for Instruction in D stage
 008863   logic val_X;                                                  // Valid Signal for Instruction in X stage
 008836   logic val_M;                                                  // Valid Signal for Instruction in M stage
 009133   logic val_W;                                                  // Valid Signal for Instruction in W stage
        
 009262   logic ostall_F;                                               // ostall due to imem_respstream_val
 000122   logic ostall_D;                                               // ostall due to mngr2proc_val or other hazards or IntMulAlt_respstream_rdy
 000166   logic ostall_X;                                               // ostall due to dmem_reqstream_rdy
 000918   logic ostall_M;                                               // ostall due to dmem_respstream_val
%000000   logic ostall_W;                                               // ostall due to proc2mngr_rdy
        
 009414   logic stall_F;                                                // Final stall signal of F stage
 000624   logic stall_D;                                                // Final stall signal of D stage
 000306   logic stall_X;                                                // Final stall signal of X stage
 000918   logic stall_M;                                                // Final stall signal of M stage
%000000   logic stall_W;                                                // Final stall signal of W stage
        
 000004   logic osquash_D;                                              // osquash due to unconditional jumps
 001858   logic osquash_X;                                              // osquash due to taken branches
        
 001862   logic squash_F;                                               // Final squash signal of F stage
 000448   logic squash_D;                                               // Final squash signal of D stage
        
        
        
        //----------------------------------------------------------------------
        // F stage
        //----------------------------------------------------------------------
        
        // ------------- Register enable and Mux Select logic -------------
        
          // Enable Registers if no stall or if there is a squash happens in F stage
          assign reg_en_F = !stall_F || squash_F;
        
          // Valid Signal for Instruction in F stage should be true if it's not resetting
 014630   always_ff @( posedge clk ) begin
 000546     if ( reset )
 000546       val_F <= 1'b0;
 006937     else if ( reg_en_F )
 006937       val_F <= 1'b1;
          end
        
        
 000004   logic       pc_redirect_D;                                    // PC Redirection Signal Generated in D stage                  
 001858   logic       pc_redirect_X;                                    // PC Redirection Signal Generated in X stage
 000004   logic [1:0] pc_sel_D;                                         // PC redirection Select Mux Signal Generated in D stage  
 000004   logic [1:0] pc_sel_X;                                         // PC redirection Select Mux Signal Generated in X stage  
        
          // PC Select Logic
%000000   always_comb begin
 000929     if ( pc_redirect_X )                                        // If PC Jumps in X stage or a branch is taken in X stage
 000929       pc_sel_F = pc_sel_X;                                      // Use PC Address Calculated in X stage
 000002     else if ( pc_redirect_D )                                   // If PC Jumps in D stage
 000002       pc_sel_F = pc_sel_D;                                      // Use PC Address Calculated in D stage
            else
 013699       pc_sel_F = 2'b0;                                          // Use PC + 4
          end;;
        
        
        // ------------- ostall and osquash in F -------------
        
          // ostall due to the imem response not valid.
          assign ostall_F = val_F && !imem_respstream_val;
        
          // Final stall signal of F stage
          assign stall_F  = val_F && ( ostall_F  || ostall_D || ostall_X || ostall_M || ostall_W );
        
          // Final squash signal of F stage
          assign squash_F = val_F && ( osquash_D || osquash_X );
        
          // Drop instruction if squash
          assign imem_respstream_drop = squash_F;
        
          // Set Request to Instruction Memory Valid if no stall or if there is a squash happens when not resetting
          assign imem_reqstream_val  = ( !stall_F || squash_F ) && !reset;
        
          // Set Processor Ready to Receive Instruction Signal if no stall or if there is a squash happens
          assign imem_respstream_rdy = !stall_F || squash_F;
        
        
        // ------------- Valid signal for the next stage (stage D) -------------
 009372   logic  next_val_F;
          assign next_val_F = val_F && !stall_F && !squash_F;
        
        
        
        //----------------------------------------------------------------------
        // D stage
        //----------------------------------------------------------------------
        
        // ------------- Register enable and Mux Select logic -------------
        
          // Enable Registers if no stall or if there is a squash happens in D stage
          assign reg_en_D = !stall_D || squash_D;
        
          // Valid Signal for Instruction in D stage forwarded from F stage
 014630   always_ff @( posedge clk ) begin
 000546     if ( reset )
 000546       val_D <= 1'b0;
 000544     else if ( reg_en_D )
 013540       val_D <= next_val_F;
          end
        
          // Parse Instruction Fields
 000732   logic   [4:0] inst_rd_D;                                        // Destination Register Address
 001542   logic   [4:0] inst_rs1_D;                                       // Read Register 1 Address
 000950   logic   [4:0] inst_rs2_D;                                       // Read Register 2 Address
 000950   logic   [11:0] inst_csr_D;                                      // CSR Address
        
          // Instruction unpack module
          lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
          (
            .inst     (inst_D),
            .opcode   (),
            .rd       (inst_rd_D),
            .rs1      (inst_rs1_D),
            .rs2      (inst_rs2_D),
            .funct3   (),
            .funct7   (),
            .csr      (inst_csr_D)
          );
        
          // Generic Parameters -- yes or no
          localparam n = 1'd0;
          localparam y = 1'd1;
        
          // Register specifiers
          localparam rx = 5'bx;                                         // Don't care
          localparam r0 = 5'd0;                                         // Zero
          localparam rL = 5'd31;                                        // for jal
        
          // Branch type
          localparam br_x      = 4'bx;                                  // Don't care
          localparam br_na     = 4'b0;                                  // No branch
          localparam br_bne    = 4'b1;                                  // bne
          localparam br_beq    = 4'd2;                                  // beq
          localparam br_blt    = 4'd3;                                  // blt
          localparam br_bltu   = 4'd4;                                  // bltu
          localparam br_bge    = 4'd5;                                  // bge
          localparam br_bgeu   = 4'd6;                                  // bgeu
          localparam jal       = 4'd7;                                  // jal
          localparam jalr      = 4'd8;                                  // jalr
        
          // Operand 0 Mux Select Signal
          localparam am_x     = 1'bx;                                   // Don't care
          localparam am_rf    = 1'd0;                                   // Use Data from Register File
          localparam am_pc    = 1'd1;                                   // Use Data from PC
        
          // Operand 1 Mux Select Signal
          localparam bm_x     = 2'bx;                                   // Don't care
          localparam bm_rf    = 2'd0;                                   // Use Data from Register File
          localparam bm_imm   = 2'd1;                                   // Use Sign-Extended Immediate
          localparam bm_csr   = 2'd2;                                   // Use from Mngr Data
        
          // ALU Function
          localparam alu_x        = 4'bx;                               // Don't care
          localparam alu_add      = 4'd0;                               // Add
          localparam alu_sub      = 4'd1;                               // Sub
          localparam alu_and      = 4'd2;                               // And
          localparam alu_or       = 4'd3;                               // Or
          localparam alu_xor      = 4'd4;                               // Xor
          localparam alu_slt      = 4'd5;                               // Less than
          localparam alu_sltu     = 4'd6;                               // Unsigned Less than
          localparam alu_sra      = 4'd7;                               // Right Arithmatic Shift
          localparam alu_srl      = 4'd8;                               // Right Logic Shift
          localparam alu_sll      = 4'd9;                               // Left Logic Shift
          localparam alu_pc_add   = 4'd10;                              // PC Address Add with & 32'hfffffffe
          localparam alu_cp0      = 4'd11;                              // Copy Operand 0
          localparam alu_cp1      = 4'd12;                              // Copy Operand 1
        
          // Immediate Type
          localparam imm_x    = 3'bx;                                   // Don't care
          localparam imm_i    = 3'd0;                                   // I type immediate
          localparam imm_s    = 3'd1;                                   // S type immediate
          localparam imm_b    = 3'd2;                                   // B type immediate
          localparam imm_u    = 3'd3;                                   // U type immediate
          localparam imm_j    = 3'd4;                                   // J type immediate
          localparam imm_iv    = 3'd5;                                  // I type Variant immediate 
          
          // Ex_Result Mux Select Signal
          localparam a_alu    = 2'd0;                                   // Use Result from Alu
          localparam a_mul    = 2'd1;                                   // Use Result from Multiplier
          localparam a_pc     = 2'd2;                                   // Use Result from Current PC + 4
        
          // Memory Request Type
          localparam nr       = 2'd0;                                   // No request
          localparam ld       = 2'd1;                                   // Load
          localparam st       = 2'd2;                                   // Store
        
          // Writeback Mux Select
          localparam wm_x     = 1'bx;                                   // Don't care
          localparam wm_a     = 1'b0;                                   // Use ALU output
          localparam wm_m     = 1'b1;                                   // Use Data memory Response
        
          // Instruction Decode
 009594   logic       inst_val_D;                                        // Instruction Valid Signal
 000004   logic [3:0] br_type_D;                                         // Branch Type and Jump Type
 007686   logic       rs1_en_D;                                          // Read Register 1 Enable
 005378   logic       rs2_en_D;                                          // Read Register 2 Enable
 000230   logic [3:0] alu_fn_D;                                          // Alu Function Signal
 000002   logic [1:0] ex_result_sel_D;                                   // Execuation Result Signal
 000346   logic [1:0] dmem_reqstream_type_D;                             // Data Memory Operation Type
 000582   logic       wb_result_sel_D;                                   // Write Result Select Signal
 005416   logic       rf_wen_D;                                          // Register File Write Enable
 000188   logic       csrr_D;                                            // CSRR Signal
 001322   logic       csrw_D;                                            // CSRR Signal
 001322   logic       proc2mngr_val_D;                                   // Proc2mngr Message Valid Signal
 000188   logic       mngr2proc_rdy_D;                                   // Mngr Ready to Receive Proc Message Signal
%000000   logic       stats_en_wen_D;                                    // State Register Enable Signal
        
        
          //  Control Signal Decode Block
 014630   task cs
          (
            input logic       cs_inst_val,                                // Instruction Valid Signal 
            input logic [3:0] cs_br_type,                                 // Branch Type and Jump Type
            input logic [2:0] cs_imm_type,                                // Immediate Type
            input logic       cs_op1_sel,                                 // Operand 1 Select Signal
            input logic       cs_rs1_en,                                  // Read Register 1 Enable
            input logic [1:0] cs_op2_sel,                                 // Operand 2 Select Signal
            input logic       cs_rs2_en,                                  // Read Register 2 Enable
            input logic [3:0] cs_alu_fn,                                  // Alu Function Signal
            input logic [1:0] cs_ex_result_sel,                           // Execuation Result Signal
            input logic [1:0] cs_dmem_reqstream_type,                     // Data Memory Operation Type
            input logic       cs_wb_result_sel,                           // Write Result Select Signal
            input logic       cs_rf_wen,                                  // Register File Write Enable
            input logic       cs_csrr,                                    // CSRR Signal
            input logic       cs_csrw                                     // CSRW Signal
          );
          // Receive Decode Result from Control Signal Table
 014630   begin
 014630     inst_val_D            = cs_inst_val;
 014630     br_type_D             = cs_br_type;
 014630     imm_type_D            = cs_imm_type;
 014630     rs1_en_D              = cs_rs1_en;
 014630     op1_sel_D             = cs_op1_sel;
 014630     op2_sel_D             = cs_op2_sel;
 014630     rs2_en_D              = cs_rs2_en;
 014630     alu_fn_D              = cs_alu_fn;
 014630     ex_result_sel_D       = cs_ex_result_sel;
 014630     dmem_reqstream_type_D = cs_dmem_reqstream_type;
 014630     wb_result_sel_D       = cs_wb_result_sel;
 014630     rf_wen_D              = cs_rf_wen;
 014630     csrr_D                = cs_csrr;
 014630     csrw_D                = cs_csrw;
          end
          endtask
        
          // Control Signal Table
%000000   always_comb begin
%000000     casez ( inst_D )
        
              //                            br      imm     op1     rs1 op2    rs2 alu       ex_result dmm wbmux rf
              //                       val  type    type    muxsel   en muxsel  en fn        muxsel    typ sel   wen csrr csrw
 001203       `TINYRV2_INST_NOP     :cs( y, br_na,  imm_x,  am_x,    n, bm_x,   n, alu_x,    a_alu,    nr, wm_a, n,  n,   n    );
 000178       `TINYRV2_INST_CSRR    :cs( y, br_na,  imm_i,  am_x,    n, bm_csr, n, alu_cp1,  a_alu,    nr, wm_a, y,  y,   n    );
 000661       `TINYRV2_INST_CSRW    :cs( y, br_na,  imm_i,  am_rf,   y, bm_rf,  n, alu_cp0,  a_alu,    nr, wm_a, n,  n,   y    );
        
              //Reg-Reg Instruction
 001723       `TINYRV2_INST_ADD     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_add,  a_alu,    nr, wm_a, y,  n,   n    );
 000301       `TINYRV2_INST_SUB     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_sub,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_MUL     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_x,    a_mul,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_AND     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_and,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_OR      :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_or,   a_alu,    nr, wm_a, y,  n,   n    );
 000005       `TINYRV2_INST_XOR     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_xor,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLT     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_slt,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLTU    :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_sltu, a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SRA     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_sra,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SRL     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_srl,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLL     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_sll,  a_alu,    nr, wm_a, y,  n,   n    );
        
              //Reg-Imm Instruction
 001220       `TINYRV2_INST_ADDI    :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_add,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_ORI     :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_or,   a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_ANDI    :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_and,  a_alu,    nr, wm_a, y,  n,   n    );
 000003       `TINYRV2_INST_XORI    :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_xor,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLTI    :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_slt,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLTIU   :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_sltu, a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SRAI    :cs( y, br_na,  imm_iv, am_rf,   y, bm_imm, n, alu_sra,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SRLI    :cs( y, br_na,  imm_iv, am_rf,   y, bm_imm, n, alu_srl,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLLI    :cs( y, br_na,  imm_iv, am_rf,   y, bm_imm, n, alu_sll,  a_alu,    nr, wm_a, y,  n,   n    );
 000007       `TINYRV2_INST_LUI     :cs( y, br_na,  imm_u,  am_rf,   y, bm_imm, n, alu_cp1,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_AUIPC   :cs( y, br_na,  imm_u,  am_pc,   n, bm_imm, n, alu_add,  a_alu,    nr, wm_a, y,  n,   n    );
        
              //Memory Instruction
 000636       `TINYRV2_INST_LW      :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_add,  a_alu,    ld, wm_m, y,  n,   n    );
 000259       `TINYRV2_INST_SW      :cs( y, br_na,  imm_s,  am_rf,   y, bm_imm, y, alu_add,  a_alu,    st, wm_x, n,  n,   n    );
        
              //Jump Instruction
 000002       `TINYRV2_INST_JAL     :cs( y, jal,    imm_j,  am_x,    n, bm_x,   n, alu_x,    a_pc,     nr, wm_a, y,  n,   n    );
 000002       `TINYRV2_INST_JALR    :cs( y, jalr,   imm_i,  am_rf,   y, bm_imm, n, alu_pc_add,  a_pc,     nr, wm_a, y,  n,   n    );
        
              //Branch Instruction
 000926       `TINYRV2_INST_BNE     :cs( y, br_bne,  imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000301       `TINYRV2_INST_BEQ     :cs( y, br_beq,  imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000001       `TINYRV2_INST_BLT     :cs( y, br_blt,  imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000001       `TINYRV2_INST_BLTU    :cs( y, br_bltu, imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000001       `TINYRV2_INST_BGE     :cs( y, br_bge,  imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000001       `TINYRV2_INST_BGEU    :cs( y, br_bgeu, imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
        
              // Default
 007183       default               :cs( n, br_x,  imm_x,   am_x,    n,  bm_x,   n, alu_x,   a_alu,    nr, wm_x, n,  n,   n    );
              
            endcase
          end
        
          // Decode Destination Register Address
 000732   logic [4:0] rf_waddr_D;
          assign rf_waddr_D = inst_rd_D;
        
        
          // CSRR and CSRW logic
%000000   always_comb begin
%000000     proc2mngr_val_D  = 1'b0;
%000000     mngr2proc_rdy_D  = 1'b0;
%000000     csrr_sel_D       = 2'h0;
%000000     stats_en_wen_D   = 1'b0;
 000661     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_PROC2MNGR )
 000661       proc2mngr_val_D  = 1'b1;
 000178     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_MNGR2PROC )
 000178       mngr2proc_rdy_D  = 1'b1;
 014630     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_STATS_EN )
%000000       stats_en_wen_D   = 1'b1;
 014630     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_NUMCORES )
%000000       csrr_sel_D       = 2'h1;
 014630     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_COREID )
%000000       csrr_sel_D       = 2'h2;
          end
        
        
          // Jump Logic for jal
%000000   always_comb begin
 000002     if( val_D && ( br_type_D == jal ) ) begin                                    // If Current Instruction is jal 
 000002       pc_redirect_D = 1'd1;                                                      // PC Redirects
 000002       pc_sel_D = 2'd2;                                                           // PC take Jump Address Generated in D stage
            end
 014628     else begin
 014628       pc_redirect_D = 1'd0;                                                      // PC Does not Redirect
 014628       pc_sel_D = 2'd0;                                                           // PC Use PC_plus_4
            end
          end
        
        
        // -------------bypass, ostall, and osquash in D -------------
        
          // Set Processor Ready to Receive Mngr Message Signal
          assign mngr2proc_rdy = val_D && !stall_D && mngr2proc_rdy_D;
        
          // set IntMulAlt_reqstream_val only if not stalling and current instruction is mul
          assign IntMulAlt_reqstream_val = val_D && !stall_D && (ex_result_sel_D == a_mul);
        
          // ostall if Processor is Waiting for Receive Mngr Message
 000016   logic  ostall_mngr2proc_D;
          assign ostall_mngr2proc_D = val_D && mngr2proc_rdy_D && !mngr2proc_val;
        
          // ostall if Multiplier is not Ready
%000000   logic  ostall_IntMulAlt_D;
          assign ostall_IntMulAlt_D = val_D && !IntMulAlt_reqstream_rdy;
        
          // ostall if load write address in X matches rs1 in D
%000000   logic  ostall_load_use_X_rs1_D;
          assign ostall_load_use_X_rs1_D
            = rs1_en_D && val_X && rf_wen_X
              && ( inst_rs1_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 )
              && ( dmem_reqstream_type_X == ld );
        
          // ostall if load write address in X matches rs2 in D
 000130   logic  ostall_load_use_X_rs2_D;
          assign ostall_load_use_X_rs2_D
            = rs2_en_D && val_X && rf_wen_X
              && ( inst_rs2_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 )
              && ( dmem_reqstream_type_X == ld );
        
          // ostall_can_be_solved_by_bypassing if write address in X matches rs1 in D and is not load instruction
 000786   logic  ostall_waddr_X_rs1_D_can_be_solved_by_bypassing;
          assign ostall_waddr_X_rs1_D_can_be_solved_by_bypassing
            = rs1_en_D && val_X && rf_wen_X
              && ( inst_rs1_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 )
              && ( dmem_reqstream_type_X != ld );
        
          // ostall_can_be_solved_by_bypassing if write address in M matches rs1 in D
 001864   logic  ostall_waddr_M_rs1_D_can_be_solved_by_bypassing;
          assign ostall_waddr_M_rs1_D_can_be_solved_by_bypassing
            = rs1_en_D && val_M && rf_wen_M
              && ( inst_rs1_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall_can_be_solved_by_bypassing if write address in W matches rs1 in D
 001268   logic  ostall_waddr_W_rs1_D_can_be_solved_by_bypassing;
          assign ostall_waddr_W_rs1_D_can_be_solved_by_bypassing
            = rs1_en_D && val_W && rf_wen_W
              && ( inst_rs1_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // ostall_can_be_solved_by_bypassing if write address in X matches rs2 in D and is not load instruction
 000154   logic  ostall_waddr_X_rs2_D_can_be_solved_by_bypassing;
          assign ostall_waddr_X_rs2_D_can_be_solved_by_bypassing
            = rs2_en_D && val_X && rf_wen_X
              && ( inst_rs2_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 )
              && ( dmem_reqstream_type_X != ld );
        
          // ostall_can_be_solved_by_bypassing if write address in M matches rs2 in D
 000350   logic  ostall_waddr_M_rs2_D_can_be_solved_by_bypassing;
          assign ostall_waddr_M_rs2_D_can_be_solved_by_bypassing
            = rs2_en_D && val_M && rf_wen_M
              && ( inst_rs2_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall_can_be_solved_by_bypassing if write address in W matches rs2 in D
 000406   logic  ostall_waddr_W_rs2_D_can_be_solved_by_bypassing;
          assign ostall_waddr_W_rs2_D_can_be_solved_by_bypassing
            = rs2_en_D && val_W && rf_wen_W
              && ( inst_rs2_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // Bypass Mux for Operand 1 Select logic Block
%000000   always_comb begin
 000435     if ( val_D && ( ostall_waddr_X_rs1_D_can_be_solved_by_bypassing ) ) begin                               // If write address in X matches rs1 in D and is not load instructions
 000435       op1_byp_sel_D      = 2'd1;                                                                            // Use Bypass Data from X stage
            end
 000931     else if ( val_D && ( ostall_waddr_M_rs1_D_can_be_solved_by_bypassing ) ) begin                          // If write address in M matches rs1 in D
 000931       op1_byp_sel_D      = 2'd2;                                                                            // Use Bypass Data from M stage
            end
 000558     else if ( val_D && ( ostall_waddr_W_rs1_D_can_be_solved_by_bypassing ) ) begin                          // If write address in W matches rs1 in D
 000558       op1_byp_sel_D      = 2'd3;                                                                            // Use Bypass Data from W stage
            end
 012706     else begin
 012706       op1_byp_sel_D      = 2'd0;                                                                            // Use Data from Register File
            end
          end
        
          //  Bypass Mux for Operand 2 Select logic Block
%000000   always_comb begin
 000077     if ( val_D && ( ostall_waddr_X_rs2_D_can_be_solved_by_bypassing ) ) begin                               // If write address in X matches rs2 in D and is not load instruction
 000077       op2_byp_sel_D      = 2'd1;                                                                            // Use Bypass Data from X stage
            end
 000268     else if ( val_D && ( ostall_waddr_M_rs2_D_can_be_solved_by_bypassing ) ) begin                          // If write address in M matches rs2 in D
 000268       op2_byp_sel_D      = 2'd2;                                                                            // Use Bypass Data from M stage
            end
 000182     else if ( val_D && ( ostall_waddr_W_rs2_D_can_be_solved_by_bypassing ) ) begin                          // If write address in W matches rs2 in D
 000182       op2_byp_sel_D      = 2'd3;                                                                            // Use Bypass Data from W stage
            end
 014103     else begin
 014103       op2_byp_sel_D      = 2'd0;                                                                            // Use Data from Register File
            end
          end
        
        
          // Put together ostall signal due to hazards
 000130   logic  ostall_hazard_D;
          assign ostall_hazard_D =
              ostall_load_use_X_rs1_D || ostall_load_use_X_rs2_D;
        
          // Final ostall signal
          assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_IntMulAlt_D || ostall_hazard_D );
        
          // Final stall signal
          assign stall_D  = val_D && ( ostall_D || ostall_X || ostall_M || ostall_W );
        
          // osquash due to jump instruction in D stage 
 000004   logic osquash_j_D;
          assign osquash_j_D  = (br_type_D == jal) ;
          
          // Final osquash signal in D stage
          assign osquash_D = osquash_j_D;
        
          // Final squash signal in D stage
          assign squash_D = val_D && osquash_X;
        
        
        // ------------- Valid signal for the next stage (stage X) -------------
 009013   logic  next_val_D;
          assign next_val_D = val_D && !stall_D && !squash_D;
        
        
        
        //----------------------------------------------------------------------
        // X stage
        //----------------------------------------------------------------------
        
        // ------------- Register enable logic -------------
        
          // Enable Registers if no stall in X stage
          assign reg_en_X = !stall_X;
        
 000004   logic [31:0] inst_X;                                                  // Instruction in X stage
 000340   logic [1:0]  dmem_reqstream_type_X;                                   // Data Memory Operation Type
 000530   logic        wb_result_sel_X;                                         // Writing Result Mux Select Signal
 005286   logic        rf_wen_X;                                                // Register File Write Enale Signal
 000732   logic [4:0]  rf_waddr_X;                                              // Register File Write Address
 001322   logic        proc2mngr_val_X;                                         // Processor to Mngr Message Valid Signal
%000000   logic        stats_en_wen_X;                                          // States Register Write Enable Signal
 000004   logic [3:0]  br_type_X;                                               // Branche Type
        
        
          // Receive Signal Forwarded from D stage
 014630   always_ff @( posedge clk )
 000546     if ( reset ) begin
 000546       val_X                 <= 1'b0;
            end
 000215     else if ( reg_en_X ) begin
 013869       val_X                 <= next_val_D;
 013869       rf_wen_X              <= rf_wen_D;
 013869       inst_X                <= inst_D;
 013869       alu_fn_X              <= alu_fn_D;
 013869       ex_result_sel_X       <= ex_result_sel_D;
 013869       rf_waddr_X            <= rf_waddr_D;
 013869       proc2mngr_val_X       <= proc2mngr_val_D;
 013869       dmem_reqstream_type_X <= dmem_reqstream_type_D;
 013869       wb_result_sel_X       <= wb_result_sel_D;
 013869       stats_en_wen_X        <= stats_en_wen_D;
 013869       br_type_X             <= br_type_D;
            end
        
          // Branch or Jump(jalr) logic Block, Redirect PC in F if Branch or Jump is taken
%000000   always_comb begin
 000926     if ( val_X && ( br_type_X == br_bne ) ) begin                               // If Current Instruction is bne
 000926       pc_redirect_X = !br_cond_eq_X;                                            // PC Redirect Depends on Oposite of Equal Signal 
 000926       pc_sel_X      = 2'b1;                                                     // Use Branch Target Calculated in X stage
            end
 000301     else if ( val_X && ( br_type_X == br_beq ) ) begin                          // If Current Instruction is beq
 000301       pc_redirect_X = br_cond_eq_X;                                             // PC Redirect Depends on Equal Signal
 000301       pc_sel_X      = 2'b1;                                                     // Use Branch Target Calculated in X stage
            end
 000001     else if ( val_X && ( br_type_X == br_blt ) ) begin                          // If Current Instruction is blt
 000001       pc_redirect_X = br_cond_lt_X;                                             // PC Redirect Depends on Less than Signal
 000001       pc_sel_X      = 2'b1;                                                     // Use Branch Target Calculated in X stage 
            end
 000001     else if ( val_X && ( br_type_X == br_bltu ) ) begin                         // If Current Instruction is bltu
 000001       pc_redirect_X = br_cond_ltu_X;                                            // PC Redirect Depends on unsigned Less than Signal
 000001       pc_sel_X      = 2'b1;                                                     // Use Branch Target Calculated in X stage
            end
 000001     else if ( val_X && ( br_type_X == br_bge ) ) begin                          // If Current Instruction is bge
 000001       pc_redirect_X = !br_cond_lt_X;                                            // PC Redirect Depends on Oposite of Less than Signal
 000001       pc_sel_X      = 2'b1;                                                     // Use Branch Target Calculated in X stage
            end
 000001     else if ( val_X && ( br_type_X == br_bgeu ) ) begin                         // If Current Instruction is bgeu
 000001       pc_redirect_X = !br_cond_ltu_X;                                           // PC Redirect Depends on Oposite of unsigned Less than Signal
 000001       pc_sel_X      = 2'b1;                                                     // Use Branch Target Calculated in X stage
            end
 000002     else if ( val_X && ( br_type_X == jalr) ) begin                             // If Current Instruction is jalr
 000002       pc_redirect_X = 1'b1;                                                     // PC Redirects
 000002       pc_sel_X      = 2'd3;                                                     // Use Jump Target Calculated in X stage
            end
 013397     else begin
 013397       pc_redirect_X = 1'b0;                                                     // PC does not Redirect
 013397       pc_sel_X      = 2'b0;                                                     // Use PC + 4
            end
          end
        
        
        // ------------- ostall and osquash in X -------------
        
          // set IntMulAlt_respstream_rdy if not stalling
          assign IntMulAlt_respstream_rdy = !stall_X;
        
          // ostall due to dmem_reqstream not ready.
 000164   logic ostall_dmem_reqstream_X;
          assign ostall_dmem_reqstream_X = (val_X && ( dmem_reqstream_type_X != nr ) && !dmem_reqstream_rdy);
        
          // ostall due to IntMulAlt_respstream not valid and current instruction is mul
 000002   logic ostall_IntMulAlt_X;
          assign ostall_IntMulAlt_X = val_X && !IntMulAlt_respstream_val && (ex_result_sel_X == a_mul);
        
          // Final ostall signal
          assign ostall_X = ostall_dmem_reqstream_X || ostall_IntMulAlt_X;
        
          // Final stall signal
          assign stall_X = val_X && ( ostall_X || ostall_M || ostall_W );
        
          // osquash due to taken branch
          assign osquash_X = val_X && !stall_X && pc_redirect_X;
        
          // set dmem_reqstream_val only if not stalling
          assign dmem_reqstream_val = val_X && !stall_X && ( dmem_reqstream_type_X != nr );
        
          // set dmem_reqstream_msg_type
%000000     always_comb begin
 000283       if(dmem_reqstream_type_X == st)  dmem_reqstream_msg_type = `VC_MEM_REQ_MSG_TYPE_WRITE;
 014347       else  dmem_reqstream_msg_type = `VC_MEM_REQ_MSG_TYPE_READ;
            end
        
        
        // ------------- Valid signal for the next stage (stage M) -------------
 009169   logic  next_val_X;
          assign next_val_X = val_X && !stall_X;
        
        
        
        //----------------------------------------------------------------------
        // M stage
        //----------------------------------------------------------------------
        
        // ------------- Register enable logic -------------
        
          // Enable Registers if no stall in M stage
          assign reg_en_M  = !stall_M;
        
 000004   logic [31:0] inst_M;                                                  // Instruction in M stage
 000290   logic [1:0]  dmem_reqstream_type_M;                                   // Data Memory Operation Type
 005078   logic        rf_wen_M;                                                // Register File Write Enale Signal
 000732   logic [4:0]  rf_waddr_M;                                              // Register File Write Address
 001322   logic        proc2mngr_val_M;                                         // Processor to Mngr Message Valid Signal
%000000   logic        stats_en_wen_M;                                          // States Register Write Enable Signal
        
          // Receive Signal Forwarded from X stage
 014630   always_ff @( posedge clk )
 000546     if ( reset ) begin
 000546       val_M                 <= 1'b0;
            end
 000617     else if ( reg_en_M ) begin
 013467       val_M                 <= next_val_X;
 013467       rf_wen_M              <= rf_wen_X;
 013467       inst_M                <= inst_X;
 013467       rf_waddr_M            <= rf_waddr_X;
 013467       proc2mngr_val_M       <= proc2mngr_val_X;
 013467       dmem_reqstream_type_M <= dmem_reqstream_type_X;
 013467       wb_result_sel_M       <= wb_result_sel_X;
 013467       stats_en_wen_M        <= stats_en_wen_X;
            end
        
        
        // ------------- ostall and osquash in M -------------
        
          // Set dmem_respstream_rdy if valid and not stalling and this is a lw/sw
          assign dmem_respstream_rdy = val_M && !stall_M && ( dmem_reqstream_type_M != nr );
        
          // ostall due to dmem_respstream not valid
          assign ostall_M = val_M && ( dmem_reqstream_type_M != nr ) && !dmem_respstream_val;
        
          // Final stall signal in M stage
          assign stall_M = val_M && ( ostall_M || ostall_W );
        
        
        // ------------- Valid signal for the next stage (stage M) -------------
 009170   logic  next_val_M;
          assign next_val_M = val_M && !stall_M;
        
        
        
        //----------------------------------------------------------------------
        // W stage
        //----------------------------------------------------------------------
        
        // ------------- Register enable logic -------------
        
          // Enable Registers if no stall in W stage
          assign reg_en_W = !stall_W;
        
 000004   logic [31:0] inst_W;                                                  // Instruction in M stage
 001322   logic        proc2mngr_val_W;                                         // Processor to Mngr Message Valid Signal
 005078   logic        rf_wen_pending_W;                                        // Register File Pending Write Signal
%000000   logic        stats_en_wen_pending_W;                                  // States Register Pending Write Signal
        
          // Receive Signal Forwarded from M stage
 014630   always_ff @( posedge clk ) begin
 000546     if ( reset ) begin
 000546       val_W                  <= 1'b0;
            end
%000000     else if ( reg_en_W ) begin
 014084       val_W                  <= next_val_M;
 014084       rf_wen_pending_W       <= rf_wen_M;
 014084       inst_W                 <= inst_M;
 014084       rf_waddr_W             <= rf_waddr_M;
 014084       proc2mngr_val_W        <= proc2mngr_val_M;
 014084       stats_en_wen_pending_W <= stats_en_wen_M;
            end
          end
        
        
          // Set Register File Write Enable if Register File Pending Write and Instruction in W stage is valid
          assign rf_wen_W       = val_W && rf_wen_pending_W;
        
          // Set States Register Write Enable if States Register Pending Write and Instruction in W stage is valid
          assign stats_en_wen_W = val_W && stats_en_wen_pending_W;
        
        
        // ------------- ostall and osquash in W -------------
        
          // Set Process to Mngr Message Valid
          assign proc2mngr_val = val_W && !stall_W && proc2mngr_val_W;
        
          // Set commit instruction signal if instruction in W stage is valid and there's no stalling
          assign commit_inst = val_W && !stall_W;
        
          // ostall due to proc2mngr
          assign ostall_W = val_W && proc2mngr_val_W && !proc2mngr_rdy;
        
          // stall signal used in W stage
          assign stall_W = val_W && ostall_W;
        
        
        
        endmodule
        
        `endif
        
