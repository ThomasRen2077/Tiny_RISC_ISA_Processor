// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgWData(oldp+0,(vlSymsp->TOP__top__imul.__PVT__str),4096);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__top__imul.__PVT__idx0),32);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__top__imul.__PVT__idx1),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__top__imul__vc_trace.__PVT__len0),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__top__imul__vc_trace.__PVT__len1),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1),32);
        bufp->chgWData(oldp+134,(vlSymsp->TOP__top__imul__vc_trace.__PVT__storage),4096);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles_next),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+263,(vlSymsp->TOP__top.__PVT__reset));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__top.__PVT__istream_val));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__top.__PVT__ostream_rdy));
        bufp->chgIData(oldp+266,(vlSymsp->TOP__top.__PVT__istream_msg_a),32);
        bufp->chgIData(oldp+267,(vlSymsp->TOP__top.__PVT__istream_msg_b),32);
        bufp->chgIData(oldp+268,(vlSymsp->TOP__top.__PVT__a),32);
        bufp->chgIData(oldp+269,(vlSymsp->TOP__top.__PVT__b),32);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__top.__PVT__unnamedblk1__DOT__x),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+271,(vlSymsp->TOP__top.clk));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__top.linetrace));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__top__imul.__PVT__clk));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__top__imul__vc_trace.__PVT__clk));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+275,(vlSymsp->TOP__top.__PVT__istream_msg),64);
        bufp->chgBit(oldp+277,(vlSymsp->TOP__top__imul.__PVT__reset));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__top__imul.__PVT__istream_val));
        bufp->chgQData(oldp+279,(vlSymsp->TOP__top__imul.__PVT__istream_msg),64);
        bufp->chgBit(oldp+281,(vlSymsp->TOP__top__imul.__PVT__ostream_rdy));
        bufp->chgIData(oldp+282,(vlSymsp->TOP__top__imul.__PVT__a),32);
        bufp->chgIData(oldp+283,(vlSymsp->TOP__top__imul.__PVT__b),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+284,(vlSymsp->TOP__top.__PVT__istream_rdy));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__top.__PVT__ostream_val));
        bufp->chgIData(oldp+286,(vlSymsp->TOP__top.__PVT__ostream_msg),32);
        bufp->chgBit(oldp+287,(vlSymsp->TOP__top__imul.__PVT__istream_rdy));
        bufp->chgBit(oldp+288,(vlSymsp->TOP__top__imul.__PVT__ostream_val));
        bufp->chgIData(oldp+289,(vlSymsp->TOP__top__imul.__PVT__ostream_msg),32);
    }
    bufp->chgBit(oldp+290,(vlSelf->clk));
    bufp->chgBit(oldp+291,(vlSelf->linetrace));
    bufp->chgBit(oldp+292,(vlSymsp->TOP__top__imul.__PVT__next_ostream_val));
    bufp->chgIData(oldp+293,(vlSymsp->TOP__top__imul.__PVT__next_ostream_msg),32);
    bufp->chgBit(oldp+294,(vlSymsp->TOP__top__imul__vc_trace.__PVT__reset));
    bufp->chgIData(oldp+295,(vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles),32);
    bufp->chgCData(oldp+296,(vlSymsp->TOP__top__imul__vc_trace.__PVT__level),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
