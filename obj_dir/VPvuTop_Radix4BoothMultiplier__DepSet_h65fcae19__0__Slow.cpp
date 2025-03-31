// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Radix4BoothMultiplier.h"

VL_ATTR_COLD void VPvuTop_Radix4BoothMultiplier___ctor_var_reset(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ctor_var_reset\n"); );
    // Body
    vlSelf->io_operand_a = VL_RAND_RESET_I(28);
    vlSelf->io_operand_b = VL_RAND_RESET_I(28);
    vlSelf->io_sum_o = VL_RAND_RESET_Q(56);
    vlSelf->io_carry_o = VL_RAND_RESET_Q(56);
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod = VL_RAND_RESET_I(29);
    vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 = 0;
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 = 0;
    VL_RAND_RESET_W(224, vlSelf->csaTree__DOT____Vcellinp__compressor__io_operands_i);
    VL_RAND_RESET_W(224, vlSelf->csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_2__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_4__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_5__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_6__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_7__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_8__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_9__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_10__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_11__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_12__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_13__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_14__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_15__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_16__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_17__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_18__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_19__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_20__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_21__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_22__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_23__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_24__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_25__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_26__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_27__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_28__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_29__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_30__DOT___io_carry_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_31__DOT___io_carry_T = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(224, vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i);
    VL_RAND_RESET_W(224, vlSelf->csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i);
    VL_RAND_RESET_W(224, vlSelf->csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i);
    vlSelf->__VdfgTmp_hd6a46e59__0 = 0;
    VL_ZERO_RESET_W(218, vlSelf->__VdfgTmp_h290cb9ab__0);
}
