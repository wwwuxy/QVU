// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_PositDecode.h"

VL_ATTR_COLD void VPvuTop_PositDecode___ctor_var_reset(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(128, vlSelf->io_posit);
    vlSelf->io_Sign = VL_RAND_RESET_I(4);
    vlSelf->io_Exp = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(112, vlSelf->io_Frac);
    vlSelf->__PVT__isNaR = VL_RAND_RESET_I(4);
    vlSelf->__PVT___barrel_shifter_3_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->__PVT___barrel_shifter_2_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->__PVT___barrel_shifter_1_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->__PVT___barrel_shifter_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->__PVT___operand_0_T_6 = VL_RAND_RESET_I(31);
    vlSelf->__PVT___operand_1_T_6 = VL_RAND_RESET_I(31);
    vlSelf->__PVT___operand_2_T_6 = VL_RAND_RESET_I(31);
    vlSelf->__PVT___operand_3_T_6 = VL_RAND_RESET_I(31);
    vlSelf->__Vcellinp__lzcModule__in_i = VL_RAND_RESET_I(31);
    vlSelf->__Vcellinp__lzcModule_1__in_i = VL_RAND_RESET_I(31);
    vlSelf->__Vcellinp__lzcModule_2__in_i = VL_RAND_RESET_I(31);
    vlSelf->__Vcellinp__lzcModule_3__in_i = VL_RAND_RESET_I(31);
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
}
