// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Trace.h"

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__imul__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Trace___stl_sequent__TOP__top__imul__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__imul__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Trace___stl_sequent__TOP__top__imul__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___configure_coverage(Vtop_vc_Trace* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Trace___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "../vc/trace.v", 20, 15, "", "v_toggle/vc_Trace", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "../vc/trace.v", 21, 15, "", "v_toggle/vc_Trace", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "../vc/trace.v", 49, 15, "", "v_toggle/vc_Trace", "level[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "../vc/trace.v", 49, 15, "", "v_toggle/vc_Trace", "level[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "../vc/trace.v", 49, 15, "", "v_toggle/vc_Trace", "level[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "../vc/trace.v", 49, 15, "", "v_toggle/vc_Trace", "level[3]", "");
}
