//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Sink
        //========================================================================
        // p_sim_mode should be set to one in simulators. This will cause the
        // sink to abort after the first failure with an appropriate error
        // message.
        
        `ifndef VC_TEST_SINK_FILE_V
        `define VC_TEST_SINK_FILE_V
        
        `include "vc/regs.v"
        `include "vc/trace.v"
        
        module vc_TestSinkFile
        #(
          parameter p_msg_nbits = 1,
          parameter p_num_msgs  = 1024,
          parameter p_sim_mode  = 0
        )(
 198509   input  logic                   clk,
 000021   input  logic                   reset,
        
          // Sink message interface
        
 000016   input  logic                   val,
 000023   output logic                   rdy,
 000004   input  logic [p_msg_nbits-1:0] msg,
        
          // Goes high once all sink data has been received
        
 000014   output logic                   done
        );
        
          //----------------------------------------------------------------------
          // Local parameters
          //----------------------------------------------------------------------
        
          // Size of a physical address for the memory in bits
        
          localparam c_index_nbits = $clog2(p_num_msgs);
        
          //----------------------------------------------------------------------
          // State
          //----------------------------------------------------------------------
        
          // Memory which stores messages to verify against those received
        
          logic [p_msg_nbits-1:0] m[p_num_msgs-1:0];
        
          // Index register pointing to next message to verify
        
 000016   logic                     index_en;
%000000   logic [c_index_nbits-1:0] index_next;
%000000   logic [c_index_nbits-1:0] index;
%000000   logic [c_index_nbits-1:0] index_max;
        
          vc_EnResetReg#(c_index_nbits,{c_index_nbits{1'b0}}) index_reg
          (
            .clk   (clk),
            .reset (reset),
            .en    (index_en),
            .d     (index_next),
            .q     (index)
          );
        
          // Register reset
        
 000021   logic reset_reg;
 099244   always_ff @( posedge clk )
 099244     reset_reg <= reset;
%000000   logic [31:0] data_data;
 000021   task load (integer file_load);
 000021   begin
        
            integer count;
 000021     index_max =0;
 000015     while (!$feof(file_load))begin
 000015       count=$fscanf(file_load, "%x\n", data_data); 
 000015       if( count ==0) break;
              
              
 000015       $display("Loading %x",data_data);
              
 000015       m[index_max]= data_data;
 000015       index_max =index_max +1;
              
            end
        
          end
          endtask
          //----------------------------------------------------------------------
          // Combinational logic
          //----------------------------------------------------------------------
        
%000000   logic done_next;
          assign done = !reset_reg && ( index == ( index_max ) );
        
 099244   always_ff @( posedge clk ) begin
            //if( val && rdy ) done <= done_next;
          end
        
          // Sink message interface is ready as long as we are not done
        
          assign rdy = !reset_reg && !done;
        
          // We bump the index pointer every time we successfully receive a
          // message, otherwise the index stays the same.
        
          assign index_en   = val && rdy;
          assign index_next = index + 1'b1;
        
          // The go signal is high when a message is transferred
        
 000016   logic go;
          assign go = val && rdy;
        
          //----------------------------------------------------------------------
          // Verification logic
          //----------------------------------------------------------------------
        
%000000   logic        failed;
%000000   logic  [3:0] verbose;
        
 000005   logic  [p_msg_nbits-1:0] m_curr;
          assign m_curr = m[index];
        
 099244   always_ff @( posedge clk ) begin
 000273     if ( reset ) begin
 000273       failed <= 0;
            end
 000008     else if ( !reset && go ) begin
        
 000008       casez ( msg )
 000008         m_curr :begin
 000008           pass();
 000008           $display( "     [ passed ] expected = %x, actual = %x",
 000008                     m[index], msg );
                end
%000000         default : begin
%000000           fail();
%000000           failed <= 1;
%000000           $display( "     [ FAILED ] expected = %x, actual = %x",
%000000                     m[index], msg );
                            
%000000           if ( p_sim_mode ) begin
%000000             $display( "" );
%000000             $display( " ERROR: Test sink found a failure!" );
%000000             $display( "  - module   : %m" );
%000000             $display( "  - expected : %x", m[index] );
%000000             $display( "  - actual   : %x", msg );
%000000             $display( "" );
%000000             $display( " Verify that all unit tests pass; if they do, then debug" );
%000000             $display( " the failure and add a new unit test which would have" );
%000000             $display( " caught the bug in the first place." );
%000000             $display( "" );
%000000             $finish;
                  end
                end
              endcase
        
            end
          end
        /* verilator lint_off WIDTH */
          integer t;
 000021   final begin
 000007     for(t = index; t<index_max; t++ )begin
 000007       fail();
 000007       $display( "     [ FAILED ] expected = %x, actual = None",
 000007                       m[index]);
            end 
          end
        /* verilator lint_on WIDTH */
          //----------------------------------------------------------------------
          // Assertions
          //----------------------------------------------------------------------
        
 099244   always_ff @( posedge clk ) begin
 000273     if ( !reset ) begin
%000000       `VC_ASSERT_NOT_X( val );
%000000       `VC_ASSERT_NOT_X( rdy );
            end
          end
        
          //----------------------------------------------------------------------
          // Line Tracing
          //----------------------------------------------------------------------
        
          // logic [`VC_TRACE_NBITS_TO_NCHARS(p_msg_nbits)*8-1:0] msg_str;
        
          // `VC_TRACE_BEGIN
          // begin
          //   $sformat( msg_str, "%x", msg );
          //   vc_trace.append_val_rdy_str( trace_str, val, rdy, msg_str );
          // end
          // `VC_TRACE_END
        
        endmodule
        
        `endif /* VC_TEST_SINK_V */
        
