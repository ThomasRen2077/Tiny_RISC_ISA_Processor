// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB1_IMUL_INTMULBASE_H_
#define VERILATED_VTOP_LAB1_IMUL_INTMULBASE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_vc_SimpleAdder__P20;
class Vtop_vc_Trace;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab1_imul_IntMulBase final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_SimpleAdder__P20* __PVT__Add;
    Vtop_vc_Trace* __PVT__vc_trace;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__istream_val,0,0);
    VL_OUT8(__PVT__istream_rdy,0,0);
    VL_OUT8(__PVT__ostream_val,0,0);
    VL_IN8(__PVT__ostream_rdy,0,0);
    CData/*1:0*/ __PVT__state;
    CData/*1:0*/ __PVT__nextstate;
    CData/*7:0*/ __PVT__counter;
    CData/*0:0*/ __PVT__next_ostream_val;
    CData/*1:0*/ __Vdly__state;
    CData/*0:0*/ __Vdly__ostream_val;
    CData/*7:0*/ __Vdly__counter;
    CData/*0:0*/ __Vdly__istream_rdy;
    VL_OUT(__PVT__ostream_msg,31,0);
    IData/*31:0*/ __PVT__a;
    IData/*31:0*/ __PVT__b;
    IData/*31:0*/ __PVT__next_a;
    IData/*31:0*/ __PVT__next_b;
    IData/*31:0*/ __PVT__next_ostream_msg;
    IData/*31:0*/ __PVT__add_result;
    VlWide<128>/*4095:0*/ __PVT__str;
    IData/*31:0*/ __PVT__idx1;
    IData/*31:0*/ __PVT__idx0;
    IData/*31:0*/ __Vdly__a;
    IData/*31:0*/ __Vdly__b;
    IData/*31:0*/ __Vdly__ostream_msg;
    VL_IN64(__PVT__istream_msg,63,0);

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab1_imul_IntMulBase(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab1_imul_IntMulBase();
    VL_UNCOPYABLE(Vtop_lab1_imul_IntMulBase);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
