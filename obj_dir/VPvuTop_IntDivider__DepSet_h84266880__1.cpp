// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_IntDivider.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__0\n"); );
    // Init
    CData/*3:0*/ __PVT___GEN;
    __PVT___GEN = 0;
    CData/*3:0*/ __PVT__reciprocalMod__DOT___GEN;
    __PVT__reciprocalMod__DOT___GEN = 0;
    CData/*0:0*/ reciprocalMod__DOT____VdfgTmp_h0c7b4f99__0;
    reciprocalMod__DOT____VdfgTmp_h0c7b4f99__0 = 0;
    SData/*8:0*/ reciprocalMod__DOT____VdfgTmp_h4a74f0a0__0;
    reciprocalMod__DOT____VdfgTmp_h4a74f0a0__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hd2151af6__0;
    VlWide<3>/*95:0*/ __Vtemp_h78870573__0;
    VlWide<3>/*95:0*/ __Vtemp_h83dbcd58__0;
    VlWide<3>/*95:0*/ __Vtemp_hba4a56f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ce10a39__0;
    VlWide<3>/*95:0*/ __Vtemp_hd321f680__0;
    VlWide<3>/*95:0*/ __Vtemp_he14c2911__0;
    VlWide<3>/*95:0*/ __Vtemp_h5baa320b__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f83c2a8__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a4fef93__0;
    VlWide<3>/*95:0*/ __Vtemp_he2941e20__0;
    VlWide<3>/*95:0*/ __Vtemp_heb67e788__0;
    VlWide<3>/*95:0*/ __Vtemp_h04f75829__0;
    VlWide<3>/*95:0*/ __Vtemp_h02ce37b9__0;
    VlWide<3>/*95:0*/ __Vtemp_h0d0dd4d0__0;
    // Body
    __PVT___GEN = (((8U & (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                           >> 2U)) | (2U & (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                            >> 6U))) 
                   | (5U & ((0xcU & (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                     >> 4U)) | (3U 
                                                & (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                                   >> 8U)))));
    vlSelf->__VdfgTmp_h4461d323__0 = ((0x8000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                       ? 0U : ((0x4000000U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                ? 1U
                                                : (
                                                   (0x2000000U 
                                                    & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                    ? 2U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                     ? 3U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                      ? 4U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                       ? 5U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                        ? 6U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                         ? 7U
                                                         : 
                                                        ((0x80000U 
                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                          ? 8U
                                                          : 
                                                         ((0x40000U 
                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                           ? 9U
                                                           : 
                                                          ((0x20000U 
                                                            & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                            ? 0xaU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                             ? 0xbU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                              ? 0xcU
                                                              : 
                                                             ((0x4000U 
                                                               & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                               ? 0xdU
                                                               : 
                                                              ((0x2000U 
                                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                                ? 0xeU
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(__PVT___GEN))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((2U 
                                                                      & (IData)(__PVT___GEN))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((4U 
                                                                       & (IData)(__PVT___GEN))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((8U 
                                                                        & (IData)(__PVT___GEN))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((8U 
                                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((4U 
                                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                                           ? 0x19U
                                                                           : 
                                                                          (0x1aU 
                                                                           | (1U 
                                                                              & (~ 
                                                                                (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                                                                >> 1U))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__reciprocalMod__io_num_i = (0xfffffffU 
                                                   & (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                                      << 
                                                      (0x1fU 
                                                       & ((IData)(0x1bU) 
                                                          - (IData)(vlSelf->__VdfgTmp_h4461d323__0)))));
    __PVT__reciprocalMod__DOT___GEN = (((8U & (vlSelf->__Vcellinp__reciprocalMod__io_num_i 
                                               >> 2U)) 
                                        | (2U & (vlSelf->__Vcellinp__reciprocalMod__io_num_i 
                                                 >> 6U))) 
                                       | (5U & ((0xcU 
                                                 & (vlSelf->__Vcellinp__reciprocalMod__io_num_i 
                                                    >> 4U)) 
                                                | (3U 
                                                   & (vlSelf->__Vcellinp__reciprocalMod__io_num_i 
                                                      >> 8U)))));
    vlSelf->__PVT__reciprocalMod__DOT__leading_zeros 
        = ((0x8000000U & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
            ? 0U : ((0x4000000U & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                     ? 1U : ((0x2000000U & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                              ? 2U : ((0x1000000U & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                       ? 3U : ((0x800000U 
                                                & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                ? 4U
                                                : (
                                                   (0x400000U 
                                                    & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                    ? 5U
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                     ? 6U
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                      ? 7U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                       ? 8U
                                                       : 
                                                      ((0x40000U 
                                                        & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                        ? 9U
                                                        : 
                                                       ((0x20000U 
                                                         & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                         ? 0xaU
                                                         : 
                                                        ((0x10000U 
                                                          & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                          ? 0xbU
                                                          : 
                                                         ((0x8000U 
                                                           & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                           ? 0xcU
                                                           : 
                                                          ((0x4000U 
                                                            & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                            ? 0xdU
                                                            : 
                                                           ((0x2000U 
                                                             & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                             ? 0xeU
                                                             : 
                                                            ((0x1000U 
                                                              & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                              ? 0xfU
                                                              : 
                                                             ((0x800U 
                                                               & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                               ? 0x10U
                                                               : 
                                                              ((0x400U 
                                                                & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                                ? 0x11U
                                                                : 
                                                               ((0x200U 
                                                                 & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                                 ? 0x12U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__PVT__reciprocalMod__DOT___GEN))
                                                                  ? 0x13U
                                                                  : 
                                                                 ((2U 
                                                                   & (IData)(__PVT__reciprocalMod__DOT___GEN))
                                                                   ? 0x14U
                                                                   : 
                                                                  ((4U 
                                                                    & (IData)(__PVT__reciprocalMod__DOT___GEN))
                                                                    ? 0x15U
                                                                    : 
                                                                   ((8U 
                                                                     & (IData)(__PVT__reciprocalMod__DOT___GEN))
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x10U 
                                                                      & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((8U 
                                                                       & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((4U 
                                                                        & vlSelf->__Vcellinp__reciprocalMod__io_num_i)
                                                                        ? 0x19U
                                                                        : 
                                                                       (0x1aU 
                                                                        | (1U 
                                                                           & (~ 
                                                                              (vlSelf->__Vcellinp__reciprocalMod__io_num_i 
                                                                               >> 1U))))))))))))))))))))))))))))));
    vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
        = (0x7ffffffffffffffULL & ((QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i)) 
                                   << (IData)(vlSelf->__PVT__reciprocalMod__DOT__leading_zeros)));
    reciprocalMod__DOT____VdfgTmp_h0c7b4f99__0 = ((7U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                               >> 0x19U)))) 
                                                  | ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                  >> 0x19U)))) 
                                                     | ((5U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                     >> 0x19U)))) 
                                                        | (4U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                       >> 0x19U)))))));
    reciprocalMod__DOT____VdfgTmp_h4a74f0a0__0 = ((7U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                               >> 0x19U))))
                                                   ? 0x44U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                >> 0x19U))))
                                                    ? 0x92U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                 >> 0x19U))))
                                                     ? 0xecU
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                  >> 0x19U))))
                                                      ? 0x155U
                                                      : 0U))));
    vlSelf->__PVT__reciprocalMod__DOT__x0 = (0x7ffffffffffffffULL 
                                             & ((0U 
                                                 == 
                                                 (((IData)(reciprocalMod__DOT____VdfgTmp_h0c7b4f99__0) 
                                                   << 0x16U) 
                                                  | (((IData)(reciprocalMod__DOT____VdfgTmp_h4a74f0a0__0) 
                                                      << 0xdU) 
                                                     | (((IData)(reciprocalMod__DOT____VdfgTmp_h0c7b4f99__0) 
                                                         << 0xcU) 
                                                        | (((IData)(reciprocalMod__DOT____VdfgTmp_h4a74f0a0__0) 
                                                            << 3U) 
                                                           | (((IData)(reciprocalMod__DOT____VdfgTmp_h0c7b4f99__0) 
                                                               << 2U) 
                                                              | ((7U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                              >> 0x19U))))
                                                                  ? 0U
                                                                  : 
                                                                 ((6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                               >> 0x19U))))
                                                                   ? 1U
                                                                   : 
                                                                  ((5U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                                >> 0x19U))))
                                                                    ? 1U
                                                                    : 
                                                                   ((4U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                                >> 0x19U))))
                                                                     ? 2U
                                                                     : 0U))))))))))
                                                 ? 
                                                (0xffffffffffffffULL 
                                                 & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i))))
                                                 : 
                                                ((QData)((IData)(
                                                                 ((7U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                               >> 0x19U))))
                                                                   ? 0x8888888U
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                                >> 0x19U))))
                                                                    ? 0x9249249U
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                                >> 0x19U))))
                                                                     ? 0x9d89d89U
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__reciprocalMod__DOT___normalized_num_T 
                                                                                >> 0x19U))))
                                                                      ? 0xaaaaaaaU
                                                                      : 0U)))))) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1cU) 
                                                     - (IData)(vlSelf->__PVT__reciprocalMod__DOT__leading_zeros))))));
    __Vtemp_hd2151af6__0[0U] = (IData)(vlSelf->__PVT__reciprocalMod__DOT__x0);
    __Vtemp_hd2151af6__0[1U] = (IData)((vlSelf->__PVT__reciprocalMod__DOT__x0 
                                        >> 0x20U));
    __Vtemp_hd2151af6__0[2U] = 0U;
    __Vtemp_h78870573__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i)) 
                                              * (0xffffffffffffffULL 
                                                 & vlSelf->__PVT__reciprocalMod__DOT__x0)))));
    __Vtemp_h78870573__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i)) 
                                               * (0xffffffffffffffULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x0)))) 
                                        >> 0x20U));
    __Vtemp_h78870573__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h83dbcd58__0, __Vtemp_hd2151af6__0, __Vtemp_h78870573__0);
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U] 
        = __Vtemp_h83dbcd58__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U] 
        = __Vtemp_h83dbcd58__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h83dbcd58__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_hba4a56f5__0, vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full, 0x1cU);
    __Vtemp_h5ce10a39__0[0U] = __Vtemp_hba4a56f5__0[0U];
    __Vtemp_h5ce10a39__0[1U] = __Vtemp_hba4a56f5__0[1U];
    __Vtemp_h5ce10a39__0[2U] = (0xfffffU & __Vtemp_hba4a56f5__0[2U]);
    __Vtemp_hd321f680__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_hd321f680__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_hd321f680__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_he14c2911__0, __Vtemp_h5ce10a39__0, __Vtemp_hd321f680__0);
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U] 
        = __Vtemp_he14c2911__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U] 
        = __Vtemp_he14c2911__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U] 
        = (0xfffffU & __Vtemp_he14c2911__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_h5baa320b__0, vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full, 0x1cU);
    __Vtemp_h5f83c2a8__0[0U] = __Vtemp_h5baa320b__0[0U];
    __Vtemp_h5f83c2a8__0[1U] = __Vtemp_h5baa320b__0[1U];
    __Vtemp_h5f83c2a8__0[2U] = (0xfffffU & __Vtemp_h5baa320b__0[2U]);
    __Vtemp_h2a4fef93__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_h2a4fef93__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_h2a4fef93__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_he2941e20__0, __Vtemp_h5f83c2a8__0, __Vtemp_h2a4fef93__0);
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
        = __Vtemp_he2941e20__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
        = __Vtemp_he2941e20__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
        = (0xfffffU & __Vtemp_he2941e20__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_heb67e788__0, vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full, 0x1cU);
    __Vtemp_h04f75829__0[0U] = __Vtemp_heb67e788__0[0U];
    __Vtemp_h04f75829__0[1U] = __Vtemp_heb67e788__0[1U];
    __Vtemp_h04f75829__0[2U] = (0xfffffU & __Vtemp_heb67e788__0[2U]);
    __Vtemp_h02ce37b9__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_h02ce37b9__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSelf->__Vcellinp__reciprocalMod__io_num_i)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_h02ce37b9__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h0d0dd4d0__0, __Vtemp_h04f75829__0, __Vtemp_h02ce37b9__0);
    vlSelf->__VdfgTmp_ha9c6ec67__0 = (0xffffffffffffffULL 
                                      & ((0U == (vlSelf->__Vcellinp__reciprocalMod__io_num_i 
                                                 & (vlSelf->__Vcellinp__reciprocalMod__io_num_i 
                                                    - (IData)(1U))))
                                          ? (0x80000000000000ULL 
                                             >> (0x1fU 
                                                 & ((IData)(5U) 
                                                    - (IData)(vlSelf->__PVT__reciprocalMod__DOT__leading_zeros))))
                                          : (((QData)((IData)(
                                                              (0xfffffU 
                                                               & __Vtemp_h0d0dd4d0__0[2U]))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 __Vtemp_h0d0dd4d0__0[1U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_h0d0dd4d0__0[0U])) 
                                                   >> 0x1cU)))));
    if ((0U == vlSelf->__Vcellinp__reciprocalMod__io_num_i)) {
        vlSelf->__VdfgTmp_h69cc2f0a__0 = 3U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code = 3U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code = 7U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code = 7U;
    } else if ((1U == vlSelf->__Vcellinp__reciprocalMod__io_num_i)) {
        vlSelf->__VdfgTmp_h69cc2f0a__0 = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code = 2U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code = 0U;
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code = 0U;
    } else {
        vlSelf->__VdfgTmp_h69cc2f0a__0 = (3U & (IData)(vlSelf->__VdfgTmp_ha9c6ec67__0));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 1U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 3U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 5U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 7U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 9U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x29U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x2bU)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x2dU)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x31U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x33U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x35U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0xbU)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x1bU)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x1dU)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x1fU)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x21U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x23U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x25U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0xdU)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0xfU)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x11U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x13U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x15U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x17U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x2fU)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x27U)));
        vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code 
            = (7U & (IData)((vlSelf->__VdfgTmp_ha9c6ec67__0 
                             >> 0x19U)));
    }
    vlSelf->__VdfgTmp_h68bc630a__0 = (1U & (~ ((0U 
                                                == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)) 
                                               | (1U 
                                                  == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
           | (2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
           | (4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
           | (6U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h68bc630a__0) 
           & ((2U == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)) 
              | (3U == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
               | ((1U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                  | ((2U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                     | (3U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)))))) 
           & ((4U == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
              | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__1(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__1\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_he94d09f6__0;
    VlWide<9>/*287:0*/ __Vtemp_ha6d1e1cd__0;
    VlWide<13>/*415:0*/ __Vtemp_h314ffa8a__0;
    VlWide<17>/*543:0*/ __Vtemp_h1e18b1d3__0;
    VlWide<20>/*639:0*/ __Vtemp_ha4ec6881__0;
    VlWide<24>/*767:0*/ __Vtemp_hebf958b4__0;
    VlWide<63>/*2015:0*/ __Vtemp_h61aad77a__0;
    VlWide<65>/*2079:0*/ __Vtemp_hdb36e74c__0;
    VlWide<65>/*2079:0*/ __Vtemp_h590d1eee__0;
    VlWide<65>/*2079:0*/ __Vtemp_h07106434__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3aab0179__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3cc2b7dd__0;
    VlWide<68>/*2175:0*/ __Vtemp_h9bbabddc__0;
    VlWide<68>/*2175:0*/ __Vtemp_h9dbfd466__0;
    VlWide<68>/*2175:0*/ __Vtemp_h2e0fecf8__0;
    VlWide<70>/*2239:0*/ __Vtemp_h1a9f07ca__0;
    VlWide<70>/*2239:0*/ __Vtemp_hb724ce83__0;
    VlWide<72>/*2303:0*/ __Vtemp_h1e9655a0__0;
    VlWide<72>/*2303:0*/ __Vtemp_hc1865eee__0;
    VlWide<72>/*2303:0*/ __Vtemp_hdb09841a__0;
    VlWide<74>/*2367:0*/ __Vtemp_h4823e04a__0;
    VlWide<74>/*2367:0*/ __Vtemp_h087362e7__0;
    VlWide<75>/*2399:0*/ __Vtemp_hc1195ef2__0;
    VlWide<75>/*2399:0*/ __Vtemp_he9d7ae77__0;
    VlWide<75>/*2399:0*/ __Vtemp_h3d10996d__0;
    VlWide<77>/*2463:0*/ __Vtemp_h43289bc5__0;
    VlWide<77>/*2463:0*/ __Vtemp_h0fae00b3__0;
    VlWide<79>/*2527:0*/ __Vtemp_h196a4549__0;
    VlWide<79>/*2527:0*/ __Vtemp_h5ebac4c3__0;
    VlWide<79>/*2527:0*/ __Vtemp_h89cb3dec__0;
    VlWide<81>/*2591:0*/ __Vtemp_hf2acde97__0;
    VlWide<81>/*2591:0*/ __Vtemp_h5b2ff01d__0;
    VlWide<82>/*2623:0*/ __Vtemp_hca58e3c5__0;
    VlWide<82>/*2623:0*/ __Vtemp_h080cd2eb__0;
    VlWide<82>/*2623:0*/ __Vtemp_hb0e30b88__0;
    VlWide<84>/*2687:0*/ __Vtemp_h527be1bf__0;
    VlWide<84>/*2687:0*/ __Vtemp_h5166717e__0;
    VlWide<86>/*2751:0*/ __Vtemp_h169886a6__0;
    VlWide<86>/*2751:0*/ __Vtemp_h74f53c1b__0;
    VlWide<86>/*2751:0*/ __Vtemp_hdd6c571c__0;
    VlWide<88>/*2815:0*/ __Vtemp_h8de261d8__0;
    VlWide<88>/*2815:0*/ __Vtemp_h8bd424cf__0;
    VlWide<89>/*2847:0*/ __Vtemp_hcf14d050__0;
    VlWide<90>/*2879:0*/ __Vtemp_he8bf748a__0;
    VlWide<90>/*2879:0*/ __Vtemp_h92a99ab6__0;
    VlWide<91>/*2911:0*/ __Vtemp_hb48ab655__0;
    VlWide<91>/*2911:0*/ __Vtemp_h7908d2f9__0;
    VlWide<93>/*2975:0*/ __Vtemp_h18222030__0;
    VlWide<93>/*2975:0*/ __Vtemp_h91f59e59__0;
    VlWide<93>/*2975:0*/ __Vtemp_h8131435a__0;
    VlWide<95>/*3039:0*/ __Vtemp_hb7e2f505__0;
    VlWide<95>/*3039:0*/ __Vtemp_h34fb9520__0;
    VlWide<97>/*3103:0*/ __Vtemp_hb2a3d837__0;
    VlWide<97>/*3103:0*/ __Vtemp_h09933bc0__0;
    VlWide<97>/*3103:0*/ __Vtemp_h9c122244__0;
    VlWide<98>/*3135:0*/ __Vtemp_hd9d0c58f__0;
    VlWide<98>/*3135:0*/ __Vtemp_h3c8cc326__0;
    VlWide<100>/*3199:0*/ __Vtemp_h35b921f9__0;
    VlWide<100>/*3199:0*/ __Vtemp_hb8f1437d__0;
    VlWide<100>/*3199:0*/ __Vtemp_h6a2c90bc__0;
    VlWide<102>/*3263:0*/ __Vtemp_h7141c748__0;
    // Body
    vlSelf->__VdfgTmp_h86bda27a__0 = (0xfffffffU & 
                                      (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                       << (0x1fU & 
                                           ((IData)(0x1bU) 
                                            - (IData)(vlSelf->__VdfgTmp_h4461d323__0)))));
    vlSelf->__VdfgTmp_hb1c782c8__0 = (((0U != vlSelf->__Vcellinp__reciprocalMod__io_num_i) 
                                       & ((1U != vlSelf->__Vcellinp__reciprocalMod__io_num_i) 
                                          & (IData)(
                                                    (vlSelf->__VdfgTmp_ha9c6ec67__0 
                                                     >> 0x37U))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : 0ULL);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_23__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_22__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_21__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_20__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_26__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_25__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_24__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    __Vtemp_he94d09f6__0[4U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? 
                                                ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                 << 0x1cU)
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 0xeU) | ((IData)(
                                                     ((0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                                                            & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? 
                                                           ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                            << 0x1cU)
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                             << 0x1dU)
                                                             : 0ULL)))) 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_ha6d1e1cd__0[8U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? 
                                                ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                 << 0x1cU)
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
                                                             & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
                                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h314ffa8a__0[0xbU] = (((IData)((0x1ffffffffffffffULL 
                                            & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                                                   & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                   << 0x1cU)
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                                                      | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                    << 0x1dU)
                                                    : 0ULL))))) 
                                   >> 0xaU) | ((IData)(
                                                       ((0x1ffffffffffffffULL 
                                                         & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                            ^ 
                                                            (((0U 
                                                               != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                                                              & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                                 | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                              << 0x1cU)
                                                              : 
                                                             (((~ 
                                                                ((0U 
                                                                  == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                                                                 | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                               & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                               ? 
                                                              ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                               << 0x1dU)
                                                               : 0ULL)))) 
                                                        >> 0x20U)) 
                                               << 0x16U));
    __Vtemp_h1e18b1d3__0[0xfU] = (((IData)((0x1ffffffffffffffULL 
                                            & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                                                   & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                   << 0x1cU)
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                                                      | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                    << 0x1dU)
                                                    : 0ULL))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x1ffffffffffffffULL 
                                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                             ^ 
                                                             (((0U 
                                                                != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                                                               & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                                  | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                               ? 
                                                              ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                               << 0x1cU)
                                                               : 
                                                              (((~ 
                                                                 ((0U 
                                                                   == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                                                                  | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                ? 
                                                               ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                << 0x1dU)
                                                                : 0ULL)))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_ha4ec6881__0[0x12U] = (((IData)((0x1ffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   ((0U 
                                                     != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                                                    & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                    << 0x1cU)
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                                                       | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                     << 0x1dU)
                                                     : 0ULL))))) 
                                    >> 6U) | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                                                             & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              << 0x1aU));
    __Vtemp_hebf958b4__0[0x16U] = (((IData)((0x1ffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   ((0U 
                                                     != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                                                    & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                    << 0x1cU)
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                                                       | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                     << 0x1dU)
                                                     : 0ULL))))) 
                                    >> 0x14U) | ((IData)(
                                                         ((0x1ffffffffffffffULL 
                                                           & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              (((0U 
                                                                 != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                                                                & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                                   | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                ? 
                                                               ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                << 0x1cU)
                                                                : 
                                                               (((~ 
                                                                  ((0U 
                                                                    == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                                                                   | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                 ? 
                                                                ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                 << 0x1dU)
                                                                 : 0ULL)))) 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    vlSelf->__VdfgTmp_hbb3da45d__0[0U] = (IData)((((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      (3U 
                                                                       & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                                      << 0x39U) 
                                                     | (0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)) 
                                                             & ((1U 
                                                                 == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)) 
                                                                | ((2U 
                                                                    != (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)) 
                                                                   & (3U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)))))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((IData)(vlSelf->__VdfgTmp_h68bc630a__0) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                              << 0x1dU)
                                                              : 0ULL)))))));
    vlSelf->__VdfgTmp_hbb3da45d__0[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       (3U 
                                                                        & (- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                                       << 0x39U) 
                                                      | (0x1ffffffffffffffULL 
                                                         & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                            ^ 
                                                            (((0U 
                                                               != (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)) 
                                                              & ((1U 
                                                                  == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)) 
                                                                 | ((2U 
                                                                     != (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)) 
                                                                    & (3U 
                                                                       == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)))))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                              << 0x1cU)
                                                              : 
                                                             (((IData)(vlSelf->__VdfgTmp_h68bc630a__0) 
                                                               & (2U 
                                                                  == (IData)(vlSelf->__VdfgTmp_h69cc2f0a__0)))
                                                               ? 
                                                              ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                               << 0x1dU)
                                                               : 0ULL)))))) 
                                                  >> 0x20U));
    vlSelf->__VdfgTmp_hbb3da45d__0[2U] = 0U;
    vlSelf->__VdfgTmp_hbb3da45d__0[3U] = (((IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       (((0U 
                                                          != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                                                         & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                            | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                               & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                         << 0x1cU)
                                                         : 
                                                        (((~ 
                                                           ((0U 
                                                             == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                                                            | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                          ? 
                                                         ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                          << 0x1dU)
                                                          : 0ULL))))) 
                                           << 0x12U) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                             << 0x10U));
    vlSelf->__VdfgTmp_hbb3da45d__0[4U] = __Vtemp_he94d09f6__0[4U];
    vlSelf->__VdfgTmp_hbb3da45d__0[5U] = (0x1000U | 
                                          ((0x800U 
                                            & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                               << 0xbU)) 
                                           | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                                                             & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                             << 0x1cU)
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd__io_code)) 
                                                                | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->__VdfgTmp_hbb3da45d__0[6U] = 0U;
    vlSelf->__VdfgTmp_hbb3da45d__0[7U] = (((IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       (((0U 
                                                          != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
                                                         & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                            | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                               & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                         << 0x1cU)
                                                         : 
                                                        (((~ 
                                                           ((0U 
                                                             == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_1__io_code)) 
                                                            | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                          ? 
                                                         ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                          << 0x1dU)
                                                          : 0ULL))))) 
                                           << 4U) | 
                                          ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                           << 2U));
    vlSelf->__VdfgTmp_hbb3da45d__0[8U] = (0x40000000U 
                                          | ((0x20000000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                 << 0x1dU)) 
                                             | __Vtemp_ha6d1e1cd__0[8U]));
    vlSelf->__VdfgTmp_hbb3da45d__0[9U] = 0U;
    vlSelf->__VdfgTmp_hbb3da45d__0[0xaU] = (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                         ^ 
                                                         (((0U 
                                                            != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                                                           & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                              | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                           ? 
                                                          ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                           << 0x1cU)
                                                           : 
                                                          (((~ 
                                                             ((0U 
                                                               == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                                                              | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                            ? 
                                                           ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                            << 0x1dU)
                                                            : 0ULL))))) 
                                             << 0x16U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0x14U));
    vlSelf->__VdfgTmp_hbb3da45d__0[0xbU] = __Vtemp_h314ffa8a__0[0xbU];
    vlSelf->__VdfgTmp_hbb3da45d__0[0xcU] = (0x10000U 
                                            | ((0x8000U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                   << 0xfU)) 
                                               | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                               ^ 
                                                               (((0U 
                                                                  != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                                                                 & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                                    | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                       & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                 ? 
                                                                ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                 << 0x1cU)
                                                                 : 
                                                                (((~ 
                                                                   ((0U 
                                                                     == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_2__io_code)) 
                                                                    | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                  ? 
                                                                 ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                  << 0x1dU)
                                                                  : 0ULL)))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU)));
    vlSelf->__VdfgTmp_hbb3da45d__0[0xdU] = 0U;
    vlSelf->__VdfgTmp_hbb3da45d__0[0xeU] = (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                         ^ 
                                                         (((0U 
                                                            != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                                                           & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                              | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                           ? 
                                                          ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                           << 0x1cU)
                                                           : 
                                                          (((~ 
                                                             ((0U 
                                                               == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                                                              | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                            & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                            ? 
                                                           ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                            << 0x1dU)
                                                            : 0ULL))))) 
                                             << 8U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                               << 6U));
    vlSelf->__VdfgTmp_hbb3da45d__0[0xfU] = __Vtemp_h1e18b1d3__0[0xfU];
    vlSelf->__VdfgTmp_hbb3da45d__0[0x10U] = (4U | (
                                                   (2U 
                                                    & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                       << 1U)) 
                                                   | ((IData)(
                                                              ((0x1ffffffffffffffULL 
                                                                & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                                   ^ 
                                                                   (((0U 
                                                                      != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                                                                     & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                                        | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                     ? 
                                                                    ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                     << 0x1cU)
                                                                     : 
                                                                    (((~ 
                                                                       ((0U 
                                                                         == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_3__io_code)) 
                                                                        | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                      ? 
                                                                     ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                      << 0x1dU)
                                                                      : 0ULL)))) 
                                                               >> 0x20U)) 
                                                      >> 0x18U)));
    vlSelf->__VdfgTmp_hbb3da45d__0[0x11U] = (((IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                                                            & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? 
                                                           ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                            << 0x1cU)
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                             << 0x1dU)
                                                             : 0ULL))))) 
                                              << 0x1aU) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                << 0x18U));
    vlSelf->__VdfgTmp_hbb3da45d__0[0x12U] = __Vtemp_ha4ec6881__0[0x12U];
    vlSelf->__VdfgTmp_hbb3da45d__0[0x13U] = (0x100000U 
                                             | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           ((0x1ffffffffffffffULL 
                                                             & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                                ^ 
                                                                (((0U 
                                                                   != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                                                                  & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                                     | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                        & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                  ? 
                                                                 ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                  << 0x1cU)
                                                                  : 
                                                                 (((~ 
                                                                    ((0U 
                                                                      == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                                                                     | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                                   & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                   ? 
                                                                  ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                   << 0x1dU)
                                                                   : 0ULL)))) 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    vlSelf->__VdfgTmp_hbb3da45d__0[0x14U] = 0U;
    vlSelf->__VdfgTmp_hbb3da45d__0[0x15U] = (((IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                                                            & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? 
                                                           ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                            << 0x1cU)
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                             << 0x1dU)
                                                             : 0ULL))))) 
                                              << 0xcU) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    vlSelf->__VdfgTmp_hbb3da45d__0[0x16U] = __Vtemp_hebf958b4__0[0x16U];
    vlSelf->__VdfgTmp_hbb3da45d__0[0x17U] = ((0x20U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                 << 5U)) 
                                             | ((IData)(
                                                        ((0x1ffffffffffffffULL 
                                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                             ^ 
                                                             (((0U 
                                                                != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                                                               & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                                  | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                     & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                               ? 
                                                              ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                               << 0x1cU)
                                                               : 
                                                              (((~ 
                                                                 ((0U 
                                                                   == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_5__io_code)) 
                                                                  | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                ? 
                                                               ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                                                << 0x1dU)
                                                                : 0ULL)))) 
                                                         >> 0x20U)) 
                                                >> 0x14U));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_19__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_18__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_17__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_16__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_15__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_14__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_13__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_11__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_10__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_9__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_8__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_7__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)) 
                                       & ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                          << 0x1cU)
                                       : (((~ ((0U 
                                                == (IData)(vlSelf->boothMult__DOT__genProds__DOT____Vcellinp__genProd_6__io_code)) 
                                               | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->__VdfgTmp_h86bda27a__0)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__VdfgTmp_h7ab20f6d__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                  << 0x28U));
    vlSelf->__VdfgTmp_h7ab20f6d__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           << 0xaU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                      << 0x28U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_h7ab20f6d__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           >> 0x16U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xaU));
    vlSelf->__VdfgTmp_h7ab20f6d__0[3U] = (0x10U | (
                                                   (8U 
                                                    & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                       << 3U)) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                               >> 0x20U)) 
                                                      >> 0x16U)));
    vlSelf->__VdfgTmp_h7ab20f6d__0[4U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_h7ab20f6d__0[5U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           >> 4U) | 
                                          ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_h7ab20f6d__0[6U] = (0x400000U 
                                          | ((0x200000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 4U)));
    vlSelf->__VdfgTmp_h7ab20f6d__0[7U] = 0U;
    vlSelf->__VdfgTmp_h7ab20f6d__0[8U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_h7ab20f6d__0[9U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_h7ab20f6d__0[0xaU] = (0x100U 
                                            | ((0x80U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                                   << 7U)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0x12U)));
    vlSelf->__VdfgTmp_h7ab20f6d__0[0xbU] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                            << 0x1eU);
    vlSelf->__VdfgTmp_h7ab20f6d__0[0xcU] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod);
    vlSelf->__VdfgTmp_h7ab20f6d__0[0xdU] = ((0x2000000U 
                                             & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                << 0x19U)) 
                                            | (IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                       >> 0x20U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                   << 0x30U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            << 0x12U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0x30U) >> 0x20U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg) 
                      << 2U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                              >> 0x1cU) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 4U))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                       << 0xfU)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                             >> 0x20U)) 
                                    >> 0xaU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = (((IData)(vlSelf->__VdfgTmp_hb1c782c8__0) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
                      << 6U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = (((IData)(vlSelf->__VdfgTmp_hb1c782c8__0) 
            >> 0x18U) | ((IData)((vlSelf->__VdfgTmp_hb1c782c8__0 
                                  >> 0x20U)) << 8U));
    vlSelf->__VdfgTmp_h77ca1847__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_h77ca1847__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                           >> 4U) | 
                                          ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_h77ca1847__0[2U] = (0x400000U 
                                          | ((0x200000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 4U)));
    vlSelf->__VdfgTmp_h77ca1847__0[3U] = 0U;
    vlSelf->__VdfgTmp_h77ca1847__0[4U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_h77ca1847__0[5U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_h77ca1847__0[6U] = (0x100U | 
                                          ((0x80U & 
                                            ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                             << 7U)) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x12U)));
    vlSelf->__VdfgTmp_h77ca1847__0[7U] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                          << 0x1eU);
    vlSelf->__VdfgTmp_h77ca1847__0[8U] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    vlSelf->__VdfgTmp_h77ca1847__0[9U] = (0x4000000U 
                                          | ((0x2000000U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                 << 0x19U)) 
                                             | (IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                        >> 0x20U))));
    vlSelf->__VdfgTmp_h77ca1847__0[0xaU] = 0U;
    vlSelf->__VdfgTmp_h77ca1847__0[0xbU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                             << 0x12U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                               << 0x10U));
    vlSelf->__VdfgTmp_h77ca1847__0[0xcU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                             >> 0xeU) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                        >> 0x20U)) 
                                               << 0x12U));
    vlSelf->__VdfgTmp_h77ca1847__0[0xdU] = (0x1000U 
                                            | ((0x800U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                   << 0xbU)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xeU)));
    vlSelf->__VdfgTmp_h77ca1847__0[0xeU] = 0U;
    vlSelf->__VdfgTmp_h77ca1847__0[0xfU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                             << 4U) 
                                            | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg) 
                                               << 2U));
    vlSelf->__VdfgTmp_h77ca1847__0[0x10U] = (0x40000000U 
                                             | ((0x20000000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                                                    << 0x1dU)) 
                                                | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                                    >> 0x1cU) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                               >> 0x20U)) 
                                                      << 4U))));
    vlSelf->__VdfgTmp_h77ca1847__0[0x11U] = 0U;
    vlSelf->__VdfgTmp_h77ca1847__0[0x12U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                              << 0x16U) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg) 
                                                << 0x14U));
    vlSelf->__VdfgTmp_h77ca1847__0[0x13U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                              >> 0xaU) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    vlSelf->__VdfgTmp_h77ca1847__0[0x14U] = (0x10000U 
                                             | ((0x8000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                                                    << 0xfU)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    vlSelf->__VdfgTmp_h77ca1847__0[0x15U] = 0U;
    vlSelf->__VdfgTmp_h77ca1847__0[0x16U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                              << 8U) 
                                             | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                                << 6U));
    vlSelf->__VdfgTmp_h77ca1847__0[0x17U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                              >> 0x18U) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 8U));
    vlSelf->__VdfgTmp_h77ca1847__0[0x18U] = ((2U & 
                                              ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                               << 1U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x18U));
    __Vtemp_h61aad77a__0[0U] = vlSelf->__VdfgTmp_hbb3da45d__0[0U];
    __Vtemp_h61aad77a__0[1U] = vlSelf->__VdfgTmp_hbb3da45d__0[1U];
    __Vtemp_h61aad77a__0[2U] = vlSelf->__VdfgTmp_hbb3da45d__0[2U];
    __Vtemp_h61aad77a__0[3U] = vlSelf->__VdfgTmp_hbb3da45d__0[3U];
    __Vtemp_h61aad77a__0[4U] = vlSelf->__VdfgTmp_hbb3da45d__0[4U];
    __Vtemp_h61aad77a__0[5U] = vlSelf->__VdfgTmp_hbb3da45d__0[5U];
    __Vtemp_h61aad77a__0[6U] = vlSelf->__VdfgTmp_hbb3da45d__0[6U];
    __Vtemp_h61aad77a__0[7U] = vlSelf->__VdfgTmp_hbb3da45d__0[7U];
    __Vtemp_h61aad77a__0[8U] = vlSelf->__VdfgTmp_hbb3da45d__0[8U];
    __Vtemp_h61aad77a__0[9U] = vlSelf->__VdfgTmp_hbb3da45d__0[9U];
    __Vtemp_h61aad77a__0[0xaU] = vlSelf->__VdfgTmp_hbb3da45d__0[0xaU];
    __Vtemp_h61aad77a__0[0xbU] = vlSelf->__VdfgTmp_hbb3da45d__0[0xbU];
    __Vtemp_h61aad77a__0[0xcU] = vlSelf->__VdfgTmp_hbb3da45d__0[0xcU];
    __Vtemp_h61aad77a__0[0xdU] = vlSelf->__VdfgTmp_hbb3da45d__0[0xdU];
    __Vtemp_h61aad77a__0[0xeU] = vlSelf->__VdfgTmp_hbb3da45d__0[0xeU];
    __Vtemp_h61aad77a__0[0xfU] = vlSelf->__VdfgTmp_hbb3da45d__0[0xfU];
    __Vtemp_h61aad77a__0[0x10U] = vlSelf->__VdfgTmp_hbb3da45d__0[0x10U];
    __Vtemp_h61aad77a__0[0x11U] = vlSelf->__VdfgTmp_hbb3da45d__0[0x11U];
    __Vtemp_h61aad77a__0[0x12U] = vlSelf->__VdfgTmp_hbb3da45d__0[0x12U];
    __Vtemp_h61aad77a__0[0x13U] = vlSelf->__VdfgTmp_hbb3da45d__0[0x13U];
    __Vtemp_h61aad77a__0[0x14U] = vlSelf->__VdfgTmp_hbb3da45d__0[0x14U];
    __Vtemp_h61aad77a__0[0x15U] = vlSelf->__VdfgTmp_hbb3da45d__0[0x15U];
    __Vtemp_h61aad77a__0[0x16U] = vlSelf->__VdfgTmp_hbb3da45d__0[0x16U];
    __Vtemp_h61aad77a__0[0x17U] = (0x40U | vlSelf->__VdfgTmp_hbb3da45d__0[0x17U]);
    __Vtemp_h61aad77a__0[0x18U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_h61aad77a__0[0x19U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_h61aad77a__0[0x1aU] = (0x1000000U | ((0x800000U 
                                                  & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                     << 0x17U)) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 2U)));
    __Vtemp_h61aad77a__0[0x1bU] = 0U;
    __Vtemp_h61aad77a__0[0x1cU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h61aad77a__0[0x1dU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h61aad77a__0[0x1eU] = (0x400U | ((0x200U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                 << 9U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x10U)));
    __Vtemp_h61aad77a__0[0x1fU] = 0U;
    __Vtemp_h61aad77a__0[0x20U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_h61aad77a__0[0x21U] = (0x10000000U | ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                                      >> 0x1eU) 
                                                     | ((IData)(
                                                                (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                                 >> 0x20U)) 
                                                        << 2U))));
    __Vtemp_h61aad77a__0[0x22U] = 0U;
    __Vtemp_h61aad77a__0[0x23U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 0x14U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                 << 0x12U));
    __Vtemp_h61aad77a__0[0x24U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x14U));
    __Vtemp_h61aad77a__0[0x25U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0xcU)));
    __Vtemp_h61aad77a__0[0x26U] = 0U;
    __Vtemp_h61aad77a__0[0x27U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h61aad77a__0[0x28U] = (((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                                  >> 0x1aU) 
                                                 | ((IData)(
                                                            (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 6U)));
    __Vtemp_h61aad77a__0[0x29U] = 1U;
    __Vtemp_h61aad77a__0[0x2aU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_h61aad77a__0[0x2bU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h61aad77a__0[0x2cU] = (0x40000U | ((0x20000U 
                                                & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                   << 0x11U)) 
                                               | ((IData)(
                                                          (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 8U)));
    __Vtemp_h61aad77a__0[0x2dU] = 0U;
    __Vtemp_h61aad77a__0[0x2eU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h61aad77a__0[0x2fU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h61aad77a__0[0x30U] = (0x10U | ((8U & (
                                                   (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                   << 3U)) 
                                            | ((IData)(
                                                       (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x16U)));
    __Vtemp_h61aad77a__0[0x31U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h61aad77a__0[0x32U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h61aad77a__0[0x33U] = (0x400000U | ((0x200000U 
                                                 & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                    << 0x15U)) 
                                                | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 4U)));
    __Vtemp_h61aad77a__0[0x34U] = 0U;
    __Vtemp_h61aad77a__0[0x35U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    << 0xeU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                                << 0xcU));
    __Vtemp_h61aad77a__0[0x36U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    >> 0x12U) | ((IData)(
                                                         (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xeU));
    __Vtemp_h61aad77a__0[0x37U] = (0x100U | ((0x80U 
                                              & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    __Vtemp_h61aad77a__0[0x38U] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h61aad77a__0[0x39U] = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    __Vtemp_h61aad77a__0[0x3aU] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | (IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                            >> 0x20U))));
    __Vtemp_h61aad77a__0[0x3bU] = 0U;
    __Vtemp_h61aad77a__0[0x3cU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_h61aad77a__0[0x3dU] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_h61aad77a__0[0x3eU] = ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                              << 0xbU)) 
                                   | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                               >> 0x20U)) 
                                      >> 0xeU));
    VL_CONCAT_WQW(2050,54,1996, __Vtemp_hdb36e74c__0, 1ULL, __Vtemp_h61aad77a__0);
    VL_CONCAT_WIW(2051,1,2050, __Vtemp_h590d1eee__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg), __Vtemp_hdb36e74c__0);
    VL_EXTEND_WW(2052,2051, __Vtemp_h07106434__0, __Vtemp_h590d1eee__0);
    VL_CONCAT_WQW(2109,57,2052, __Vtemp_h3aab0179__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod, __Vtemp_h07106434__0);
    VL_CONCAT_WIW(2110,1,2109, __Vtemp_h3cc2b7dd__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))), __Vtemp_h3aab0179__0);
    VL_CONCAT_WQW(2164,54,2110, __Vtemp_h9bbabddc__0, 1ULL, __Vtemp_h3cc2b7dd__0);
    VL_CONCAT_WIW(2165,1,2164, __Vtemp_h9dbfd466__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg), __Vtemp_h9bbabddc__0);
    VL_EXTEND_WW(2166,2165, __Vtemp_h2e0fecf8__0, __Vtemp_h9dbfd466__0);
    VL_CONCAT_WQW(2223,57,2166, __Vtemp_h1a9f07ca__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod, __Vtemp_h2e0fecf8__0);
    VL_CONCAT_WIW(2224,1,2223, __Vtemp_hb724ce83__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))), __Vtemp_h1a9f07ca__0);
    VL_CONCAT_WQW(2278,54,2224, __Vtemp_h1e9655a0__0, 1ULL, __Vtemp_hb724ce83__0);
    VL_CONCAT_WIW(2279,1,2278, __Vtemp_hc1865eee__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg), __Vtemp_h1e9655a0__0);
    VL_EXTEND_WW(2280,2279, __Vtemp_hdb09841a__0, __Vtemp_hc1865eee__0);
    VL_CONCAT_WQW(2337,57,2280, __Vtemp_h4823e04a__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod, __Vtemp_hdb09841a__0);
    VL_CONCAT_WIW(2338,1,2337, __Vtemp_h087362e7__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))), __Vtemp_h4823e04a__0);
    VL_CONCAT_WQW(2392,54,2338, __Vtemp_hc1195ef2__0, 1ULL, __Vtemp_h087362e7__0);
    VL_CONCAT_WIW(2393,1,2392, __Vtemp_he9d7ae77__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg), __Vtemp_hc1195ef2__0);
    VL_EXTEND_WW(2394,2393, __Vtemp_h3d10996d__0, __Vtemp_he9d7ae77__0);
    VL_CONCAT_WQW(2451,57,2394, __Vtemp_h43289bc5__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod, __Vtemp_h3d10996d__0);
    VL_CONCAT_WIW(2452,1,2451, __Vtemp_h0fae00b3__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))), __Vtemp_h43289bc5__0);
    VL_CONCAT_WQW(2506,54,2452, __Vtemp_h196a4549__0, 1ULL, __Vtemp_h0fae00b3__0);
    VL_CONCAT_WIW(2507,1,2506, __Vtemp_h5ebac4c3__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg), __Vtemp_h196a4549__0);
    VL_EXTEND_WW(2508,2507, __Vtemp_h89cb3dec__0, __Vtemp_h5ebac4c3__0);
    VL_CONCAT_WQW(2565,57,2508, __Vtemp_hf2acde97__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod, __Vtemp_h89cb3dec__0);
    VL_CONCAT_WIW(2566,1,2565, __Vtemp_h5b2ff01d__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))), __Vtemp_hf2acde97__0);
    VL_CONCAT_WQW(2620,54,2566, __Vtemp_hca58e3c5__0, 1ULL, __Vtemp_h5b2ff01d__0);
    VL_CONCAT_WIW(2621,1,2620, __Vtemp_h080cd2eb__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg), __Vtemp_hca58e3c5__0);
    VL_EXTEND_WW(2622,2621, __Vtemp_hb0e30b88__0, __Vtemp_h080cd2eb__0);
    VL_CONCAT_WQW(2679,57,2622, __Vtemp_h527be1bf__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod, __Vtemp_hb0e30b88__0);
    VL_CONCAT_WIW(2680,1,2679, __Vtemp_h5166717e__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))), __Vtemp_h527be1bf__0);
    VL_CONCAT_WQW(2734,54,2680, __Vtemp_h169886a6__0, 1ULL, __Vtemp_h5166717e__0);
    VL_CONCAT_WIW(2735,1,2734, __Vtemp_h74f53c1b__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg), __Vtemp_h169886a6__0);
    VL_EXTEND_WW(2736,2735, __Vtemp_hdd6c571c__0, __Vtemp_h74f53c1b__0);
    VL_CONCAT_WQW(2793,57,2736, __Vtemp_h8de261d8__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod, __Vtemp_hdd6c571c__0);
    VL_CONCAT_WIW(2794,1,2793, __Vtemp_h8bd424cf__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))), __Vtemp_h8de261d8__0);
    VL_CONCAT_WQW(2848,54,2794, __Vtemp_hcf14d050__0, 1ULL, __Vtemp_h8bd424cf__0);
    VL_CONCAT_WIW(2849,1,2848, __Vtemp_he8bf748a__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg), __Vtemp_hcf14d050__0);
    VL_EXTEND_WW(2850,2849, __Vtemp_h92a99ab6__0, __Vtemp_he8bf748a__0);
    VL_CONCAT_WQW(2907,57,2850, __Vtemp_hb48ab655__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod, __Vtemp_h92a99ab6__0);
    VL_CONCAT_WIW(2908,1,2907, __Vtemp_h7908d2f9__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))), __Vtemp_hb48ab655__0);
    VL_CONCAT_WQW(2962,54,2908, __Vtemp_h18222030__0, 1ULL, __Vtemp_h7908d2f9__0);
    VL_CONCAT_WIW(2963,1,2962, __Vtemp_h91f59e59__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg), __Vtemp_h18222030__0);
    VL_EXTEND_WW(2964,2963, __Vtemp_h8131435a__0, __Vtemp_h91f59e59__0);
    VL_CONCAT_WQW(3021,57,2964, __Vtemp_hb7e2f505__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod, __Vtemp_h8131435a__0);
    VL_CONCAT_WIW(3022,1,3021, __Vtemp_h34fb9520__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))), __Vtemp_hb7e2f505__0);
    VL_CONCAT_WQW(3076,54,3022, __Vtemp_hb2a3d837__0, 1ULL, __Vtemp_h34fb9520__0);
    VL_CONCAT_WIW(3077,1,3076, __Vtemp_h09933bc0__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg), __Vtemp_hb2a3d837__0);
    VL_EXTEND_WW(3078,3077, __Vtemp_h9c122244__0, __Vtemp_h09933bc0__0);
    VL_CONCAT_WQW(3135,57,3078, __Vtemp_hd9d0c58f__0, vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod, __Vtemp_h9c122244__0);
    VL_CONCAT_WIW(3136,1,3135, __Vtemp_h3c8cc326__0, 
                  (1U & (~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))), __Vtemp_hd9d0c58f__0);
    VL_EXTEND_WW(3190,3136, __Vtemp_h35b921f9__0, __Vtemp_h3c8cc326__0);
    VL_CONCAT_WIW(3191,1,3190, __Vtemp_hb8f1437d__0, (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg), __Vtemp_h35b921f9__0);
    VL_EXTEND_WW(3192,3191, __Vtemp_h6a2c90bc__0, __Vtemp_hb8f1437d__0);
    VL_CONCAT_WQW(3248,56,3192, __Vtemp_h7141c748__0, vlSelf->__VdfgTmp_hb1c782c8__0, __Vtemp_h6a2c90bc__0);
    VL_ASSIGN_W(3248,vlSelf->boothMult__DOT____Vcellout__genProds__io_partial_prods, __Vtemp_h7141c748__0);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
            << 0xeU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                        << 0xcU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[2U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x12U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[3U] 
        = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[4U] 
        = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[5U] 
        = (0x4000000U | ((0x2000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                        << 0x19U)) 
                         | (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                    >> 0x20U))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[6U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[7U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[8U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[9U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xaU] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xbU] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                      << 2U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xcU] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                              >> 0x1cU) | ((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 4U))));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xdU] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xeU] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xfU] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x10U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xaU)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x11U] = 0U;
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x12U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                      << 6U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x13U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                  >> 0x20U)) << 8U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x14U] 
        = (4U | ((2U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                        << 1U)) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x15U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x16U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x17U] 
        = (0x100000U | ((0x80000U & ((~ (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                     << 0x13U)) | ((IData)(
                                                           (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x18U] = 0U;
}
