// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_IntMul.v", 20, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top.imul.shifts)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_comb__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] top.imul.shifts)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] top.ostream_val)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] top.imul.shifts)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] top.ostream_val)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__istream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__istream_val_f = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ostream_rdy_f = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__istream_msg_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__istream_msg_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__istream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vtogcov__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__istream_val_f = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ostream_rdy_f = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__istream_msg_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__istream_msg_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk1__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__next_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__next_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__next_ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__next_ostream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__add_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__finish = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__next_finish = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__checkone = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imul__DOT__shifts = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imul__DOT____Vcellinp__Add____pinNumber2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->top__DOT__imul__DOT__str);
    vlSelf->top__DOT__imul__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT____Vtogcov__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT____Vtogcov__a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT____Vtogcov__b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT____Vtogcov__next_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT____Vtogcov__next_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__add_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT____Vtogcov__finish = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__next_finish = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__checkone = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imul__DOT____Vtogcov__shifts = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imul__DOT__Add__DOT____Vtogcov__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__imul__DOT__shifts__0 = VL_RAND_RESET_I(5);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__imul__DOT__shifts__1 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
