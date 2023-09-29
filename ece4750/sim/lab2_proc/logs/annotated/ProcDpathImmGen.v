//      // verilator_coverage annotation
        //========================================================================
        // Proc Datapath Immediate Generation
        //========================================================================
        // Generate intermediate (imm) based on type
        
        `ifndef LAB2_PROC_PROC_DPATH_IMM_GEN_V
        `define LAB2_PROC_PROC_DPATH_IMM_GEN_V
        
        module lab2_proc_ProcDpathImmGen
        (
%000000   input  logic [ 2:0] imm_type,
 002211   input  logic [31:0] inst,
 002319   output logic [31:0] imm
        );
        
%000000   always_comb begin
%000000     case ( imm_type )
 019664       3'd0: // I-type
 019664         imm = { {21{inst[31]}}, inst[30:25], inst[24:21], inst[20] };
        
 000627       3'd2: // B-type
 000627         imm = { {20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0 };
        
              //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''
              // Add more immediate types
              //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
%000000       default:
%000000         imm = 32'bx;
        
            endcase
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DPATH_IMM_GEN_V */
        
