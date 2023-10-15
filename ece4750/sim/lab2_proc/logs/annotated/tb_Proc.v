//      // verilator_coverage annotation
        //========================================================================
        // tb_ProcSimple
        //========================================================================
        // A basic Verilog test bench for the multiplier
        
        `default_nettype none
        `timescale 1ps/1ps
        
        `ifndef DESIGN
          `define DESIGN IntMulBase
        `endif
        
        `include `"`DESIGN.v`"
        `include "vc/trace.v"
        `include "vc/TestRandDelayMem_2ports4B.v"
        // `include "vc/TestRandDelaySource.v"
        // `include "vc/TestRandDelaySink.v"
        `include "vc/TestRandDelaySourceFile.v"
        `include "vc/TestRandDelaySinkFile.v"
        
        //------------------------------------------------------------------------
        // Top-level module
        //------------------------------------------------------------------------
%000000 module top(  input logic clk, input logic linetrace );
        
 000123   logic        reset;
 000027   logic [31:0]  mngr2proc_msg;
 000445   logic         mngr2proc_val;
 000404   logic         mngr2proc_rdy;
        
          // To mngr streaming port
        
 000038   logic [31:0]  proc2mngr_msg;
 000156   logic         proc2mngr_val;
 039046   logic         proc2mngr_rdy;
        
          // Instruction Memory Request Port
        
%000000   mem_req_4B_t  imem_reqstream_msg;
 012360   logic         imem_reqstream_val;
 224765   logic         imem_reqstream_rdy;
        
          // Instruction Memory Response Port
        
%000000   mem_resp_4B_t imem_respstream_msg;
 013923   logic         imem_respstream_val;
 014102   logic         imem_respstream_rdy;
        
          // Data Memory Request Port
        
%000000   mem_req_4B_t  dmem_reqstream_msg;
 003468   logic         dmem_reqstream_val;
 221598   logic         dmem_reqstream_rdy;
        
          // Data Memory Response Port
        
%000000   mem_resp_4B_t dmem_respstream_msg;
 003550   logic         dmem_respstream_val;
 003550   logic         dmem_respstream_rdy;
        
          // extra ports; note that core_id is an input port rather than a
          // parameter so that the module only needs to be compiled once. If it
          // were a parameter, each core would be compiled separately.
        
%000000   logic [31:0]  core_id;
 005813   logic         commit_inst;
%000000   logic         stats_en;
        
 000082   logic src_done;
 000084   logic snk_done;
 000123   logic mem_clear;
        
          localparam SINK_SOURCE_MAX = 10;
          localparam MAX_DELAY = 32'd20;
          logic [  31:0 ] src_msgs [ SINK_SOURCE_MAX-1:0 ];
          logic [ 31:0 ] snk_msgs [ SINK_SOURCE_MAX-1:0 ];
        
              vc_TestRandDelaySourceFile 
          #(
            .p_msg_nbits ( 32 ),
            .p_num_msgs  ( SINK_SOURCE_MAX )
          ) src (
            .clk         (             clk ),
            .reset       (           reset ),
            .max_delay   (MAX_DELAY),
        
            .val         (     mngr2proc_val ),
            .rdy         (     mngr2proc_rdy ),
            .msg         (     mngr2proc_msg ),
        
            .done        (        src_done )
          );
        
        
        
            vc_TestRandDelaySinkFile
          #(
            .p_msg_nbits ( 32 ),
            .p_num_msgs  ( SINK_SOURCE_MAX )
          ) sink (
            .clk         (              clk ),
            .reset       (            reset ),
        
            .max_delay   (MAX_DELAY),
            .val         (      proc2mngr_val ),
            .rdy         (      proc2mngr_rdy ),
            .msg         (      proc2mngr_msg ),
        
            .done        (         snk_done )
          );
        
        
        
        lab2_proc_`DESIGN 
        #(
          .p_num_cores(1)
        ) 
        DUT
        (
          .clk(clk),
          .reset(reset),
        
          // From mngr streaming port
        
          .mngr2proc_msg(mngr2proc_msg),
          .mngr2proc_val(mngr2proc_val),
          .mngr2proc_rdy(mngr2proc_rdy),
        
          // To mngr streaming port
        
          .proc2mngr_msg(proc2mngr_msg),
          .proc2mngr_val(proc2mngr_val),
          .proc2mngr_rdy(proc2mngr_rdy),
        
          // Instruction Memory Request Port
        
          .imem_reqstream_msg(imem_reqstream_msg),
          .imem_reqstream_val(imem_reqstream_val),
          .imem_reqstream_rdy(imem_reqstream_rdy),
        
          // Instruction Memory Response Port
        
          .imem_respstream_msg(imem_respstream_msg),
          .imem_respstream_val(imem_respstream_val),
          .imem_respstream_rdy(imem_respstream_rdy),
        
          // Data Memory Request Port
        
          .dmem_reqstream_msg(dmem_reqstream_msg),
          .dmem_reqstream_val(dmem_reqstream_val),
          .dmem_reqstream_rdy(dmem_reqstream_rdy),
        
          // Data Memory Response Port
        
          .dmem_respstream_msg(dmem_respstream_msg),
          .dmem_respstream_val(dmem_respstream_val),
          .dmem_respstream_rdy(dmem_respstream_rdy), 
        
          // extra ports; note that core_id is an input port rather than a
          // parameter so that the module only needs to be compiled once. If it
          // were a parameter, each core would be compiled separately.
        
          .core_id(0),
          .commit_inst(commit_inst),
          .stats_en(stats_en)
        
        );
        
        vc_TestRandDelayMem_2ports4B
        #(
          .p_mem_nbytes(16384), // size of physical memory in bytes
          .p_opaque_nbits(8),    // mem message opaque field num bits
          .p_addr_nbits(32),   // mem message address num bits
          .p_data_nbits(32),   // mem message data num bits
          .p_reset_to_x(1)    // reset all values to X's
        
        ) mem (
          .clk(clk),
          .reset(reset),  
          
          // clears the content of memory
          .mem_clear(mem_clear),
        
          // maximum delay
          .max_delay(5),
        
          // Memory request interface port 0
          .memreq0_val(imem_reqstream_val),
          .memreq0_rdy(imem_reqstream_rdy),
          .memreq0_msg(imem_reqstream_msg),
        
          // Memory request interface port 1
          .memreq1_val(dmem_reqstream_val),
          .memreq1_rdy(dmem_reqstream_rdy),
          .memreq1_msg(dmem_reqstream_msg),
        
          // Memory response interface port 0
          .memresp0_val(imem_respstream_val),
          .memresp0_rdy(imem_respstream_rdy),
          .memresp0_msg(imem_respstream_msg),
        
          // Memory response interface port 1
          .memresp1_val(dmem_respstream_val),
          .memresp1_rdy(dmem_respstream_rdy),
          .memresp1_msg(dmem_respstream_msg)
        );
        
%000000 integer idx = 0;
        integer fp;
        string temp ;
 000123 initial begin
 000123   reset=1;
 000123   mem_clear=1;
 000123   #10
          //mem_clear=0;
          //reset=0;
 000123   $display("Loading data");
 000123   $value$plusargs( "mem=%s", temp );
 000123   fp = $fopen(temp, "r");
 000123   mem.load(fp);
 000123   $display("Data loaded");
        
%000000   if ( !$value$plusargs( "men=%s", temp ) ) begin
 000123       fp = $fopen({temp,".in"}, "r");
 000123       src.load(fp);
 000123       fp = $fopen({temp,".out"}, "r");
 000123       sink.load(fp);
          end
 000123   #10
 000123   reset=1;
 000123   mem_clear=1;
 000123   #10
 000123   reset=0;
 000123   mem_clear=0;
         
        end
        
 000082 initial begin
 000082   mngr2proc_msg =0;
 000082   mngr2proc_val =1;
        
          //proc2mngr_rdy =1;
          //@(posedge proc2mngr_val)
          // #100
          // $display("Testbench finished.  Dumping memory");
          // $finish();
          //ok
          // while(! mngr2proc_rdy)  @(negedge clk);
          // @(negedge clk);
          // @(negedge clk);
          // @(negedge clk);
          // @(negedge clk);
 441689   while((!src_done) | (!snk_done) ) @(negedge clk);
 000082   @(negedge clk);
 000082   @(negedge clk);
 000082   @(negedge clk);
 000082   @(negedge clk);
 000082   @(negedge clk);
 000082   @(negedge clk);
 000082   @(negedge clk);
        
 000082   $display("Testbench finished.  Dumping memory");
 000082   $value$plusargs( "memdump=%s", temp );
 000082   fp = $fopen(temp, "w");
 000082   mem.dump(fp);
 000082   $finish();
        end
        
 000041 initial begin
 000041   for( integer i = 0; i < 10000; i = i + 1 ) begin
 442263     @( negedge clk );
          end
 000041   $display( "TIMEOUT: Testbench didn't finish in time" );
 000041   $finish; 
        end 
        
 000123 final begin
 000041   if(src_done) begin
 000082     pass();
 000082     $display( "     [ passed ] Finished gracefully" );
 000041   end else begin
 000041     fail();
 000041     $display( "     [ failed ] Simulation did not naturally stop" );
          end
        
        end
        
        initial begin 
 442263   while(1) begin
 442263     @(negedge clk);  
 442263     if (linetrace) begin
                  //mem.display_trace;
%000000           DUT.display_trace;
            end
          end 
          $stop;
          end
        
        
        endmodule
        
