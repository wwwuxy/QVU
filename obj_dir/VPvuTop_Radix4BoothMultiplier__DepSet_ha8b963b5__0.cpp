// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Compressor4to2.h"
#include "VPvuTop_Radix4BoothMultiplier.h"

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h49be4455__0;
    // Body
    vlSelf->csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = (IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor->__PVT__io_sum_o);
    vlSelf->csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor->__PVT__io_carry_o) 
            << 0x18U) | (IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor->__PVT__io_sum_o 
                                 >> 0x20U)));
    vlSelf->csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor->__PVT__io_carry_o) 
            >> 8U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor->__PVT__io_carry_o 
                               >> 0x20U)) << 0x18U));
    vlSelf->csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o) 
            << 0x10U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor->__PVT__io_carry_o 
                                  >> 0x20U)) >> 8U));
    vlSelf->csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o 
                                  >> 0x20U)) << 0x10U));
    vlSelf->csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o) 
            << 8U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o 
                               >> 0x20U)) >> 0x10U));
    vlSelf->csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o 
                                  >> 0x20U)) << 8U));
    __Vtemp_h49be4455__0[0U] = (IData)((0x400000000ULL 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))))) 
                                            << 0x21U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                    >> 0x1cU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_31__DOT___io_carry_T) 
                                                                      << 0x1fU) 
                                                                     ^ 
                                                                     (0x80000000U 
                                                                      & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                         << 4U)))) 
                                                                 | ((0x40000000U 
                                                                     & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_30__DOT___io_carry_T) 
                                                                         << 0x1eU) 
                                                                        ^ 
                                                                        (0xc0000000U 
                                                                         & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                            << 4U)))) 
                                                                    | ((0x20000000U 
                                                                        & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_29__DOT___io_carry_T) 
                                                                            << 0x1dU) 
                                                                           ^ 
                                                                           (0xe0000000U 
                                                                            & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                               << 4U)))) 
                                                                       | ((0x10000000U 
                                                                           & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_28__DOT___io_carry_T) 
                                                                               << 0x1cU) 
                                                                              ^ 
                                                                              (0xf0000000U 
                                                                               & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                          | ((0x8000000U 
                                                                              & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_27__DOT___io_carry_T) 
                                                                                << 0x1bU) 
                                                                                ^ 
                                                                                (0xf8000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                             | ((0x4000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_26__DOT___io_carry_T) 
                                                                                << 0x1aU) 
                                                                                ^ 
                                                                                (0xfc000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x2000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_25__DOT___io_carry_T) 
                                                                                << 0x19U) 
                                                                                ^ 
                                                                                (0xfe000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_24__DOT___io_carry_T) 
                                                                                << 0x18U) 
                                                                                ^ 
                                                                                (0xff000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_23__DOT___io_carry_T) 
                                                                                << 0x17U) 
                                                                                ^ 
                                                                                (0xff800000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_22__DOT___io_carry_T) 
                                                                                << 0x16U) 
                                                                                ^ 
                                                                                (0xffc00000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_21__DOT___io_carry_T) 
                                                                                << 0x15U) 
                                                                                ^ 
                                                                                (0xffe00000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_20__DOT___io_carry_T) 
                                                                                << 0x14U) 
                                                                                ^ 
                                                                                (0xfff00000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_19__DOT___io_carry_T) 
                                                                                << 0x13U) 
                                                                                ^ 
                                                                                (0xfff80000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_18__DOT___io_carry_T) 
                                                                                << 0x12U) 
                                                                                ^ 
                                                                                (0xfffc0000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_17__DOT___io_carry_T) 
                                                                                << 0x11U) 
                                                                                ^ 
                                                                                (0xfffe0000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_16__DOT___io_carry_T) 
                                                                                << 0x10U) 
                                                                                ^ 
                                                                                (0xffff0000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_15__DOT___io_carry_T) 
                                                                                << 0xfU) 
                                                                                ^ 
                                                                                (0xffff8000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_14__DOT___io_carry_T) 
                                                                                << 0xeU) 
                                                                                ^ 
                                                                                (0xffffc000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_13__DOT___io_carry_T) 
                                                                                << 0xdU) 
                                                                                ^ 
                                                                                (0xffffe000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_12__DOT___io_carry_T) 
                                                                                << 0xcU) 
                                                                                ^ 
                                                                                (0xfffff000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_11__DOT___io_carry_T) 
                                                                                << 0xbU) 
                                                                                ^ 
                                                                                (0xfffff800U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_10__DOT___io_carry_T) 
                                                                                << 0xaU) 
                                                                                ^ 
                                                                                (0xfffffc00U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_9__DOT___io_carry_T) 
                                                                                << 9U) 
                                                                                ^ 
                                                                                (0xfffffe00U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_8__DOT___io_carry_T) 
                                                                                << 8U) 
                                                                                ^ 
                                                                                (0xffffff00U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_7__DOT___io_carry_T) 
                                                                                << 7U) 
                                                                                ^ 
                                                                                (0xffffff80U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                                                << 6U) 
                                                                                ^ 
                                                                                (0xffffffc0U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                                                << 5U) 
                                                                                ^ 
                                                                                (0xffffffe0U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                                ^ vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((0xfffffff8U 
                                                                                & vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                                ^ 
                                                                                (0xfffffff8U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 2U)))) 
                                                                                | ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                                ^ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                ^ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h49be4455__0[1U] = (((IData)((((QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                               >> 0x1cU)))) 
                                           << 0x21U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_31__DOT___io_carry_T) 
                                                                   & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                      >> 0x1bU)) 
                                                                  | ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                     & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_30__DOT___io_carry_T) 
                                                                      << 0x1fU) 
                                                                     & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                        << 5U)) 
                                                                    | (((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                        << 0x1fU) 
                                                                       & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                          << 3U)))) 
                                                                | ((0xc0000000U 
                                                                    & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_29__DOT___io_carry_T) 
                                                                         << 0x1eU) 
                                                                        & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                           << 5U)) 
                                                                       | (((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                           << 0x1eU) 
                                                                          & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                             << 3U)))) 
                                                                   | ((0x20000000U 
                                                                       & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_28__DOT___io_carry_T) 
                                                                            << 0x1dU) 
                                                                           & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                              << 5U)) 
                                                                          | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                              << 1U) 
                                                                             & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                      | ((0x10000000U 
                                                                          & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_27__DOT___io_carry_T) 
                                                                               << 0x1cU) 
                                                                              & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                             | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                         | ((0x8000000U 
                                                                             & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_26__DOT___io_carry_T) 
                                                                                << 0x1bU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                            | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_25__DOT___io_carry_T) 
                                                                                << 0x1aU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                               | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_24__DOT___io_carry_T) 
                                                                                << 0x19U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_23__DOT___io_carry_T) 
                                                                                << 0x18U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_22__DOT___io_carry_T) 
                                                                                << 0x17U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_21__DOT___io_carry_T) 
                                                                                << 0x16U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_20__DOT___io_carry_T) 
                                                                                << 0x15U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_19__DOT___io_carry_T) 
                                                                                << 0x14U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_18__DOT___io_carry_T) 
                                                                                << 0x13U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_17__DOT___io_carry_T) 
                                                                                << 0x12U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_16__DOT___io_carry_T) 
                                                                                << 0x11U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_15__DOT___io_carry_T) 
                                                                                << 0x10U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_14__DOT___io_carry_T) 
                                                                                << 0xfU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_13__DOT___io_carry_T) 
                                                                                << 0xeU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_12__DOT___io_carry_T) 
                                                                                << 0xdU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_11__DOT___io_carry_T) 
                                                                                << 0xcU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_10__DOT___io_carry_T) 
                                                                                << 0xbU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_9__DOT___io_carry_T) 
                                                                                << 0xaU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_8__DOT___io_carry_T) 
                                                                                << 9U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_7__DOT___io_carry_T) 
                                                                                << 8U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                                                << 7U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                                                << 6U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                                & vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod) 
                                                                                << 5U) 
                                                                                | (0xffffffe0U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))))) 
                                                                                | ((0x10U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                                & (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))))) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                & (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 1U))))))))))))))))))))))))))))))))))) 
                                 << 0x18U) | (IData)(
                                                     ((0x400000000ULL 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))))) 
                                                           << 0x21U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                >> 0x1cU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x80000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_31__DOT___io_carry_T) 
                                                                                << 0x1fU) 
                                                                                ^ 
                                                                                (0x80000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x40000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_30__DOT___io_carry_T) 
                                                                                << 0x1eU) 
                                                                                ^ 
                                                                                (0xc0000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x20000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_29__DOT___io_carry_T) 
                                                                                << 0x1dU) 
                                                                                ^ 
                                                                                (0xe0000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x10000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_28__DOT___io_carry_T) 
                                                                                << 0x1cU) 
                                                                                ^ 
                                                                                (0xf0000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x8000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_27__DOT___io_carry_T) 
                                                                                << 0x1bU) 
                                                                                ^ 
                                                                                (0xf8000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_26__DOT___io_carry_T) 
                                                                                << 0x1aU) 
                                                                                ^ 
                                                                                (0xfc000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x2000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_25__DOT___io_carry_T) 
                                                                                << 0x19U) 
                                                                                ^ 
                                                                                (0xfe000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_24__DOT___io_carry_T) 
                                                                                << 0x18U) 
                                                                                ^ 
                                                                                (0xff000000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_23__DOT___io_carry_T) 
                                                                                << 0x17U) 
                                                                                ^ 
                                                                                (0xff800000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_22__DOT___io_carry_T) 
                                                                                << 0x16U) 
                                                                                ^ 
                                                                                (0xffc00000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_21__DOT___io_carry_T) 
                                                                                << 0x15U) 
                                                                                ^ 
                                                                                (0xffe00000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_20__DOT___io_carry_T) 
                                                                                << 0x14U) 
                                                                                ^ 
                                                                                (0xfff00000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_19__DOT___io_carry_T) 
                                                                                << 0x13U) 
                                                                                ^ 
                                                                                (0xfff80000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_18__DOT___io_carry_T) 
                                                                                << 0x12U) 
                                                                                ^ 
                                                                                (0xfffc0000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_17__DOT___io_carry_T) 
                                                                                << 0x11U) 
                                                                                ^ 
                                                                                (0xfffe0000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_16__DOT___io_carry_T) 
                                                                                << 0x10U) 
                                                                                ^ 
                                                                                (0xffff0000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_15__DOT___io_carry_T) 
                                                                                << 0xfU) 
                                                                                ^ 
                                                                                (0xffff8000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_14__DOT___io_carry_T) 
                                                                                << 0xeU) 
                                                                                ^ 
                                                                                (0xffffc000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_13__DOT___io_carry_T) 
                                                                                << 0xdU) 
                                                                                ^ 
                                                                                (0xffffe000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_12__DOT___io_carry_T) 
                                                                                << 0xcU) 
                                                                                ^ 
                                                                                (0xfffff000U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_11__DOT___io_carry_T) 
                                                                                << 0xbU) 
                                                                                ^ 
                                                                                (0xfffff800U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_10__DOT___io_carry_T) 
                                                                                << 0xaU) 
                                                                                ^ 
                                                                                (0xfffffc00U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_9__DOT___io_carry_T) 
                                                                                << 9U) 
                                                                                ^ 
                                                                                (0xfffffe00U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_8__DOT___io_carry_T) 
                                                                                << 8U) 
                                                                                ^ 
                                                                                (0xffffff00U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_7__DOT___io_carry_T) 
                                                                                << 7U) 
                                                                                ^ 
                                                                                (0xffffff80U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                                                << 6U) 
                                                                                ^ 
                                                                                (0xffffffc0U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                                                << 5U) 
                                                                                ^ 
                                                                                (0xffffffe0U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 4U)))) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                                ^ vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((0xfffffff8U 
                                                                                & vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                                ^ 
                                                                                (0xfffffff8U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 2U)))) 
                                                                                | ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                                ^ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                ^ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))))))))))))))))))))))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h49be4455__0[2U] = (((IData)((((QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                               >> 0x1cU)))) 
                                           << 0x21U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_31__DOT___io_carry_T) 
                                                                   & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                      >> 0x1bU)) 
                                                                  | ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                     & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_30__DOT___io_carry_T) 
                                                                      << 0x1fU) 
                                                                     & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                        << 5U)) 
                                                                    | (((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                        << 0x1fU) 
                                                                       & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                          << 3U)))) 
                                                                | ((0xc0000000U 
                                                                    & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_29__DOT___io_carry_T) 
                                                                         << 0x1eU) 
                                                                        & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                           << 5U)) 
                                                                       | (((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                           << 0x1eU) 
                                                                          & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                             << 3U)))) 
                                                                   | ((0x20000000U 
                                                                       & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_28__DOT___io_carry_T) 
                                                                            << 0x1dU) 
                                                                           & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                              << 5U)) 
                                                                          | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                              << 1U) 
                                                                             & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                      | ((0x10000000U 
                                                                          & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_27__DOT___io_carry_T) 
                                                                               << 0x1cU) 
                                                                              & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                             | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                         | ((0x8000000U 
                                                                             & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_26__DOT___io_carry_T) 
                                                                                << 0x1bU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                            | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_25__DOT___io_carry_T) 
                                                                                << 0x1aU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                               | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_24__DOT___io_carry_T) 
                                                                                << 0x19U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_23__DOT___io_carry_T) 
                                                                                << 0x18U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_22__DOT___io_carry_T) 
                                                                                << 0x17U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_21__DOT___io_carry_T) 
                                                                                << 0x16U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_20__DOT___io_carry_T) 
                                                                                << 0x15U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_19__DOT___io_carry_T) 
                                                                                << 0x14U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_18__DOT___io_carry_T) 
                                                                                << 0x13U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_17__DOT___io_carry_T) 
                                                                                << 0x12U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_16__DOT___io_carry_T) 
                                                                                << 0x11U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_15__DOT___io_carry_T) 
                                                                                << 0x10U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_14__DOT___io_carry_T) 
                                                                                << 0xfU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_13__DOT___io_carry_T) 
                                                                                << 0xeU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_12__DOT___io_carry_T) 
                                                                                << 0xdU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_11__DOT___io_carry_T) 
                                                                                << 0xcU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_10__DOT___io_carry_T) 
                                                                                << 0xbU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_9__DOT___io_carry_T) 
                                                                                << 0xaU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_8__DOT___io_carry_T) 
                                                                                << 9U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_7__DOT___io_carry_T) 
                                                                                << 8U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                                                << 7U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                                                << 6U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                                & vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod) 
                                                                                << 5U) 
                                                                                | (0xffffffe0U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))))) 
                                                                                | ((0x10U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                                & (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))))) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                & (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 1U))))))))))))))))))))))))))))))))))) 
                                 >> 8U) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                          >> 0x1cU)))) 
                                                      << 0x21U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_31__DOT___io_carry_T) 
                                                                              & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                >> 0x1bU)) 
                                                                             | ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                                & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0x80000000U 
                                                                            & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_30__DOT___io_carry_T) 
                                                                                << 0x1fU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                               | (((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                                << 0x1fU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                           | ((0xc0000000U 
                                                                               & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_29__DOT___io_carry_T) 
                                                                                << 0x1eU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                                << 0x1eU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                              | ((0x20000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_28__DOT___io_carry_T) 
                                                                                << 0x1dU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x10000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_27__DOT___io_carry_T) 
                                                                                << 0x1cU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_26__DOT___io_carry_T) 
                                                                                << 0x1bU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_25__DOT___io_carry_T) 
                                                                                << 0x1aU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_24__DOT___io_carry_T) 
                                                                                << 0x19U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_23__DOT___io_carry_T) 
                                                                                << 0x18U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_22__DOT___io_carry_T) 
                                                                                << 0x17U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_21__DOT___io_carry_T) 
                                                                                << 0x16U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_20__DOT___io_carry_T) 
                                                                                << 0x15U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_19__DOT___io_carry_T) 
                                                                                << 0x14U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_18__DOT___io_carry_T) 
                                                                                << 0x13U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_17__DOT___io_carry_T) 
                                                                                << 0x12U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_16__DOT___io_carry_T) 
                                                                                << 0x11U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_15__DOT___io_carry_T) 
                                                                                << 0x10U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_14__DOT___io_carry_T) 
                                                                                << 0xfU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_13__DOT___io_carry_T) 
                                                                                << 0xeU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_12__DOT___io_carry_T) 
                                                                                << 0xdU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_11__DOT___io_carry_T) 
                                                                                << 0xcU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_10__DOT___io_carry_T) 
                                                                                << 0xbU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_9__DOT___io_carry_T) 
                                                                                << 0xaU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_8__DOT___io_carry_T) 
                                                                                << 9U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_7__DOT___io_carry_T) 
                                                                                << 8U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                                                << 7U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                                                << 6U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                                & vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod) 
                                                                                << 5U) 
                                                                                | (0xffffffe0U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))))) 
                                                                                | ((0x10U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                                & (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))))) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                & (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 1U)))))))))))))))))))))))))))))))))) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h49be4455__0[3U] = ((IData)(((((QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                               >> 0x1cU)))) 
                                           << 0x21U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_31__DOT___io_carry_T) 
                                                                   & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                      >> 0x1bU)) 
                                                                  | ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                     & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_30__DOT___io_carry_T) 
                                                                      << 0x1fU) 
                                                                     & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                        << 5U)) 
                                                                    | (((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                        << 0x1fU) 
                                                                       & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                          << 3U)))) 
                                                                | ((0xc0000000U 
                                                                    & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_29__DOT___io_carry_T) 
                                                                         << 0x1eU) 
                                                                        & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                           << 5U)) 
                                                                       | (((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                           << 0x1eU) 
                                                                          & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                             << 3U)))) 
                                                                   | ((0x20000000U 
                                                                       & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_28__DOT___io_carry_T) 
                                                                            << 0x1dU) 
                                                                           & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                              << 5U)) 
                                                                          | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                              << 1U) 
                                                                             & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                      | ((0x10000000U 
                                                                          & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_27__DOT___io_carry_T) 
                                                                               << 0x1cU) 
                                                                              & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                             | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                         | ((0x8000000U 
                                                                             & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_26__DOT___io_carry_T) 
                                                                                << 0x1bU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                            | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_25__DOT___io_carry_T) 
                                                                                << 0x1aU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                               | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_24__DOT___io_carry_T) 
                                                                                << 0x19U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_23__DOT___io_carry_T) 
                                                                                << 0x18U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_22__DOT___io_carry_T) 
                                                                                << 0x17U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_21__DOT___io_carry_T) 
                                                                                << 0x16U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_20__DOT___io_carry_T) 
                                                                                << 0x15U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_19__DOT___io_carry_T) 
                                                                                << 0x14U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_18__DOT___io_carry_T) 
                                                                                << 0x13U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_17__DOT___io_carry_T) 
                                                                                << 0x12U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_16__DOT___io_carry_T) 
                                                                                << 0x11U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_15__DOT___io_carry_T) 
                                                                                << 0x10U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_14__DOT___io_carry_T) 
                                                                                << 0xfU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_13__DOT___io_carry_T) 
                                                                                << 0xeU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_12__DOT___io_carry_T) 
                                                                                << 0xdU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_11__DOT___io_carry_T) 
                                                                                << 0xcU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_10__DOT___io_carry_T) 
                                                                                << 0xbU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_9__DOT___io_carry_T) 
                                                                                << 0xaU) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_8__DOT___io_carry_T) 
                                                                                << 9U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_7__DOT___io_carry_T) 
                                                                                << 8U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                                                << 7U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                                                << 6U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                                << 5U)) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U)))) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                                & vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod) 
                                                                                << 5U) 
                                                                                | (0xffffffe0U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))))) 
                                                                                | ((0x10U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                                & (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                << 1U) 
                                                                                & (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                                << 3U))))) 
                                                                                | ((vlSelf->__PVT__genProds__DOT___genProdFirst_io_partial_prod 
                                                                                & (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 1U)))))))))))))))))))))))))))))))))) 
                                         >> 0x20U)) 
                                >> 8U);
    vlSelf->csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = __Vtemp_h49be4455__0[0U];
    vlSelf->csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = __Vtemp_h49be4455__0[1U];
    vlSelf->csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = __Vtemp_h49be4455__0[2U];
    vlSelf->csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o) 
            << 0x10U) | __Vtemp_h49be4455__0[3U]);
    vlSelf->csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o 
                                  >> 0x20U)) << 0x10U));
    vlSelf->csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o) 
            << 8U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o 
                               >> 0x20U)) >> 0x10U));
    vlSelf->csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o 
                                  >> 0x20U)) << 8U));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3\n"); );
    // Body
    vlSelf->csaTree__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = (IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__compressor->__PVT__io_sum_o);
    vlSelf->csaTree__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__compressor->__PVT__io_carry_o) 
            << 0x18U) | (IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__compressor->__PVT__io_sum_o 
                                 >> 0x20U)));
    vlSelf->csaTree__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__compressor->__PVT__io_carry_o) 
            >> 8U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__compressor->__PVT__io_carry_o 
                               >> 0x20U)) << 0x18U));
    vlSelf->csaTree__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o) 
            << 0x10U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_A__DOT__compressor->__PVT__io_carry_o 
                                  >> 0x20U)) >> 8U));
    vlSelf->csaTree__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o 
                                  >> 0x20U)) << 0x10U));
    vlSelf->csaTree__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o) 
            << 8U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o 
                               >> 0x20U)) >> 0x10U));
    vlSelf->csaTree__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = (((IData)(vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__csaTree__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o 
                                  >> 0x20U)) << 8U));
}
