// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    if (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
        } else if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 2U;
        } else {
            if ((0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                        ? 2U : 3U);
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
        }
        if ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D)) {
            if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
                = ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)));
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D 
                = (0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D));
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
                = ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   & (0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)));
        } else {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D = 0U;
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x40005033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (((((((((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x2003U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     & ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | ((0x2023U != (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                              & ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                 | (0x67U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D)))))))));
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 4U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 5U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 6U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 7U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 8U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 9U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                        ? 0U : 3U);
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
                = ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x40005033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | ((0x5033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               | (0x1033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
        } else {
            if (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                if ((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
                } else if ((0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 4U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
                } else if ((0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
                } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 6U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 7U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 5U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 8U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 5U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 9U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 5U;
                } else {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 3U;
                }
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            } else if (((((((((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                              | (0x2003U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                             | (0x2023U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                if ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 3U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                } else {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                    if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__imm_type_D = 4U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 7U;
                    } else if ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xaU;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 8U;
                    } else {
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D 
                            = ((0x1063U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))
                                ? 1U : ((0x63U == (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))
                                         ? 2U : 3U));
                    }
                }
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
                if ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 4U;
                } else if ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 5U;
                } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 6U;
                } else {
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                }
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
                = ((~ ((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             | (0x4013U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                   & (((((((((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             | (0x2003U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x2023U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))
                       ? ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          & ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             & ((0x2023U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                | ((0x6fU != (0x7fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                   & (0x67U != (0x707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst_D))))))
                       : ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             | (0x7063U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))))));
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x40005033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (((((((((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x2003U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))
                      ? ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         & ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | ((0x2023U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               | (0x6fU != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))
                      : ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x7063U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
    }
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                        | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x40000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x4033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x2033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[2346].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
        if ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x2033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x3033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x40005033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x5033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
            if (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                if ((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((((((((0x7013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                | (0x4013U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x2013U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x3013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                             | (0x40005013U == (0xfe00707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x5013U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x1013U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                if (((((((((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                    if ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x2023U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x6fU != (0x7fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x67U == (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[2364].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x67U != (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x1063U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[2365].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x1063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            if ((0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[2366].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x63U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[2367].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((((((((0x17U == (0x7fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                    | (0x2003U == (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                   | (0x2023U == (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                 | (0x67U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                | (0x1063U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x63U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x4063U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                    if ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[2368].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x6063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[2369].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x5063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x7063U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[2370].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x7063U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[2371].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D 
        = (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x40005013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (((((((((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | (0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D 
        = ((~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                     | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
           & ((~ ((((((((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | (0x2033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x40005033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
              & ((~ ((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x40005013U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                 & (((((((((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    & ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       & (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               & (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    vlSelf->top__DOT__DUT__DOT__op1_sel_D = ((~ (((
                                                   (((((0x13U 
                                                        == vlSelf->top__DOT__DUT__DOT__inst_D) 
                                                       | (0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                      | (0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                     | (0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                    | (0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                   | (0x2000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                  | (0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                 | (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                                             & ((~ 
                                                 ((((((((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                                        | (0x2033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                       | (0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                      | (0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                     | (0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                    | (0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                   | (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                                                & ((~ 
                                                    ((((((((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                                           | (0x4013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                          | (0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                         | (0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                        | (0x40005013U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                       | (0x5013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                      | (0x1013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                     | (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                                                   & (((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                                             | (0x2003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                            | (0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                          | (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                         | (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                        | (0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                       | (0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                      & (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__DUT__DOT__inst_D))))));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   >> 0xfU))];
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   >> 0x14U))];
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))));
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink_msg ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
           & ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)));
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg))) {
                if (vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go) {
                    vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go)))) {
                    vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__ostream_go))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__ostream_go 
            = vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[2474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
                  & (0x7c1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[2378].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
                  & (0x7c0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[2374].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrw_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[2377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[2373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D)));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)))) {
        vlSymsp->__Vcoverage[3352].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_sel_D 
            = vlSelf->top__DOT__DUT__DOT__op1_sel_D;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[3358].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[3359].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
            vlSymsp->__Vcoverage[3357].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
        vlSymsp->__Vcoverage[3356].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[3298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
        = ((0U == (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0xfU))) ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[3330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
        = ((0U == (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0x14U))) ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1);
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[2376].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xfc1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[2380].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xf14U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[2382].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrr_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D;
    }
    vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[2379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xf14U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[2381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 2U;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[2375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
            vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                    ? (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)) : (((- (IData)(
                                                          (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | ((0xff000U 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                        >> 9U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                             >> 0x14U)))))));
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                    ? (0xfffff000U & vlSelf->top__DOT__DUT__DOT__inst_D)
                    : (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                      >> 7U))))))
                : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                    ? (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | ((0x7e0U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | (0x7ffU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x14U)))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs1_en_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h3d0a317b__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs2_en_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h06acbb32__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
         & (7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)))) {
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D = 2U;
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                  & (7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)))))) {
        vlSymsp->__Vcoverage[2385].fetch_add(1, std::memory_order_relaxed);
    }
    if (((7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_D 
            = (7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[5794].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[5795].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[5788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                  & (IData)(vlSelf->top__DOT__dmem_respstream_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[5797].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                           & (IData)(vlSelf->top__DOT__dmem_respstream_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[5798].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy 
                = ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy = 0U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy 
            = ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy))) {
        vlSymsp->__Vcoverage[4136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[2292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_D))) {
        vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[3338].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[3337].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            vlSymsp->__Vcoverage[3336].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        vlSymsp->__Vcoverage[3335].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D;
    }
    if ((1U & ((IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                 + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                >> 0x20U))) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_plus_imm_D__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_plus_imm_D__DOT____Vtogcov__cout 
            = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                      + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                     >> 0x20U))));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[2393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[2392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h3d0a317b__0) 
           & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h3d0a317b__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[2396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[2395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h06acbb32__0) 
           & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h06acbb32__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X)))) {
        if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D) {
            vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D)))) {
            vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_D))) {
        vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D)))) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D)));
    }
    vlSelf->top__DOT__DUT__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X)
                                             ? (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X)
                                             : ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D)
                                                 ? (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_D)
                                                 : 0U));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[5723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[5789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                            | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[2293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)) 
           & ((IData)(vlSelf->top__DOT__imem_respstream_val) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
         & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D = 1U;
    } else {
        vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D = 
            (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))
              ? 2U : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                       & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))
                       ? 3U : 0U));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing))))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
             & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))) {
            vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                      & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D_can_be_solved_by_bypassing))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                 & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))) {
                vlSymsp->__Vcoverage[2397].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                          & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D_can_be_solved_by_bypassing))))) {
                vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[2391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_load_use_X_rs1_D))) {
        vlSymsp->__Vcoverage[2389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_load_use_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs1_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
         & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[2405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D = 1U;
    } else {
        vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D = 
            (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))
              ? 2U : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                       & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))
                       ? 3U : 0U));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing))))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
             & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))) {
            vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                      & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D_can_be_solved_by_bypassing))))) {
            if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                 & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))) {
                vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
                          & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D_can_be_solved_by_bypassing))))) {
                vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing))) {
        vlSymsp->__Vcoverage[2394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D_can_be_solved_by_bypassing;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_load_use_X_rs2_D))) {
        vlSymsp->__Vcoverage[2390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_load_use_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs2_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs1_D) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_load_use_X_rs2_D));
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[3210].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[3209].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_val 
            = vlSelf->top__DOT__dmem_reqstream_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__dmem_reqstream_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))) {
            vlSymsp->__Vcoverage[3341].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D)))) {
            vlSymsp->__Vcoverage[3340].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))) {
            vlSymsp->__Vcoverage[3343].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D)))) {
            vlSymsp->__Vcoverage[3342].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D);
    }
    if (vlSelf->top__DOT__DUT__DOT__op1_sel_D) {
        if (vlSelf->top__DOT__DUT__DOT__op1_sel_D) {
            vlSymsp->__Vcoverage[3353].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)))) {
            vlSymsp->__Vcoverage[3354].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))) {
            vlSymsp->__Vcoverage[3347].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D)))) {
            vlSymsp->__Vcoverage[3346].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))) {
            vlSymsp->__Vcoverage[3349].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D)))) {
            vlSymsp->__Vcoverage[3348].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[2407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x2000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x4000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x8000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x10000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x20000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x40000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x80000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x100000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x200000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x400000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x800000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x1000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x2000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x4000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x8000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x10000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x20000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x40000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if (((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1dU)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
                              >> 0x1fU))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((1U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((2U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((4U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((8U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U];
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[4435].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[4436].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[4429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[4438].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[4439].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
                = ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
            = ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val))) {
        vlSymsp->__Vcoverage[4007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq1_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len 
            = (3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
            = ((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U];
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[2281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[2917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
          ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
          ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[4364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[5064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[4039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[4071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[4085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
          ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__a_mux_sel)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__a_mux_sel)
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D
                : 0U) : vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__lshifter_out);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[5068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[5065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[4925].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if (vlSelf->top__DOT__reset) {
            vlSymsp->__Vcoverage[4924].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if (vlSelf->top__DOT__reset) {
                vlSymsp->__Vcoverage[4923].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                vlSymsp->__Vcoverage[4922].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[4752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[4753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[4903].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[4902].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)))) {
                    vlSymsp->__Vcoverage[4906].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
                    vlSymsp->__Vcoverage[4905].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M)))) {
                    vlSymsp->__Vcoverage[4915].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
                    vlSymsp->__Vcoverage[4914].fetch_add(1, std::memory_order_relaxed);
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4913].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4912].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4911].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4910].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)))) {
                    vlSymsp->__Vcoverage[4909].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
                    vlSymsp->__Vcoverage[4908].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
                    vlSymsp->__Vcoverage[4920].fetch_add(1, std::memory_order_relaxed);
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4916].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4919].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4918].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4917].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M)))) {
                    vlSymsp->__Vcoverage[4921].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->top__DOT__snk_done = ((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                  & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                                     == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    __Vilp = 0x508U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
