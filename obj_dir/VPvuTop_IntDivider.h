// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPvuTop.h for the primary calling header

#ifndef VERILATED_VPVUTOP_INTDIVIDER_H_
#define VERILATED_VPVUTOP_INTDIVIDER_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;
class VPvuTop_Compressor4to2_24;
class VPvuTop_CsaTree_30;


class VPvuTop_IntDivider final : public VerilatedModule {
  public:
    // CELLS
    VPvuTop_Compressor4to2_24* __PVT__boothMult__DOT__csaTree__DOT__compressor;
    VPvuTop_CsaTree_30* __PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A;
    VPvuTop_CsaTree_30* __PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B;
    VPvuTop_Compressor4to2_24* __PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_CsaTree_30* __PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A;
    VPvuTop_Compressor4to2_24* __PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24* __PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2_24* __PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2_24* __PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ __VdfgTmp_h4461d323__0;
        CData/*4:0*/ __PVT__reciprocalMod__DOT__leading_zeros;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code;
        CData/*2:0*/ boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4;
    };
    struct {
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4;
    };
    struct {
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*1:0*/ __VdfgTmp_h69cc2f0a__0;
        CData/*0:0*/ __VdfgTmp_h68bc630a__0;
        VL_IN(io_dividend,27,0);
        VL_IN(io_divisor,27,0);
        IData/*27:0*/ __Vcellinp__reciprocalMod__io_num_i;
        VlWide<3>/*83:0*/ __PVT__reciprocalMod__DOT__x1_x_new_full;
        VlWide<3>/*83:0*/ __PVT__reciprocalMod__DOT__x2_x_new_full;
        VlWide<3>/*83:0*/ __PVT__reciprocalMod__DOT__x3_x_new_full;
        VlWide<102>/*3247:0*/ boothMult__DOT____Vcellout__genProds__io_partial_prods;
        VlWide<14>/*447:0*/ boothMult__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i;
        VlWide<25>/*783:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i;
        VlWide<14>/*447:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i;
        VlWide<14>/*447:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i;
        VlWide<14>/*447:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i;
        VlWide<14>/*447:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i;
        IData/*27:0*/ __VdfgTmp_h86bda27a__0;
        VlWide<25>/*769:0*/ __VdfgTmp_h77ca1847__0;
        VlWide<24>/*741:0*/ __VdfgTmp_hbb3da45d__0;
        VlWide<14>/*441:0*/ __VdfgTmp_h7ab20f6d__0;
        VL_OUT64(io_quotient,55,0);
        QData/*58:0*/ __PVT__reciprocalMod__DOT___normalized_num_T;
        QData/*58:0*/ __PVT__reciprocalMod__DOT__x0;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod;
        QData/*56:0*/ __PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod;
        QData/*55:0*/ __VdfgTmp_ha9c6ec67__0;
        QData/*55:0*/ __VdfgTmp_hb1c782c8__0;
    };

    // INTERNAL VARIABLES
    VPvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPvuTop_IntDivider(VPvuTop__Syms* symsp, const char* v__name);
    ~VPvuTop_IntDivider();
    VL_UNCOPYABLE(VPvuTop_IntDivider);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
