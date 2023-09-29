//      // verilator_coverage annotation
        //=========================================================================
        // 5-Stage Fully Bypassed Pipelined Processor
        //=========================================================================
        
        `ifndef LAB2_PROC_PROC_ALT_V
        `define LAB2_PROC_PROC_ALT_V
        
        `include "vc/mem-msgs.v"
        `include "vc/queues.v"
        `include "vc/trace.v"
        
        //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        // Include components here
        //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
        module lab2_proc_ProcAlt
        #(
          parameter p_num_cores = 1
        )
        (
 139979   input  logic         clk,
 000007   input  logic         reset,
        
          // From mngr streaming port
        
 000001   input  logic [31:0]  mngr2proc_msg,
 000007   input  logic         mngr2proc_val,
%000000   output logic         mngr2proc_rdy,
        
          // To mngr streaming port
        
%000000   output logic [31:0]  proc2mngr_msg,
%000000   output logic         proc2mngr_val,
 004660   input  logic         proc2mngr_rdy,
        
          // Instruction Memory Request Port
        
%000000   output mem_req_4B_t  imem_reqstream_msg,
%000000   output logic         imem_reqstream_val,
 035308   input  logic         imem_reqstream_rdy,
        
          // Instruction Memory Response Port
        
%000000   input  mem_resp_4B_t imem_respstream_msg,
%000000   input  logic         imem_respstream_val,
%000000   output logic         imem_respstream_rdy,
        
          // Data Memory Request Port
        
%000000   output mem_req_4B_t  dmem_reqstream_msg,
%000000   output logic         dmem_reqstream_val,
 035119   input  logic         dmem_reqstream_rdy,
        
          // Data Memory Response Port
        
%000000   input  mem_resp_4B_t dmem_respstream_msg,
%000000   input  logic         dmem_respstream_val,
%000000   output logic         dmem_respstream_rdy,
        
          // stats output; core_id is an input port rather than a parameter so
          // that the module only needs to be compiled once. If it were a
          // parameter, each core would be compiled separately.
        
%000000   input  logic [31:0]  core_id,
%000000   output logic         commit_inst,
%000000   output logic         stats_en
        );
        
          //----------------------------------------------------------------------
          // Instruction Memory Request Bypass Queue
          //----------------------------------------------------------------------
        
%000000   logic [1:0]  imem_queue_num_free_entries;
%000000   mem_req_4B_t imem_reqstream_enq_msg;
%000000   logic        imem_reqstream_enq_val;
%000000   logic        imem_reqstream_enq_rdy;
        
%000000   logic [31:0] imem_reqstream_enq_msg_addr;
        
          assign imem_reqstream_enq_msg.type_  = `VC_MEM_REQ_MSG_TYPE_READ;
          assign imem_reqstream_enq_msg.opaque = 8'b0;
          assign imem_reqstream_enq_msg.addr   = imem_reqstream_enq_msg_addr;
          assign imem_reqstream_enq_msg.len    = 2'd0;
          assign imem_reqstream_enq_msg.data   = 32'bx;
        
          vc_Queue#(`VC_QUEUE_BYPASS,$bits(mem_req_4B_t),2) imem_queue
          (
            .clk     (clk),
            .reset   (reset),
            .num_free_entries(imem_queue_num_free_entries),
        
            .enq_msg (imem_reqstream_enq_msg),
            .enq_val (imem_reqstream_enq_val),
            .enq_rdy (imem_reqstream_enq_rdy),
        
            .deq_msg (imem_reqstream_msg),
            .deq_val (imem_reqstream_val),
            .deq_rdy (imem_reqstream_rdy)
          );
        
          //----------------------------------------------------------------------
          // Imem Drop Unit
          //----------------------------------------------------------------------
        
%000000   logic         imem_respstream_drop;
%000000   mem_resp_4B_t imem_respstream_drop_msg;
%000000   logic         imem_respstream_drop_val;
%000000   logic         imem_respstream_drop_rdy;
        
          // Add drop unit
        
          //----------------------------------------------------------------------
          // Data Memory Request Bypass Queue
          //----------------------------------------------------------------------
        
%000000   logic        dmem_queue_num_free_entries;
%000000   mem_req_4B_t dmem_reqstream_enq_msg;
%000000   logic        dmem_reqstream_enq_val;
%000000   logic        dmem_reqstream_enq_rdy;
        
%000000   logic [2:0 ] dmem_reqstream_enq_msg_type;
%000000   logic [31:0] dmem_reqstream_enq_msg_addr;
%000000   logic [31:0] dmem_reqstream_enq_msg_data;
        
          assign dmem_reqstream_enq_msg.type_  = dmem_reqstream_enq_msg_type;
          assign dmem_reqstream_enq_msg.opaque = 8'b0;
          assign dmem_reqstream_enq_msg.addr   = dmem_reqstream_enq_msg_addr;
          assign dmem_reqstream_enq_msg.len    = 2'd0;
          assign dmem_reqstream_enq_msg.data   = dmem_reqstream_enq_msg_data;
        
          vc_Queue#(`VC_QUEUE_BYPASS,$bits(mem_req_4B_t),1) dmem_queue
          (
            .clk     (clk),
            .reset   (reset),
            .num_free_entries(dmem_queue_num_free_entries),
        
            .enq_msg (dmem_reqstream_enq_msg),
            .enq_val (dmem_reqstream_enq_val),
            .enq_rdy (dmem_reqstream_enq_rdy),
        
            .deq_msg (dmem_reqstream_msg),
            .deq_val (dmem_reqstream_val),
            .deq_rdy (dmem_reqstream_rdy)
          );
        
          //----------------------------------------------------------------------
          // proc2mngr Bypass Queue
          //----------------------------------------------------------------------
        
%000000   logic        proc2mngr_queue_num_free_entries;
%000000   logic [31:0] proc2mngr_enq_msg;
%000000   logic        proc2mngr_enq_val;
%000000   logic        proc2mngr_enq_rdy;
        
          vc_Queue#(`VC_QUEUE_BYPASS,32,1) proc2mngr_queue
          (
            .clk     (clk),
            .reset   (reset),
            .num_free_entries(proc2mngr_queue_num_free_entries),
        
            .enq_msg (proc2mngr_enq_msg),
            .enq_val (proc2mngr_enq_val),
            .enq_rdy (proc2mngr_enq_rdy),
        
            .deq_msg (proc2mngr_msg),
            .deq_val (proc2mngr_val),
            .deq_rdy (proc2mngr_rdy)
          );
        
          //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
          // Instantiate and connect components here
          //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
          //----------------------------------------------------------------------
          // Line tracing
          //----------------------------------------------------------------------
        
          `ifndef SYNTHESIS
        
          //lab2_proc_tinyrv2_encoding_InstTasks tinyrv2();
        
          logic [`VC_TRACE_NBITS-1:0] str;
          logic [`VC_TRACE_NBITS-1:0] temp;
        
          `VC_TRACE_BEGIN
          begin
        
            // $sformat(temp,"%x",mngr2proc_msg);
            // vc_trace.append_val_rdy_str( trace_str, mngr2proc_val, mngr2proc_rdy, temp );
            // vc_trace.append_str( trace_str, ">" );
        
            // if ( !ctrl.val_F )
            //   vc_trace.append_chars( trace_str, " ", 8 );
            // else if ( ctrl.squash_F ) begin
            //   vc_trace.append_str( trace_str, "~" );
            //   vc_trace.append_chars( trace_str, " ", 8-1 );
            // end else if ( ctrl.stall_F ) begin
            //   vc_trace.append_str( trace_str, "#" );
            //   vc_trace.append_chars( trace_str, " ", 8-1 );
            // end else begin
            //   $sformat( str, "%x", dpath.pc_F );
            //   vc_trace.append_str( trace_str, str );
            // end
        
            // vc_trace.append_str( trace_str, "|" );
        
            // if ( !ctrl.val_D )
            //   vc_trace.append_chars( trace_str, " ", 23 );
            // else if ( ctrl.squash_D ) begin
            //   vc_trace.append_str( trace_str, "~" );
            //   vc_trace.append_chars( trace_str, " ", 23-1 );
            // end else if ( ctrl.stall_D ) begin
            //   vc_trace.append_str( trace_str, "#" );
            //   vc_trace.append_chars( trace_str, " ", 23-1 );
            // end else
            //   vc_trace.append_str( trace_str, { 3896'b0, tinyrv2.disasm( ctrl.inst_D ) } );
        
            // vc_trace.append_str( trace_str, "|" );
        
            // if ( !ctrl.val_X )
            //   vc_trace.append_chars( trace_str, " ", 4 );
            // else if ( ctrl.stall_X ) begin
            //   vc_trace.append_str( trace_str, "#" );
            //   vc_trace.append_chars( trace_str, " ", 4-1 );
            // end else
            //   vc_trace.append_str( trace_str, { 4064'b0, tinyrv2.disasm_tiny( ctrl.inst_X ) } );
        
            // vc_trace.append_str( trace_str, "|" );
        
            // if ( !ctrl.val_M )
            //   vc_trace.append_chars( trace_str, " ", 4 );
            // else if ( ctrl.stall_M ) begin
            //   vc_trace.append_str( trace_str, "#" );
            //   vc_trace.append_chars( trace_str, " ", 4-1 );
            // end else
            //   vc_trace.append_str( trace_str, { 4064'b0, tinyrv2.disasm_tiny( ctrl.inst_M ) } );
        
            // vc_trace.append_str( trace_str, "|" );
        
            // if ( !ctrl.val_W )
            //   vc_trace.append_chars( trace_str, " ", 4 );
            // else if ( ctrl.stall_W ) begin
            //   vc_trace.append_str( trace_str, "#" );
            //   vc_trace.append_chars( trace_str, " ", 4-1 );
            // end else
            //   vc_trace.append_str( trace_str, { 4064'b0, tinyrv2.disasm_tiny( ctrl.inst_W ) } );
            
            // vc_trace.append_str( trace_str, ">" );
            // $sformat(temp,"%x",proc2mngr_enq_msg);
            // vc_trace.append_val_rdy_str( trace_str, proc2mngr_enq_val, proc2mngr_enq_rdy, temp);
        
          end
          `VC_TRACE_END
        
          vc_MemReqMsg4BTrace imem_reqstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (imem_reqstream_val),
            .rdy   (imem_reqstream_rdy),
            .msg   (imem_reqstream_msg)
          );
        
          vc_MemReqMsg4BTrace dmem_reqstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (dmem_reqstream_val),
            .rdy   (dmem_reqstream_rdy),
            .msg   (dmem_reqstream_msg)
          );
        
          vc_MemRespMsg4BTrace imem_respstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (imem_respstream_val),
            .rdy   (imem_respstream_rdy),
            .msg   (imem_respstream_msg)
          );
        
          vc_MemRespMsg4BTrace dmem_respstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (dmem_respstream_val),
            .rdy   (dmem_respstream_rdy),
            .msg   (dmem_respstream_msg)
          );
        
          `endif
        
        endmodule
        
        `endif
        
