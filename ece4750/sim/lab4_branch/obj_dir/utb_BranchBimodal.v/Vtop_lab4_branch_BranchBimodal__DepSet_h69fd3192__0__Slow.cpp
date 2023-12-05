// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_lab4_branch_BranchBimodal.h"

VL_ATTR_COLD void Vtop_lab4_branch_BranchBimodal___ctor_var_reset(Vtop_lab4_branch_BranchBimodal* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab4_branch_BranchBimodal___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__update_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__update_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__prediction = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->__PVT__PHT);
    vlSelf->__PVT__BH = VL_RAND_RESET_Q(44);
    vlSelf->__PVT__current_PHT = VL_RAND_RESET_I(2);
    vlSelf->__PVT__PHT_index_update_value = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BH_index = VL_RAND_RESET_I(2);
    vlSelf->__PVT__PHT_index = VL_RAND_RESET_I(11);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__update_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__update_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__PC = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__prediction = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__BH = VL_RAND_RESET_Q(44);
    vlSelf->__Vtogcov__current_PHT = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__PHT_index_update_value = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__BH_index = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__PHT_index = VL_RAND_RESET_I(11);
    vlSelf->__Vlvbound_h83b19299__0 = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(4096, vlSelf->__Vdly__PHT);
    vlSelf->__Vdly__BH = VL_RAND_RESET_Q(44);
}
