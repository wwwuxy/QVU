// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPvuTop.h for the primary calling header

#ifndef VERILATED_VPVUTOP_RADIX4BOOTHMULTIPLIER_H_
#define VERILATED_VPVUTOP_RADIX4BOOTHMULTIPLIER_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;
class VPvuTop_Compressor4to2;


class VPvuTop_Radix4BoothMultiplier final : public VerilatedModule {
  public:
    // CELLS
    VPvuTop_Compressor4to2* __PVT__csaTree__DOT__compressor;
    VPvuTop_Compressor4to2* __PVT__csaTree__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2* __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2* __PVT__csaTree__DOT__csa_tree_B__DOT__compressor;
    VPvuTop_Compressor4to2* __PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor;
    VPvuTop_Compressor4to2* __PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg;
        CData/*0:0*/ __PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4;
        CData/*0:0*/ genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0;
        CData/*0:0*/ genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_2__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_4__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_5__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_6__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_7__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_8__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_9__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_10__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_11__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_12__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_13__DOT___io_carry_T;
    };
    struct {
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_14__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_15__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_16__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_17__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_18__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_19__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_20__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_21__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_22__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_23__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_24__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_25__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_26__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_27__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_28__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_29__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_30__DOT___io_carry_T;
        CData/*0:0*/ __PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_31__DOT___io_carry_T;
        CData/*0:0*/ __VdfgTmp_hd6a46e59__0;
        VL_IN(io_operand_a,27,0);
        VL_IN(io_operand_b,27,0);
        IData/*28:0*/ __PVT__genProds__DOT___genProd_12_io_partial_prod;
        IData/*28:0*/ __PVT__genProds__DOT___genProd_11_io_partial_prod;
        IData/*28:0*/ __PVT__genProds__DOT___genProd_10_io_partial_prod;
        IData/*28:0*/ __PVT__genProds__DOT___genProd_5_io_partial_prod;
        IData/*28:0*/ __PVT__genProds__DOT___genProd_4_io_partial_prod;
        IData/*28:0*/ __PVT__genProds__DOT___genProd_3_io_partial_prod;
        IData/*28:0*/ __PVT__genProds__DOT___genProd_2_io_partial_prod;
        IData/*28:0*/ __PVT__genProds__DOT___genProd_1_io_partial_prod;
        IData/*28:0*/ __PVT__genProds__DOT___genProd_io_partial_prod;
        IData/*28:0*/ __PVT__genProds__DOT___genProdFirst_io_partial_prod;
        VlWide<7>/*217:0*/ __VdfgTmp_h290cb9ab__0;
        VL_OUT64(io_sum_o,55,0);
        VL_OUT64(io_carry_o,55,0);
        VlWide<7>/*223:0*/ csaTree__DOT____Vcellinp__compressor__io_operands_i;
        VlWide<7>/*223:0*/ csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i;
        VlWide<7>/*223:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i;
        VlWide<7>/*223:0*/ csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i;
        VlWide<7>/*223:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i;
    };

    // INTERNAL VARIABLES
    VPvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPvuTop_Radix4BoothMultiplier(VPvuTop__Syms* symsp, const char* v__name);
    ~VPvuTop_Radix4BoothMultiplier();
    VL_UNCOPYABLE(VPvuTop_Radix4BoothMultiplier);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
