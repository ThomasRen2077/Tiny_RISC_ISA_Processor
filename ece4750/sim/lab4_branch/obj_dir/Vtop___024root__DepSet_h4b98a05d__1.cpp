// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();

VlCoroutine Vtop___024root___eval_initial__TOP__0__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__test_task__48__PC_f;
    __Vtask_top__DOT__test_task__48__PC_f = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_task__48__update_en_f;
    __Vtask_top__DOT__test_task__48__update_en_f = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_task__48__update_val_f;
    __Vtask_top__DOT__test_task__48__update_val_f = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__51__PC_f;
    __Vtask_top__DOT__test_task__51__PC_f = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_task__51__update_en_f;
    __Vtask_top__DOT__test_task__51__update_en_f = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_task__51__update_val_f;
    __Vtask_top__DOT__test_task__51__update_val_f = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__x = 6U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__x = 7U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__x = 8U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__x = 9U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f 
        = vlSelf->top__DOT__my_update_val;
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f 
        = vlSelf->top__DOT__my_update_en;
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = vlSelf->__Vtask_top__DOT__test_task__45__update_en_f;
    vlSelf->top__DOT__update_val = vlSelf->__Vtask_top__DOT__test_task__45__update_val_f;
    vlSelf->top__DOT__PC = vlSelf->__Vtask_top__DOT__test_task__45__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = 4U;
    vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk17__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with N-branches, alternating between taken and not taken\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_BranchBimodal.v", 
                                       333);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 1U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 2U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 3U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 4U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 5U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 6U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 7U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 8U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 9U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__48__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__48__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__48__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__48__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__48__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__48__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = 4U;
    vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk19__DOT__x = 0xaU;
    VL_WRITEF("Test Case: Loop with N-branches with pattern AAAB\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_BranchBimodal.v", 
                                       355);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 1U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 2U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 3U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 4U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 5U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 6U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 7U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 8U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 9U;
    vlSelf->top__DOT__my_pc = 0U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 1U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 2U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 3U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 4U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 5U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 6U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 1U;
    vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 7U;
    vlSelf->top__DOT__my_pc = ((IData)(4U) + vlSelf->top__DOT__my_pc);
    vlSelf->top__DOT__my_update_en = 1U;
    vlSelf->top__DOT__my_update_val = 0U;
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__test_task__51__update_val_f = vlSelf->top__DOT__my_update_val;
    __Vtask_top__DOT__test_task__51__update_en_f = vlSelf->top__DOT__my_update_en;
    __Vtask_top__DOT__test_task__51__PC_f = vlSelf->top__DOT__my_pc;
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       388);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__test_task__51__update_en_f;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__test_task__51__update_val_f;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__test_task__51__PC_f;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VtrigSched_hab79c6c5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchBimodal.v", 
                                                       405);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = 8U;
    vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk21__DOT__x = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_BranchBimodal.v", 
                                       376);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("utb_BranchBimodal.v", 377, "");
    vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__update_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_en))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_en = vlSelf->top__DOT__update_en;
    }
    if (((IData)(vlSelf->top__DOT__update_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_val = vlSelf->top__DOT__update_val;
    }
    if (((IData)(vlSelf->top__DOT__my_update_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__my_update_en))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_update_en = vlSelf->top__DOT__my_update_en;
    }
    if (((IData)(vlSelf->top__DOT__my_update_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__my_update_val))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_update_val 
            = vlSelf->top__DOT__my_update_val;
    }
    if ((1U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffeU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (1U & vlSelf->top__DOT__PC));
    }
    if ((2U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffdU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (2U & vlSelf->top__DOT__PC));
    }
    if ((4U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffbU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (4U & vlSelf->top__DOT__PC));
    }
    if ((8U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffff7U 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (8U & vlSelf->top__DOT__PC));
    }
    if ((0x10U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffefU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffdfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffbfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffff7fU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffeffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffdffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffbffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffff7ffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffefffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffdfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffbfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffff7fffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffeffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffdffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffbffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfff7ffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffefffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffdfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffbfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xff7fffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfeffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfdffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfbffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xf7ffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xefffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xdfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xbfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if (((vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0x7fffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((1U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffffeU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (1U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((2U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffffdU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (2U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((4U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffffbU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (4U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((8U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffff7U 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (8U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x10U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffffefU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x10U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x20U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffffdfU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x20U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x40U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffffbfU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x40U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x80U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffff7fU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x80U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x100U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffeffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x100U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x200U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffdffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x200U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x400U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffbffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x400U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x800U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffff7ffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x800U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x1000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffefffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x1000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x2000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffdfffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x2000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x4000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffbfffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x4000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x8000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffff7fffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x8000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x10000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffeffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x10000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x20000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffdffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x20000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x40000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffbffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x40000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x80000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfff7ffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x80000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x100000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffefffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x100000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x200000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffdfffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x200000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x400000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffbfffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x400000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x800000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xff7fffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x800000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x1000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfeffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x1000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x2000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfdffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x2000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x4000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfbffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x4000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x8000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xf7ffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x8000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x10000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xefffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x10000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x20000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xdfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x20000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x40000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xbfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x40000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if (((vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0x7fffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x80000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((1U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (1U & vlSelf->top__DOT__shift_factor));
    }
    if ((2U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (2U & vlSelf->top__DOT__shift_factor));
    }
    if ((4U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (4U & vlSelf->top__DOT__shift_factor));
    }
    if ((8U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (8U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x10U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x10U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x20U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x20U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x40U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x40U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x80U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x80U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x100U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x100U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x200U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x200U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x400U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x400U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x800U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x800U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x1000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x1000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x2000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x2000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x4000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x4000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x8000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x8000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x10000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x10000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x20000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x20000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x40000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x40000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x80000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x80000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x100000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x100000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x200000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x200000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x400000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x400000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x800000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x800000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x1000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x1000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x2000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x2000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x4000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x4000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x8000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x8000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x10000000U & (vlSelf->top__DOT__shift_factor 
                        ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x10000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x20000000U & (vlSelf->top__DOT__shift_factor 
                        ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x20000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x40000000U & (vlSelf->top__DOT__shift_factor 
                        ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x40000000U & vlSelf->top__DOT__shift_factor));
    }
    if (((vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x80000000U & vlSelf->top__DOT__shift_factor));
    }
    vlSelf->top__DOT__DUT__DOT__PHT_index_update_value 
        = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)) 
           | (IData)(vlSelf->top__DOT__update_val));
    vlSelf->top__DOT__DUT__DOT__PHT_index = ((0x2bU 
                                              >= (0x3fU 
                                                  & ((IData)(0xbU) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->top__DOT__PC 
                                                         >> 2U)))))
                                              ? (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__DUT__DOT__BH 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(0xbU) 
                                                                * 
                                                                (3U 
                                                                 & (vlSelf->top__DOT__PC 
                                                                    >> 2U)))))))
                                              : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    vlSelf->top__DOT__DUT__DOT__current_PHT = (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__DUT__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (0x7fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U)))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
    }
    if ((IData)((((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT____Vtogcov__prediction)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__prediction = (1U 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                                      >> 1U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*43:0*/ __Vdly__top__DOT__DUT__DOT__BH;
    __Vdly__top__DOT__DUT__DOT__BH = 0;
    VlWide<128>/*4095:0*/ __Vdly__top__DOT__DUT__DOT__PHT;
    VL_ZERO_W(4096, __Vdly__top__DOT__DUT__DOT__PHT);
    // Body
    vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__update_en) {
            vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
            if (vlSelf->top__DOT__update_val) {
                vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
                if ((3U == (3U & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                            << 1U)))
                                    ? 0U : (vlSelf->top__DOT__DUT__DOT__PHT[
                                            (((IData)(1U) 
                                              + (0xfffU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                    << 1U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                      << 1U))))) 
                                  | (vlSelf->top__DOT__DUT__DOT__PHT[
                                     (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                               >> 4U))] 
                                     >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                  << 1U))))))) {
                    vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
                }
                if ((3U != (3U & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                            << 1U)))
                                    ? 0U : (vlSelf->top__DOT__DUT__DOT__PHT[
                                            (((IData)(1U) 
                                              + (0xfffU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                    << 1U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                      << 1U))))) 
                                  | (vlSelf->top__DOT__DUT__DOT__PHT[
                                     (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                               >> 4U))] 
                                     >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                  << 1U))))))) {
                    vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__update_val)))) {
                vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
                if ((0U == (3U & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                            << 1U)))
                                    ? 0U : (vlSelf->top__DOT__DUT__DOT__PHT[
                                            (((IData)(1U) 
                                              + (0xfffU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                    << 1U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                      << 1U))))) 
                                  | (vlSelf->top__DOT__DUT__DOT__PHT[
                                     (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                               >> 4U))] 
                                     >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                  << 1U))))))) {
                    vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0U != (3U & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                            << 1U)))
                                    ? 0U : (vlSelf->top__DOT__DUT__DOT__PHT[
                                            (((IData)(1U) 
                                              + (0xfffU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                    << 1U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                      << 1U))))) 
                                  | (vlSelf->top__DOT__DUT__DOT__PHT[
                                     (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                               >> 4U))] 
                                     >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                  << 1U))))))) {
                    vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__update_en)))) {
            vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        }
    }
    VL_ASSIGN_W(4096,__Vdly__top__DOT__DUT__DOT__PHT, vlSelf->top__DOT__DUT__DOT__PHT);
    __Vdly__top__DOT__DUT__DOT__BH = vlSelf->top__DOT__DUT__DOT__BH;
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        VL_CONST_W_1X(4096,__Vdly__top__DOT__DUT__DOT__PHT,0x00000000);
        __Vdly__top__DOT__DUT__DOT__BH = 0ULL;
    } else {
        VL_ASSIGN_W(4096,__Vdly__top__DOT__DUT__DOT__PHT, vlSelf->top__DOT__DUT__DOT__PHT);
        __Vdly__top__DOT__DUT__DOT__BH = vlSelf->top__DOT__DUT__DOT__BH;
        if (vlSelf->top__DOT__update_en) {
            VL_ASSIGNSEL_WI(4096,2,(0xfffU & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                              << 1U)), __Vdly__top__DOT__DUT__DOT__PHT, 
                            (3U & ((IData)(vlSelf->top__DOT__update_val)
                                    ? ((3U == (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__DUT__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (0x7fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U))))))
                                        ? 3U : ((IData)(1U) 
                                                + (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                         << 1U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->top__DOT__DUT__DOT__PHT[
                                                     (((IData)(1U) 
                                                       + 
                                                       (0xfffU 
                                                        & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                           << 1U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                          << 1U))))) 
                                                   | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                      (0x7fU 
                                                       & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                          >> 4U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                          << 1U))))))
                                    : ((0U == (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__DUT__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (0x7fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U))))))
                                        ? 0U : ((((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U)))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0xfffU 
                                                      & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                         << 1U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                        << 1U))))) 
                                                 | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                        >> 4U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                        << 1U)))) 
                                                - (IData)(1U))))));
            vlSelf->top__DOT__DUT__DOT____Vlvbound_h34004a03__0 
                = (0x7ffU & ((((0x2bU >= (0x3fU & ((IData)(0xbU) 
                                                   * 
                                                   (3U 
                                                    & (vlSelf->top__DOT__PC 
                                                       >> 2U)))))
                                ? (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                           >> (0x3fU 
                                               & ((IData)(0xbU) 
                                                  * 
                                                  (3U 
                                                   & (vlSelf->top__DOT__PC 
                                                      >> 2U))))))
                                : 0U) << 1U) + (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
            if ((0x2bU >= (0x3fU & ((IData)(0xbU) * 
                                    (3U & (vlSelf->top__DOT__PC 
                                           >> 2U)))))) {
                __Vdly__top__DOT__DUT__DOT__BH = ((
                                                   (~ 
                                                    (0x7ffULL 
                                                     << 
                                                     (0x3fU 
                                                      & ((IData)(0xbU) 
                                                         * 
                                                         (3U 
                                                          & (vlSelf->top__DOT__PC 
                                                             >> 2U)))))) 
                                                   & __Vdly__top__DOT__DUT__DOT__BH) 
                                                  | (0xfffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->top__DOT__DUT__DOT____Vlvbound_h34004a03__0)) 
                                                        << 
                                                        (0x3fU 
                                                         & ((IData)(0xbU) 
                                                            * 
                                                            (3U 
                                                             & (vlSelf->top__DOT__PC 
                                                                >> 2U)))))));
            }
        }
    }
    VL_ASSIGN_W(4096,vlSelf->top__DOT__DUT__DOT__PHT, __Vdly__top__DOT__DUT__DOT__PHT);
    vlSelf->top__DOT__DUT__DOT__BH = __Vdly__top__DOT__DUT__DOT__BH;
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__BH) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__BH)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffffffeULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT__BH)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffffffdULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffffffbULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffffff7ULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffffffefULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffffffdfULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffffffbfULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffffff7fULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffffeffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffffdffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffffbffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffff7ffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffffefffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffffdfffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffffbfffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffff7fffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffeffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffdffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffffbffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffff7ffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffefffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffdfffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffffbfffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffff7fffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffeffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffdffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffffbffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffff7ffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffefffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffdfffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfffbfffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfff7fffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffeffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffdffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xffbffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xff7ffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfefffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfdfffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xfbfffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xf7fffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xeffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xdffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__BH 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__BH 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0xbffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT__BH ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
                 >> 0x2bU))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__BH = 
            ((0x7ffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__BH) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__BH 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
}
