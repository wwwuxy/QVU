// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQvuTop.h for the primary calling header

#include "verilated.h"

#include "VQvuTop___024root.h"

VL_INLINE_OPT void VQvuTop___024root___ico_sequent__TOP__0(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_hcf3c84e6__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_hcf3c84e6__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_hcebf1440__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_hcebf1440__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h2a3df169__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h2a3df169__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h25bc44f7__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h25bc44f7__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h2522f60c__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h2522f60c__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h24a56a82__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h24a56a82__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h2823db47__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h2823db47__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h2bba2b99__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h2bba2b99__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h2b2888ea__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h2b2888ea__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h2aaab1d4__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h2aaab1d4__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h26293c25__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h26293c25__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h21bf8883__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h21bf8883__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h217dfa70__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h217dfa70__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h24ca96e6__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h24ca96e6__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h244c0703__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h244c0703__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT____VdfgTmp_h27f16fb5__0;
    QvuTop__DOT__decode__DOT____VdfgTmp_h27f16fb5__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h01806713__0;
    VlWide<3>/*95:0*/ __Vtemp_ha91bc175__0;
    VlWide<4>/*127:0*/ __Vtemp_h8244ac2e__0;
    // Body
    vlSelf->__VdfgTmp_hbb02c542__0 = ((4U == (IData)(vlSelf->io_op)) 
                                      & (0U == (IData)(vlSelf->io_vector_size)));
    vlSelf->__VdfgTmp_he1263253__0 = ((1U == (IData)(vlSelf->io_op)) 
                                      & (0U == (IData)(vlSelf->io_vector_size)));
    vlSelf->QvuTop__DOT___GEN_6 = ((0U == (IData)(vlSelf->io_op)) 
                                   | (1U == (IData)(vlSelf->io_op)));
    vlSelf->QvuTop__DOT____VdfgTmp_h433f84f8__0 = (
                                                   (0U 
                                                    != (IData)(vlSelf->io_vector_size)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT___GEN_0 = (((0U == (IData)(vlSelf->io_vector_size)) 
                                    << 3U) | ((0U == (IData)(vlSelf->io_vector_size))
                                               ? 0U
                                               : (IData)(vlSelf->io_vector_size)));
    vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0 = (IData)(
                                                          ((0U 
                                                            != 
                                                            (6U 
                                                             & (IData)(vlSelf->io_vector_size))) 
                                                           | (0U 
                                                              == (IData)(vlSelf->io_vector_size))));
    vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0 = (IData)(
                                                          (((IData)(vlSelf->io_vector_size) 
                                                            >> 2U) 
                                                           | (0U 
                                                              == (IData)(vlSelf->io_vector_size))));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcfb253e9__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_15 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h244a7236__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_0 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcf4be793__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_14 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcecc844e__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_13 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2a2a10e4__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_12 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25bc0d63__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_11 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25331089__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_10 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24af6ee8__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_9 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h281ce652__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_8 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2b2d736f__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_6 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2aaec35a__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_5 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h263440d8__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_4 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h21c2c097__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_3 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h217d4d15__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_2 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24cba9c4__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_1 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2babc25d__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i_7 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE = ((0U 
                                                == (IData)(vlSelf->io_vector_size))
                                                ? 0x10U
                                                : (IData)(vlSelf->io_vector_size));
    if (vlSelf->io_Isposit) {
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h907e46d1__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h88bc2594__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h93fcca7b__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8fff338c__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f719326__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8effb80f__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e62d0a5__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8de56522__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d7f6188__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c68d66f__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8beafdc8__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b7d4662__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a383c23__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h898ddcf9__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8933512e__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8cea4ac5__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_hcf3c84e6__0 
            = (0x7fffffffU & vlSelf->io_posit_i_15);
        QvuTop__DOT__decode__DOT____VdfgTmp_h27f16fb5__0 
            = (0x7fffffffU & vlSelf->io_posit_i_0);
        QvuTop__DOT__decode__DOT____VdfgTmp_hcebf1440__0 
            = (0x7fffffffU & vlSelf->io_posit_i_14);
        QvuTop__DOT__decode__DOT____VdfgTmp_h2a3df169__0 
            = (0x7fffffffU & vlSelf->io_posit_i_13);
        QvuTop__DOT__decode__DOT____VdfgTmp_h25bc44f7__0 
            = (0x7fffffffU & vlSelf->io_posit_i_12);
        QvuTop__DOT__decode__DOT____VdfgTmp_h2522f60c__0 
            = (0x7fffffffU & vlSelf->io_posit_i_11);
        QvuTop__DOT__decode__DOT____VdfgTmp_h24a56a82__0 
            = (0x7fffffffU & vlSelf->io_posit_i_10);
        QvuTop__DOT__decode__DOT____VdfgTmp_h2823db47__0 
            = (0x7fffffffU & vlSelf->io_posit_i_9);
        QvuTop__DOT__decode__DOT____VdfgTmp_h2bba2b99__0 
            = (0x7fffffffU & vlSelf->io_posit_i_8);
        QvuTop__DOT__decode__DOT____VdfgTmp_h2aaab1d4__0 
            = (0x7fffffffU & vlSelf->io_posit_i_6);
        QvuTop__DOT__decode__DOT____VdfgTmp_h26293c25__0 
            = (0x7fffffffU & vlSelf->io_posit_i_5);
        QvuTop__DOT__decode__DOT____VdfgTmp_h21bf8883__0 
            = (0x7fffffffU & vlSelf->io_posit_i_4);
        QvuTop__DOT__decode__DOT____VdfgTmp_h217dfa70__0 
            = (0x7fffffffU & vlSelf->io_posit_i_3);
        QvuTop__DOT__decode__DOT____VdfgTmp_h24ca96e6__0 
            = (0x7fffffffU & vlSelf->io_posit_i_2);
        QvuTop__DOT__decode__DOT____VdfgTmp_h244c0703__0 
            = (0x7fffffffU & vlSelf->io_posit_i_1);
        QvuTop__DOT__decode__DOT____VdfgTmp_h2b2888ea__0 
            = (0x7fffffffU & vlSelf->io_posit_i_7);
        vlSelf->QvuTop__DOT___GEN_7 = ((((0U == (IData)(vlSelf->io_vector_size)) 
                                         & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcfb253e9__0)) 
                                        << 0xfU) | 
                                       ((((0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                          & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcf4be793__0)) 
                                         << 0xeU) | 
                                        ((((0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcecc844e__0)) 
                                          << 0xdU) 
                                         | ((((0xcU 
                                               < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                              & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2a2a10e4__0)) 
                                             << 0xcU) 
                                            | ((((0xbU 
                                                  < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                 & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25bc0d63__0)) 
                                                << 0xbU) 
                                               | ((((0xaU 
                                                     < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                    & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25331089__0)) 
                                                   << 0xaU) 
                                                  | ((((9U 
                                                        < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                       & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24af6ee8__0)) 
                                                      << 9U) 
                                                     | ((((8U 
                                                           < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                          & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h281ce652__0)) 
                                                         << 8U) 
                                                        | ((((0U 
                                                              == (IData)(vlSelf->io_vector_size)) 
                                                             & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2babc25d__0)) 
                                                            << 7U) 
                                                           | ((((6U 
                                                                 < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2b2d736f__0)) 
                                                               << 6U) 
                                                              | ((((5U 
                                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                   & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2aaec35a__0)) 
                                                                  << 5U) 
                                                                 | ((((4U 
                                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                      & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h263440d8__0)) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0) 
                                                                         & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h21c2c097__0)) 
                                                                        << 3U) 
                                                                       | ((((2U 
                                                                             < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h217d4d15__0)) 
                                                                           << 2U) 
                                                                          | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0) 
                                                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24cba9c4__0)) 
                                                                              << 1U) 
                                                                             | ((0U 
                                                                                != (IData)(vlSelf->QvuTop__DOT___GEN_0)) 
                                                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h244a7236__0)))))))))))))))));
    } else {
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h907e46d1__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_15));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h88bc2594__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_0));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h93fcca7b__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_14));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8fff338c__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_13));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f719326__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_12));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8effb80f__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_11));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e62d0a5__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_10));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8de56522__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_9));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d7f6188__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_8));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c68d66f__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_6));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8beafdc8__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_5));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b7d4662__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_4));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a383c23__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_3));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h898ddcf9__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_2));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8933512e__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_1));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8cea4ac5__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_7));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0 
            = (0xffU & (IData)((vlSelf->io_float_i_0 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0 
            = (0xffU & (IData)((vlSelf->io_float_i_1 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0 
            = (0xffU & (IData)((vlSelf->io_float_i_2 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0 
            = (0xffU & (IData)((vlSelf->io_float_i_3 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0 
            = (0xffU & (IData)((vlSelf->io_float_i_4 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0 
            = (0xffU & (IData)((vlSelf->io_float_i_5 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0 
            = (0xffU & (IData)((vlSelf->io_float_i_6 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0 
            = (0xffU & (IData)((vlSelf->io_float_i_7 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0 
            = (0xffU & (IData)((vlSelf->io_float_i_8 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0 
            = (0xffU & (IData)((vlSelf->io_float_i_9 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0 
            = (0xffU & (IData)((vlSelf->io_float_i_10 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0 
            = (0xffU & (IData)((vlSelf->io_float_i_11 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0 
            = (0xffU & (IData)((vlSelf->io_float_i_12 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0 
            = (0xffU & (IData)((vlSelf->io_float_i_13 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0 
            = (0xffU & (IData)((vlSelf->io_float_i_14 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0 
            = (0xffU & (IData)((vlSelf->io_float_i_15 
                                >> 0x17U)));
        QvuTop__DOT__decode__DOT____VdfgTmp_hcf3c84e6__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h27f16fb5__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_hcebf1440__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h2a3df169__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h25bc44f7__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h2522f60c__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h24a56a82__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h2823db47__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h2bba2b99__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h2aaab1d4__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h26293c25__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h21bf8883__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h217dfa70__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h24ca96e6__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h244c0703__0 = 0U;
        QvuTop__DOT__decode__DOT____VdfgTmp_h2b2888ea__0 = 0U;
        vlSelf->QvuTop__DOT___GEN_7 = ((0x8000U & (
                                                   ((0U 
                                                     == (IData)(vlSelf->io_vector_size)) 
                                                    & ((~ (IData)(vlSelf->io_Isposit)) 
                                                       & (vlSelf->io_float_i_15 
                                                          >> 0x1fU))) 
                                                   << 0xfU)) 
                                       | ((0x4000U 
                                           & (((0xeU 
                                                < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                               & ((~ (IData)(vlSelf->io_Isposit)) 
                                                  & (vlSelf->io_float_i_14 
                                                     >> 0x1fU))) 
                                              << 0xeU)) 
                                          | ((0x2000U 
                                              & (((0xdU 
                                                   < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                  & ((~ (IData)(vlSelf->io_Isposit)) 
                                                     & (vlSelf->io_float_i_13 
                                                        >> 0x1fU))) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((0xcU 
                                                      < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                     & ((~ (IData)(vlSelf->io_Isposit)) 
                                                        & (vlSelf->io_float_i_12 
                                                           >> 0x1fU))) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((0xbU 
                                                         < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                        & ((~ (IData)(vlSelf->io_Isposit)) 
                                                           & (vlSelf->io_float_i_11 
                                                              >> 0x1fU))) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((0xaU 
                                                            < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                           & ((~ (IData)(vlSelf->io_Isposit)) 
                                                              & (vlSelf->io_float_i_10 
                                                                 >> 0x1fU))) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((9U 
                                                               < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                              & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                 & (vlSelf->io_float_i_9 
                                                                    >> 0x1fU))) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((8U 
                                                                  < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                 & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                    & (vlSelf->io_float_i_8 
                                                                       >> 0x1fU))) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((0U 
                                                                     == (IData)(vlSelf->io_vector_size)) 
                                                                    & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                       & (vlSelf->io_float_i_7 
                                                                          >> 0x1fU))) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((6U 
                                                                        < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                       & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                          & (vlSelf->io_float_i_6 
                                                                             >> 0x1fU))) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((5U 
                                                                           < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                          & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                             & (vlSelf->io_float_i_5 
                                                                                >> 0x1fU))) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((4U 
                                                                              < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                             & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                                & (vlSelf->io_float_i_4 
                                                                                >> 0x1fU))) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0) 
                                                                                & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                                & (vlSelf->io_float_i_3 
                                                                                >> 0x1fU))) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((2U 
                                                                                < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                                & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                                & (vlSelf->io_float_i_2 
                                                                                >> 0x1fU))) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0) 
                                                                                & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                                & (vlSelf->io_float_i_1 
                                                                                >> 0x1fU))) 
                                                                                << 1U)) 
                                                                                | (((~ (IData)(vlSelf->io_Isposit)) 
                                                                                & (vlSelf->io_float_i_0 
                                                                                >> 0x1fU)) 
                                                                                & (0U 
                                                                                != (IData)(vlSelf->QvuTop__DOT___GEN_0))))))))))))))))));
    }
    vlSelf->QvuTop__DOT__floatDecode__DOT___GEN_0 = 
        (((0U == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h907e46d1__0) 
          << 0xfU) | (((0U == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h93fcca7b__0) 
                       << 0xeU) | (((0U == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8fff338c__0) 
                                    << 0xdU) | (((0U 
                                                  == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f719326__0) 
                                                 << 0xcU) 
                                                | (((0U 
                                                     == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8effb80f__0) 
                                                    << 0xbU) 
                                                   | (((0U 
                                                        == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e62d0a5__0) 
                                                       << 0xaU) 
                                                      | (((0U 
                                                           == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8de56522__0) 
                                                          << 9U) 
                                                         | (((0U 
                                                              == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d7f6188__0) 
                                                             << 8U) 
                                                            | (((0U 
                                                                 == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8cea4ac5__0) 
                                                                << 7U) 
                                                               | (((0U 
                                                                    == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c68d66f__0) 
                                                                   << 6U) 
                                                                  | (((0U 
                                                                       == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8beafdc8__0) 
                                                                      << 5U) 
                                                                     | (((0U 
                                                                          == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b7d4662__0) 
                                                                         << 4U) 
                                                                        | (((0U 
                                                                             == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a383c23__0) 
                                                                            << 3U) 
                                                                           | (((0U 
                                                                                == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h898ddcf9__0) 
                                                                               << 2U) 
                                                                              | (((0U 
                                                                                == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8933512e__0) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h88bc2594__0))))))))))))))));
    __Vtemp_h01806713__0[0U] = (IData)((((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))
                                                           ? 0x182U
                                                           : 
                                                          ((0xffU 
                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))
                                                            ? 0U
                                                            : 
                                                           ((0x100U 
                                                             & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0) 
                                                                 - (IData)(0x7fU)) 
                                                                << 1U)) 
                                                            | (0xffU 
                                                               & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0) 
                                                                  - (IData)(0x7fU)))))))) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))
                                                              ? 0x182U
                                                              : 
                                                             ((0xffU 
                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))
                                                               ? 0U
                                                               : 
                                                              ((0x100U 
                                                                & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0) 
                                                                    - (IData)(0x7fU)) 
                                                                   << 1U)) 
                                                               | (0xffU 
                                                                  & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0) 
                                                                     - (IData)(0x7fU)))))))) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(
                                                               ((0U 
                                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))
                                                                 ? 0x182U
                                                                 : 
                                                                ((0xffU 
                                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x100U 
                                                                   & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0) 
                                                                       - (IData)(0x7fU)) 
                                                                      << 1U)) 
                                                                  | (0xffU 
                                                                     & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0) 
                                                                        - (IData)(0x7fU)))))))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  ((0U 
                                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))
                                                                    ? 0x182U
                                                                    : 
                                                                   ((0xffU 
                                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x100U 
                                                                      & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0) 
                                                                          - (IData)(0x7fU)) 
                                                                         << 1U)) 
                                                                     | (0xffU 
                                                                        & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0) 
                                                                           - (IData)(0x7fU)))))))) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   ((((0U 
                                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))
                                                                       ? 0x182U
                                                                       : 
                                                                      ((0xffU 
                                                                        == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))
                                                                        ? 0U
                                                                        : 
                                                                       ((0x100U 
                                                                         & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0) 
                                                                             - (IData)(0x7fU)) 
                                                                            << 1U)) 
                                                                        | (0xffU 
                                                                           & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0) 
                                                                              - (IData)(0x7fU)))))) 
                                                                     << 0x12U) 
                                                                    | ((((0U 
                                                                          == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))
                                                                          ? 0x182U
                                                                          : 
                                                                         ((0xffU 
                                                                           == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))
                                                                           ? 0U
                                                                           : 
                                                                          ((0x100U 
                                                                            & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0) 
                                                                                - (IData)(0x7fU)) 
                                                                               << 1U)) 
                                                                           | (0xffU 
                                                                              & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0) 
                                                                                - (IData)(0x7fU)))))) 
                                                                        << 9U) 
                                                                       | ((0U 
                                                                           == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))
                                                                           ? 0x182U
                                                                           : 
                                                                          ((0xffU 
                                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))
                                                                            ? 0U
                                                                            : 
                                                                           ((0x100U 
                                                                             & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0) 
                                                                                - (IData)(0x7fU)) 
                                                                                << 1U)) 
                                                                            | (0xffU 
                                                                               & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0) 
                                                                                - (IData)(0x7fU)))))))))))))));
    __Vtemp_h01806713__0[1U] = ((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))
                                   ? 0x182U : ((0xffU 
                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))
                                                ? 0U
                                                : (
                                                   (0x100U 
                                                    & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0) 
                                                        - (IData)(0x7fU)) 
                                                       << 1U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0) 
                                                         - (IData)(0x7fU)))))) 
                                 << 0x1fU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0U 
                                                                          == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))
                                                                          ? 0x182U
                                                                          : 
                                                                         ((0xffU 
                                                                           == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))
                                                                           ? 0U
                                                                           : 
                                                                          ((0x100U 
                                                                            & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0) 
                                                                                - (IData)(0x7fU)) 
                                                                               << 1U)) 
                                                                           | (0xffU 
                                                                              & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0) 
                                                                                - (IData)(0x7fU)))))))) 
                                                        << 0x36U) 
                                                       | (((QData)((IData)(
                                                                           ((0U 
                                                                             == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))
                                                                             ? 0x182U
                                                                             : 
                                                                            ((0xffU 
                                                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))
                                                                              ? 0U
                                                                              : 
                                                                             ((0x100U 
                                                                               & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0) 
                                                                                - (IData)(0x7fU)) 
                                                                                << 1U)) 
                                                                              | (0xffU 
                                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0) 
                                                                                - (IData)(0x7fU)))))))) 
                                                           << 0x2dU) 
                                                          | (((QData)((IData)(
                                                                              ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))
                                                                                ? 0x182U
                                                                                : 
                                                                               ((0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0) 
                                                                                - (IData)(0x7fU)) 
                                                                                << 1U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0) 
                                                                                - (IData)(0x7fU)))))))) 
                                                              << 0x24U) 
                                                             | (((QData)((IData)(
                                                                                ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))
                                                                                 ? 0x182U
                                                                                 : 
                                                                                ((0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0) 
                                                                                - (IData)(0x7fU)) 
                                                                                << 1U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0) 
                                                                                - (IData)(0x7fU)))))))) 
                                                                 << 0x1bU) 
                                                                | (QData)((IData)(
                                                                                ((((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))
                                                                                 ? 0x182U
                                                                                 : 
                                                                                ((0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0) 
                                                                                - (IData)(0x7fU)) 
                                                                                << 1U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0) 
                                                                                - (IData)(0x7fU)))))) 
                                                                                << 0x12U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))
                                                                                 ? 0x182U
                                                                                 : 
                                                                                ((0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0) 
                                                                                - (IData)(0x7fU)) 
                                                                                << 1U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0) 
                                                                                - (IData)(0x7fU)))))) 
                                                                                << 9U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))
                                                                                 ? 0x182U
                                                                                 : 
                                                                                ((0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x100U 
                                                                                & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0) 
                                                                                - (IData)(0x7fU)) 
                                                                                << 1U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0) 
                                                                                - (IData)(0x7fU)))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_ha91bc175__0[2U] = ((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0))
                                   ? 0x182U : ((0xffU 
                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0))
                                                ? 0U
                                                : (
                                                   (0x100U 
                                                    & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0) 
                                                        - (IData)(0x7fU)) 
                                                       << 1U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0) 
                                                         - (IData)(0x7fU)))))) 
                                 << 0x11U) | ((((0U 
                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0))
                                                 ? 0x182U
                                                 : 
                                                ((0xffU 
                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0))
                                                  ? 0U
                                                  : 
                                                 ((0x100U 
                                                   & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0) 
                                                       - (IData)(0x7fU)) 
                                                      << 1U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0) 
                                                        - (IData)(0x7fU)))))) 
                                               << 8U) 
                                              | (((0U 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))
                                                   ? 0x182U
                                                   : 
                                                  ((0xffU 
                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))
                                                    ? 0U
                                                    : 
                                                   ((0x100U 
                                                     & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0) 
                                                         - (IData)(0x7fU)) 
                                                        << 1U)) 
                                                    | (0xffU 
                                                       & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0) 
                                                          - (IData)(0x7fU)))))) 
                                                 >> 1U)));
    __Vtemp_h8244ac2e__0[3U] = ((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0))
                                   ? 0x182U : ((0xffU 
                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0))
                                                ? 0U
                                                : (
                                                   (0x100U 
                                                    & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0) 
                                                        - (IData)(0x7fU)) 
                                                       << 1U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0) 
                                                         - (IData)(0x7fU)))))) 
                                 << 0xcU) | ((((0U 
                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0))
                                                ? 0x182U
                                                : (
                                                   (0xffU 
                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0))
                                                    ? 0U
                                                    : 
                                                   ((0x100U 
                                                     & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0) 
                                                         - (IData)(0x7fU)) 
                                                        << 1U)) 
                                                    | (0xffU 
                                                       & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0) 
                                                          - (IData)(0x7fU)))))) 
                                              << 3U) 
                                             | (((0U 
                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0))
                                                  ? 0x182U
                                                  : 
                                                 ((0xffU 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0))
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0) 
                                                        - (IData)(0x7fU)) 
                                                       << 1U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0) 
                                                         - (IData)(0x7fU)))))) 
                                                >> 6U)));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Exp[0U] 
        = __Vtemp_h01806713__0[0U];
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Exp[1U] 
        = __Vtemp_h01806713__0[1U];
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Exp[2U] 
        = ((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0))
              ? 0x182U : ((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0))
                           ? 0U : ((0x100U & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0) 
                                               - (IData)(0x7fU)) 
                                              << 1U)) 
                                   | (0xffU & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0) 
                                               - (IData)(0x7fU)))))) 
            << 0x1aU) | __Vtemp_ha91bc175__0[2U]);
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Exp[3U] 
        = ((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0))
              ? 0x182U : ((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0))
                           ? 0U : ((0x100U & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0) 
                                               - (IData)(0x7fU)) 
                                              << 1U)) 
                                   | (0xffU & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0) 
                                               - (IData)(0x7fU)))))) 
            << 0x1eU) | ((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0))
                            ? 0x182U : ((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0))
                                         ? 0U : ((0x100U 
                                                  & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0) 
                                                      - (IData)(0x7fU)) 
                                                     << 1U)) 
                                                 | (0xffU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0) 
                                                       - (IData)(0x7fU)))))) 
                          << 0x15U) | __Vtemp_h8244ac2e__0[3U]));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Exp[4U] 
        = ((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0))
              ? 0x182U : ((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0))
                           ? 0U : ((0x100U & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0) 
                                               - (IData)(0x7fU)) 
                                              << 1U)) 
                                   | (0xffU & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0) 
                                               - (IData)(0x7fU)))))) 
            << 7U) | (((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0))
                        ? 0x182U : ((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0))
                                     ? 0U : ((0x100U 
                                              & (((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0) 
                                                  - (IData)(0x7fU)) 
                                                 << 1U)) 
                                             | (0xffU 
                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0) 
                                                   - (IData)(0x7fU)))))) 
                      >> 2U));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[0U] 
        = (IData)((((QData)((IData)((1U & (~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0)) 
                                              | (0xffU 
                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))))))) 
                    << 0x2fU) | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8933512e__0)) 
                                  << 0x18U) | (QData)((IData)(
                                                              ((0x800000U 
                                                                & ((~ 
                                                                    ((0U 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0)) 
                                                                     | (0xffU 
                                                                        == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                   << 0x17U)) 
                                                               | vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h88bc2594__0))))));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[1U] 
        = ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h898ddcf9__0 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((0U 
                                                         == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0)) 
                                                        | (0xffU 
                                                           == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))))))) 
                                   << 0x2fU) | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8933512e__0)) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0x800000U 
                                                                    & ((~ 
                                                                        ((0U 
                                                                          == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0)) 
                                                                         | (0xffU 
                                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                       << 0x17U)) 
                                                                   | vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h88bc2594__0))))) 
                                 >> 0x20U)));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[2U] 
        = (((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0)) 
                | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0)))) 
            << 0x1fU) | ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a383c23__0 
                          << 8U) | ((0x80U & ((~ ((0U 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0)) 
                                                  | (0xffU 
                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0)))) 
                                              << 7U)) 
                                    | (vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h898ddcf9__0 
                                       >> 0x10U))));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[3U] 
        = ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8beafdc8__0 
            << 0x18U) | ((0x800000U & ((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0)) 
                                           | (0xffU 
                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0)))) 
                                       << 0x17U)) | vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b7d4662__0));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[4U] 
        = ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c68d66f__0 
            << 0x10U) | ((0x8000U & ((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0)) 
                                         | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0)))) 
                                     << 0xfU)) | (vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8beafdc8__0 
                                                  >> 8U)));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[5U] 
        = (((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0)) 
                | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0)))) 
            << 0x1fU) | ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8cea4ac5__0 
                          << 8U) | ((0x80U & ((~ ((0U 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0)) 
                                                  | (0xffU 
                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0)))) 
                                              << 7U)) 
                                    | (vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c68d66f__0 
                                       >> 0x10U))));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[6U] 
        = ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8de56522__0 
            << 0x18U) | ((0x800000U & ((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0)) 
                                           | (0xffU 
                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0)))) 
                                       << 0x17U)) | vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d7f6188__0));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[7U] 
        = ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e62d0a5__0 
            << 0x10U) | ((0x8000U & ((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0)) 
                                         | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0)))) 
                                     << 0xfU)) | (vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8de56522__0 
                                                  >> 8U)));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[8U] 
        = (((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0)) 
                | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0)))) 
            << 0x1fU) | ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8effb80f__0 
                          << 8U) | ((0x80U & ((~ ((0U 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0)) 
                                                  | (0xffU 
                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0)))) 
                                              << 7U)) 
                                    | (vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e62d0a5__0 
                                       >> 0x10U))));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[9U] 
        = ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8fff338c__0 
            << 0x18U) | ((0x800000U & ((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0)) 
                                           | (0xffU 
                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0)))) 
                                       << 0x17U)) | vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f719326__0));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[0xaU] 
        = ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h93fcca7b__0 
            << 0x10U) | ((0x8000U & ((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0)) 
                                         | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0)))) 
                                     << 0xfU)) | (vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8fff338c__0 
                                                  >> 8U)));
    vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac[0xbU] 
        = (((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0)) 
                | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0)))) 
            << 0x1fU) | ((vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h907e46d1__0 
                          << 8U) | ((0x80U & ((~ ((0U 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0)) 
                                                  | (0xffU 
                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0)))) 
                                              << 7U)) 
                                    | (vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h93fcca7b__0 
                                       >> 0x10U))));
    vlSelf->QvuTop__DOT__floatDecode__DOT___GEN = (
                                                   ((IData)(
                                                            (0xffU 
                                                             == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0))) 
                                                    << 0xfU) 
                                                   | (((IData)(
                                                               (0xffU 
                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0))) 
                                                       << 0xeU) 
                                                      | (((IData)(
                                                                  (0xffU 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0))) 
                                                          << 0xdU) 
                                                         | (((IData)(
                                                                     (0xffU 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0))) 
                                                             << 0xcU) 
                                                            | (((IData)(
                                                                        (0xffU 
                                                                         == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0))) 
                                                                << 0xbU) 
                                                               | (((IData)(
                                                                           (0xffU 
                                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0))) 
                                                                   << 0xaU) 
                                                                  | (((IData)(
                                                                              (0xffU 
                                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0))) 
                                                                      << 9U) 
                                                                     | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0))) 
                                                                         << 8U) 
                                                                        | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))) 
                                                                            << 7U) 
                                                                           | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))) 
                                                                               << 6U) 
                                                                              | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))) 
                                                                                << 1U) 
                                                                                | (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0)))))))))))))))));
    vlSelf->QvuTop__DOT____VdfgTmp_h62563a14__0 = (1U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->QvuTop__DOT___GEN_0)))) 
                                                      | (IData)(vlSelf->io_Isposit)));
    vlSelf->QvuTop__DOT____VdfgTmp_h0037cc42__0 = (1U 
                                                   & ((~ (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)) 
                                                      | (IData)(vlSelf->io_Isposit)));
    vlSelf->QvuTop__DOT____VdfgTmp_h5a247d4f__0 = (1U 
                                                   & ((~ (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)) 
                                                      | (IData)(vlSelf->io_Isposit)));
    vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcfb253e9__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_15)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_hcf3c84e6__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h244a7236__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_0)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h27f16fb5__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcf4be793__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_14)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_hcebf1440__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcecc844e__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_13)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h2a3df169__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2a2a10e4__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_12)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h25bc44f7__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25bc0d63__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_11)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h2522f60c__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25331089__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_10)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h24a56a82__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24af6ee8__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_9)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h2823db47__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h281ce652__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_8)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h2bba2b99__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2b2d736f__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_6)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h2aaab1d4__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2aaec35a__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_5)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h26293c25__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h263440d8__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_4)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h21bf8883__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h21c2c097__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_3)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h217dfa70__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h217d4d15__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_2)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h24ca96e6__0));
    vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24cba9c4__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_1)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h244c0703__0));
    vlSelf->QvuTop__DOT__decode__DOT__isNaR = ((((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcfb253e9__0) 
                                                 << 0xfU) 
                                                | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcf4be793__0) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcecc844e__0) 
                                                       << 0xdU) 
                                                      | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2a2a10e4__0) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25bc0d63__0) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25331089__0) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24af6ee8__0) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h281ce652__0) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2babc25d__0) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2b2d736f__0) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2aaec35a__0) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h263440d8__0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h21c2c097__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h217d4d15__0) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24cba9c4__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h244a7236__0)))))))))))))))) 
                                               & (((0U 
                                                    == QvuTop__DOT__decode__DOT____VdfgTmp_hcf3c84e6__0) 
                                                   << 0xfU) 
                                                  | (((0U 
                                                       == QvuTop__DOT__decode__DOT____VdfgTmp_hcebf1440__0) 
                                                      << 0xeU) 
                                                     | (((0U 
                                                          == QvuTop__DOT__decode__DOT____VdfgTmp_h2a3df169__0) 
                                                         << 0xdU) 
                                                        | (((0U 
                                                             == QvuTop__DOT__decode__DOT____VdfgTmp_h25bc44f7__0) 
                                                            << 0xcU) 
                                                           | (((0U 
                                                                == QvuTop__DOT__decode__DOT____VdfgTmp_h2522f60c__0) 
                                                               << 0xbU) 
                                                              | (((0U 
                                                                   == QvuTop__DOT__decode__DOT____VdfgTmp_h24a56a82__0) 
                                                                  << 0xaU) 
                                                                 | (((0U 
                                                                      == QvuTop__DOT__decode__DOT____VdfgTmp_h2823db47__0) 
                                                                     << 9U) 
                                                                    | (((0U 
                                                                         == QvuTop__DOT__decode__DOT____VdfgTmp_h2bba2b99__0) 
                                                                        << 8U) 
                                                                       | (((0U 
                                                                            == QvuTop__DOT__decode__DOT____VdfgTmp_h2b2888ea__0) 
                                                                           << 7U) 
                                                                          | (((0U 
                                                                               == QvuTop__DOT__decode__DOT____VdfgTmp_h2aaab1d4__0) 
                                                                              << 6U) 
                                                                             | (((0U 
                                                                                == QvuTop__DOT__decode__DOT____VdfgTmp_h26293c25__0) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == QvuTop__DOT__decode__DOT____VdfgTmp_h21bf8883__0) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == QvuTop__DOT__decode__DOT____VdfgTmp_h217dfa70__0) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == QvuTop__DOT__decode__DOT____VdfgTmp_h24ca96e6__0) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == QvuTop__DOT__decode__DOT____VdfgTmp_h244c0703__0) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == QvuTop__DOT__decode__DOT____VdfgTmp_h27f16fb5__0)))))))))))))))));
    vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2babc25d__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i_7)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode__DOT____VdfgTmp_h2b2888ea__0));
    vlSelf->QvuTop__DOT____VdfgTmp_h60d0e577__0 = (
                                                   (0xeU 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_hd2b53c8a__0 = (
                                                   (0xdU 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_h3458467d__0 = (
                                                   (0xcU 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_hd84f4eef__0 = (
                                                   (0xbU 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_hdbc09056__0 = (
                                                   (0xaU 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_h657998f6__0 = (
                                                   (9U 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_h672aad8b__0 = (
                                                   (8U 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_h63b3fc32__0 = (
                                                   (6U 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_h5fdab54b__0 = (
                                                   (5U 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_h738293b2__0 = (
                                                   (4U 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT____VdfgTmp_hef4171a5__0 = (
                                                   (2U 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT__floatDecode__DOT__io_isNaN 
        = ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT___GEN) 
           & ((((~ (IData)(vlSelf->io_Isposit)) & (0U 
                                                   != 
                                                   (0x7fffffU 
                                                    & (IData)(vlSelf->io_float_i_15)))) 
               << 0xfU) | ((((~ (IData)(vlSelf->io_Isposit)) 
                             & (0U != (0x7fffffU & (IData)(vlSelf->io_float_i_14)))) 
                            << 0xeU) | ((((~ (IData)(vlSelf->io_Isposit)) 
                                          & (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->io_float_i_13)))) 
                                         << 0xdU) | 
                                        ((((~ (IData)(vlSelf->io_Isposit)) 
                                           & (0U != 
                                              (0x7fffffU 
                                               & (IData)(vlSelf->io_float_i_12)))) 
                                          << 0xcU) 
                                         | ((((~ (IData)(vlSelf->io_Isposit)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & (IData)(vlSelf->io_float_i_11)))) 
                                             << 0xbU) 
                                            | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & (IData)(vlSelf->io_float_i_10)))) 
                                                << 0xaU) 
                                               | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & (IData)(vlSelf->io_float_i_9)))) 
                                                   << 9U) 
                                                  | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                       & (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & (IData)(vlSelf->io_float_i_8)))) 
                                                      << 8U) 
                                                     | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                          & (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & (IData)(vlSelf->io_float_i_7)))) 
                                                         << 7U) 
                                                        | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(vlSelf->io_float_i_6)))) 
                                                            << 6U) 
                                                           | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(vlSelf->io_float_i_5)))) 
                                                               << 5U) 
                                                              | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & (IData)(vlSelf->io_float_i_4)))) 
                                                                  << 4U) 
                                                                 | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                                      & (0U 
                                                                         != 
                                                                         (0x7fffffU 
                                                                          & (IData)(vlSelf->io_float_i_3)))) 
                                                                     << 3U) 
                                                                    | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                                         & (0U 
                                                                            != 
                                                                            (0x7fffffU 
                                                                             & (IData)(vlSelf->io_float_i_2)))) 
                                                                        << 2U) 
                                                                       | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                                            & (0U 
                                                                               != 
                                                                               (0x7fffffU 
                                                                                & (IData)(vlSelf->io_float_i_1)))) 
                                                                           << 1U) 
                                                                          | ((~ (IData)(vlSelf->io_Isposit)) 
                                                                             & (0U 
                                                                                != 
                                                                                (0x7fffffU 
                                                                                & (IData)(vlSelf->io_float_i_0))))))))))))))))))));
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__17(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__17\n"); );
    // Body
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0U] 
        = (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0);
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[1U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0) 
            << 1U) | (IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0 
                              >> 0x20U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[2U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8ec3__0) 
            << 2U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0) 
                       >> 0x1fU) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0 
                                             >> 0x20U)) 
                                    << 1U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[3U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0) 
            << 3U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8ec3__0) 
                       >> 0x1eU) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8ec3__0 
                                             >> 0x20U)) 
                                    << 2U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[4U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde54723b__0) 
            << 4U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0) 
                       >> 0x1dU) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0 
                                             >> 0x20U)) 
                                    << 3U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[5U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0) 
            << 5U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde54723b__0) 
                       >> 0x1cU) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde54723b__0 
                                             >> 0x20U)) 
                                    << 4U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[6U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0) 
            << 6U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0) 
                       >> 0x1bU) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0 
                                             >> 0x20U)) 
                                    << 5U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[7U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0) 
            << 7U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0) 
                       >> 0x1aU) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0 
                                             >> 0x20U)) 
                                    << 6U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[8U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0) 
            << 8U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0) 
                       >> 0x19U) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0 
                                             >> 0x20U)) 
                                    << 7U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[9U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0) 
            << 9U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0) 
                       >> 0x18U) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0 
                                             >> 0x20U)) 
                                    << 8U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xaU] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210b92__0) 
            << 0xaU) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0) 
                         >> 0x17U) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0 
                                               >> 0x20U)) 
                                      << 9U)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xbU] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0) 
            << 0xbU) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210b92__0) 
                         >> 0x16U) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210b92__0 
                                               >> 0x20U)) 
                                      << 0xaU)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xcU] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eb5f8__0) 
            << 0xcU) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0) 
                         >> 0x15U) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0 
                                               >> 0x20U)) 
                                      << 0xbU)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xdU] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0) 
            << 0xdU) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eb5f8__0) 
                         >> 0x14U) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eb5f8__0 
                                               >> 0x20U)) 
                                      << 0xcU)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xeU] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0) 
            << 0xeU) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0) 
                         >> 0x13U) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0 
                                               >> 0x20U)) 
                                      << 0xdU)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xfU] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0) 
            << 0xfU) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0) 
                         >> 0x12U) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0 
                                               >> 0x20U)) 
                                      << 0xeU)));
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0x10U] 
        = (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0) 
            >> 0x11U) | ((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0 
                                  >> 0x20U)) << 0xfU));
}

VL_INLINE_OPT void VQvuTop___024root___nba_sequent__TOP__0(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin = 0;
    CData/*0:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData = 0;
    CData/*1:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__state;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__state = 0;
    VlWide<4>/*127:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram;
    VL_ZERO_W(128, __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram);
    IData/*19:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal = 0;
    VlWide<9>/*263:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax;
    VL_ZERO_W(264, __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax);
    VlWide<9>/*263:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin;
    VL_ZERO_W(264, __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin);
    CData/*7:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid = 0;
    CData/*2:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowPtr;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowPtr = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin = 0;
    CData/*0:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchHasData;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchHasData = 0;
    CData/*1:0*/ __Vdly__QvuTop__DOT__quantizeFP4__DOT__state;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__state = 0;
    // Body
    if (VL_UNLIKELY((1U & (((0U == (IData)(vlSelf->io_op)) 
                            & ((0U == (IData)(vlSelf->QvuTop__DOT__resetCounter)) 
                               | (IData)(vlSelf->io_reset_window))) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Quant stats: max=       127, min=8589934464, scale=         1, offset=         0\n");
    }
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__state = vlSelf->QvuTop__DOT__quantizeFP4__DOT__state;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchHasData 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowPtr 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid;
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[0U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[0U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[1U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[1U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[2U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[2U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[3U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[3U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[4U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[4U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[5U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[5U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[6U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[6U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[7U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[7U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[8U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[8U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[0U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[0U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[1U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[1U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[2U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[2U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[3U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[3U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[4U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[4U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[5U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[5U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[6U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[6U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[7U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[7U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[8U] 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[8U];
    __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin 
        = vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__state = vlSelf->QvuTop__DOT__quantizeInt4__DOT__state;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U];
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[1U];
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[2U];
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[3U];
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale;
    if (vlSelf->reset) {
        vlSelf->QvuTop__DOT__resetCounter = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[0U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[1U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[2U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[3U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[4U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[5U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[6U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[7U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[8U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[0U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[1U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[2U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[3U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[4U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[5U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[6U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[7U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[8U] = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowPtr = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax = 0ULL;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin = 0ULL;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale = 0x1000000ULL;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax = 0ULL;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin = 0x1ffffffffULL;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchHasData = 0U;
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__state = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax = 7ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin = 0x1fffffff8ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale = 1ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset = 0ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax = 0x1fffffff8ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin = 7ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__state = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal = 0U;
    } else {
        vlSelf->QvuTop__DOT__resetCounter = (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->QvuTop__DOT__resetCounter)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_15 
            = (0U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__state));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_17 
            = (((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                           vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[2U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[1U])) 
                                             >> 1U)))) 
                | ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0U]))))) 
                   & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)))) 
               | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_18 
            = ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[3U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[2U])) 
                                            >> 2U)))) 
               & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_19 
            = (1U & ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[4U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[3U])) 
                                                  >> 3U))))
                      ? (((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_18)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_17))
                      : ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_18) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_17))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_20 
            = ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[5U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[4U])) 
                                            >> 4U)))) 
               & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_21 
            = (1U & ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[6U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[5U])) 
                                                  >> 5U))))
                      ? (((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_20)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_19))
                      : ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_20) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_19))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_22 
            = ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[7U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[6U])) 
                                            >> 6U)))) 
               & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_23 
            = (1U & ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[8U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[7U])) 
                                                  >> 7U))))
                      ? (((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_22)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_21))
                      : ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_22) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_21))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_24 
            = ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[9U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[8U])) 
                                            >> 8U)))) 
               & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_25 
            = (1U & ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xaU])) 
                                                << 0x17U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[9U])) 
                                                  >> 9U))))
                      ? (((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_24)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_23))
                      : ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_24) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_23))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_26 
            = ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xbU])) 
                                          << 0x16U) 
                                         | ((QData)((IData)(
                                                            vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xaU])) 
                                            >> 0xaU)))) 
               & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_27 
            = (1U & ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xcU])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xbU])) 
                                                  >> 0xbU))))
                      ? (((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_26)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_25))
                      : ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_26) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_25))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_28 
            = ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xdU])) 
                                          << 0x14U) 
                                         | ((QData)((IData)(
                                                            vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xcU])) 
                                            >> 0xcU)))) 
               & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_29 
            = (1U & ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xeU])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xdU])) 
                                                  >> 0xdU))))
                      ? (((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_28)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_27))
                      : ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_28) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_27))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_30 
            = ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xfU])) 
                                          << 0x12U) 
                                         | ((QData)((IData)(
                                                            vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xeU])) 
                                            >> 0xeU)))) 
               & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_16 
            = (1U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__state));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31 
            = (2U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__state));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_32 
            = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31) 
                & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
               & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33 
            = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_15) 
               | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_16));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_34 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33) 
                     | (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_32))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_35 
            = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31) 
                & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
               & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_36 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33) 
                     | (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_35))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_37 
            = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31) 
                & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
               & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_38 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33) 
                     | (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_37))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_39 
            = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31) 
                & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
               & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_40 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33) 
                     | (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_39))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_41 
            = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31) 
                & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
               & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_42 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33) 
                     | (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_41))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_43 
            = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31) 
                & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
               & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_44 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33) 
                     | (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_43))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_45 
            = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31) 
                & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
               & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_46 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33) 
                     | (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_45))));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_47 
            = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31) 
                & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
               & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr)));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_48 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33) 
                     | (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_47))));
        if ((1U & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_34)))) {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[0U] 
                = (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax);
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[1U] 
                = ((0xfffffffeU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[1U]) 
                   | (IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax 
                              >> 0x20U)));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[0U] 
                = (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin);
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[1U] 
                = ((0xfffffffeU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[1U]) 
                   | (IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin 
                              >> 0x20U)));
        }
        if ((1U & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_36)))) {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[1U] 
                = ((1U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[1U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                      << 1U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[2U] 
                = ((0xfffffffcU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[2U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                       >> 0x1fU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax 
                                             >> 0x20U)) 
                                    << 1U)));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[1U] 
                = ((1U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[1U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                      << 1U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[2U] 
                = ((0xfffffffcU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[2U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                       >> 0x1fU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin 
                                             >> 0x20U)) 
                                    << 1U)));
        }
        if ((1U & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_38)))) {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[2U] 
                = ((3U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[2U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                      << 2U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[3U] 
                = ((0xfffffff8U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[3U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                       >> 0x1eU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax 
                                             >> 0x20U)) 
                                    << 2U)));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[2U] 
                = ((3U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[2U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                      << 2U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[3U] 
                = ((0xfffffff8U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[3U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                       >> 0x1eU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin 
                                             >> 0x20U)) 
                                    << 2U)));
        }
        if ((1U & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_40)))) {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[3U] 
                = ((7U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[3U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                      << 3U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[4U] 
                = ((0xfffffff0U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[4U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                       >> 0x1dU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax 
                                             >> 0x20U)) 
                                    << 3U)));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[3U] 
                = ((7U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[3U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                      << 3U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[4U] 
                = ((0xfffffff0U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[4U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                       >> 0x1dU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin 
                                             >> 0x20U)) 
                                    << 3U)));
        }
        if ((1U & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_42)))) {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[4U] 
                = ((0xfU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[4U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                      << 4U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[5U] 
                = ((0xffffffe0U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[5U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                       >> 0x1cU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax 
                                             >> 0x20U)) 
                                    << 4U)));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[4U] 
                = ((0xfU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[4U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                      << 4U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[5U] 
                = ((0xffffffe0U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[5U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                       >> 0x1cU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin 
                                             >> 0x20U)) 
                                    << 4U)));
        }
        if ((1U & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_44)))) {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[5U] 
                = ((0x1fU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[5U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                      << 5U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[6U] 
                = ((0xffffffc0U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[6U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                       >> 0x1bU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax 
                                             >> 0x20U)) 
                                    << 5U)));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[5U] 
                = ((0x1fU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[5U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                      << 5U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[6U] 
                = ((0xffffffc0U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[6U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                       >> 0x1bU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin 
                                             >> 0x20U)) 
                                    << 5U)));
        }
        if ((1U & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_46)))) {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[6U] 
                = ((0x3fU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[6U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                      << 6U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[7U] 
                = ((0xffffff80U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[7U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                       >> 0x1aU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax 
                                             >> 0x20U)) 
                                    << 6U)));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[6U] 
                = ((0x3fU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[6U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                      << 6U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[7U] 
                = ((0xffffff80U & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[7U]) 
                   | (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                       >> 0x1aU) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin 
                                             >> 0x20U)) 
                                    << 6U)));
        }
        if ((1U & (~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_48)))) {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[7U] 
                = ((0x7fU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[7U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                      << 7U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[8U] 
                = (0xffU & (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax) 
                             >> 0x19U) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax 
                                                   >> 0x20U)) 
                                          << 7U)));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[7U] 
                = ((0x7fU & __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[7U]) 
                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                      << 7U));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[8U] 
                = (0xffU & (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin) 
                             >> 0x19U) | ((IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin 
                                                   >> 0x20U)) 
                                          << 7U)));
        }
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid 
            = ((0xfeU & (IData)(__Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid)) 
               | (1U & (((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_32)) 
                        | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid))));
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid 
            = ((0xfdU & (IData)(__Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid)) 
               | (2U & ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_35)) 
                         << 1U) | (0xfffffffeU & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid)))));
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid 
            = ((0xfbU & (IData)(__Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid)) 
               | (4U & ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_37)) 
                         << 2U) | (0xfffffffcU & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid)))));
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid 
            = ((0xf7U & (IData)(__Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid)) 
               | (8U & ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_39)) 
                         << 3U) | (0xfffffff8U & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid)))));
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid 
            = ((0xefU & (IData)(__Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid)) 
               | (0x10U & ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33)) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_41)) 
                            << 4U) | (0xfffffff0U & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid)))));
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid 
            = ((0xdfU & (IData)(__Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid)) 
               | (0x20U & ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33)) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_43)) 
                            << 5U) | (0xffffffe0U & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid)))));
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid 
            = ((0xbfU & (IData)(__Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid)) 
               | (0x40U & ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33)) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_45)) 
                            << 6U) | (0xffffffc0U & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid)))));
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid 
            = ((0x7fU & (IData)(__Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid)) 
               | (0x80U & ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33)) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_47)) 
                            << 7U) | (0xffffff80U & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid)))));
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33) 
                      | (~ ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31) 
                            & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData))))))) {
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___windowPtr_T_2 
                = (7U & ((IData)(1U) + (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr)));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_49 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                   & ((0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[0U])))) 
                      > vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_leftMax 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_49)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[0U])))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_50 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 1U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[2U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[1U])) 
                                                    >> 1U))) 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowPtr 
                = (7U & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___windowPtr_T_2));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_rightMax 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_50)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[2U])) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[2U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[1U])) 
                                               >> 1U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_leftMax_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_leftMax 
                   > vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_leftMax_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_leftMax
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_51 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 2U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[3U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[2U])) 
                                                    >> 2U))) 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_leftMax 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_51)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[3U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[3U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[2U])) 
                                               >> 2U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_52 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 3U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[4U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[3U])) 
                                                    >> 3U))) 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_rightMax 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_52)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[4U])) 
                                          << 0x3dU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[4U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[3U])) 
                                               >> 3U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_rightMax_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_leftMax 
                   > vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_rightMax_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_leftMax
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax 
                   > vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_53 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 4U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[5U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[4U])) 
                                                    >> 4U))) 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_leftMax 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_53)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[5U])) 
                                          << 0x3cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[5U])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[4U])) 
                                               >> 4U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_54 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 5U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[6U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[5U])) 
                                                    >> 5U))) 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_rightMax 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_54)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[6U])) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[6U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[5U])) 
                                               >> 5U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_leftMax_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_leftMax 
                   > vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_leftMax_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_leftMax
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_55 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 6U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[7U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[6U])) 
                                                    >> 6U))) 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_leftMax 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_55)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[7U])) 
                                          << 0x3aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[7U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[6U])) 
                                               >> 6U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_56 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 7U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[8U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[7U])) 
                                                    >> 7U))) 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_rightMax 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_56)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[8U])) 
                                          << 0x39U) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[8U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[7U])) 
                                               >> 7U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_rightMax_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_leftMax 
                   > vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_rightMax_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_leftMax
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax 
                   > vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax 
                   > vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax);
            if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_T) {
                vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax 
                    = vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax;
                if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_T) {
                    if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_leftMax_T) {
                        if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_49) {
                            __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax 
                                = (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[0U]))));
                        }
                    } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_50) {
                        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax 
                            = (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[2U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[1U])) 
                                                    >> 1U)));
                    }
                } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_rightMax_T) {
                    if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_51) {
                        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax 
                            = (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[3U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[2U])) 
                                                    >> 2U)));
                    }
                } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_52) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax 
                        = (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[4U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[3U])) 
                                                >> 3U)));
                }
            } else {
                vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax 
                    = vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax;
                if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_T) {
                    if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_leftMax_T) {
                        if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_53) {
                            __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax 
                                = (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[4U])) 
                                                  >> 4U)));
                        }
                    } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_54) {
                        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax 
                            = (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[6U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[5U])) 
                                                    >> 5U)));
                    }
                } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_rightMax_T) {
                    if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_55) {
                        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax 
                            = (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[7U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[6U])) 
                                                    >> 6U)));
                    }
                } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_56) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax 
                        = (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[8U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[7U])) 
                                                >> 7U)));
                }
            }
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_57 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                   & ((0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[0U])))) 
                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_leftMin 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_57)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[0U])))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_58 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 1U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[2U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[1U])) 
                                                    >> 1U))) 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_rightMin 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_58)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[2U])) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[2U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[1U])) 
                                               >> 1U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_leftMin_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_leftMin 
                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_leftMin_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_leftMin
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_59 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 2U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[3U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[2U])) 
                                                    >> 2U))) 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_leftMin 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_59)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[3U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[3U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[2U])) 
                                               >> 2U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_60 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 3U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[4U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[3U])) 
                                                    >> 3U))) 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_rightMin 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_60)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[4U])) 
                                          << 0x3dU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[4U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[3U])) 
                                               >> 3U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_rightMin_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_leftMin 
                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_rightMin_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_leftMin
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin 
                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_61 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 4U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[5U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[4U])) 
                                                    >> 4U))) 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_leftMin 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_61)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[5U])) 
                                          << 0x3cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[5U])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[4U])) 
                                               >> 4U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_62 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 5U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[6U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[5U])) 
                                                    >> 5U))) 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_rightMin 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_62)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[6U])) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[6U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[5U])) 
                                               >> 5U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_leftMin_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_leftMin 
                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_leftMin_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_leftMin
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_63 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 6U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[7U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[6U])) 
                                                    >> 6U))) 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_leftMin 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_63)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[7U])) 
                                          << 0x3aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[7U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[6U])) 
                                               >> 6U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_64 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid) 
                    >> 7U) & ((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[8U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[7U])) 
                                                    >> 7U))) 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_rightMin 
                = (0x1ffffffffULL & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_64)
                                      ? (((QData)((IData)(
                                                          vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[8U])) 
                                          << 0x39U) 
                                         | (((QData)((IData)(
                                                             vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[8U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[7U])) 
                                               >> 7U)))
                                      : vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_rightMin_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_leftMin 
                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_rightMin_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_leftMin
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin 
                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_T)
                    ? vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin
                    : vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_T 
                = (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin 
                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin);
            if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_T) {
                vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin 
                    = vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin;
                if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_T) {
                    if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_leftMin_T) {
                        if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_57) {
                            __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin 
                                = (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[0U]))));
                        }
                    } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_58) {
                        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin 
                            = (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[2U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[1U])) 
                                                    >> 1U)));
                    }
                } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_rightMin_T) {
                    if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_59) {
                        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin 
                            = (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[3U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[2U])) 
                                                    >> 2U)));
                    }
                } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_60) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin 
                        = (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[4U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[3U])) 
                                                >> 3U)));
                }
            } else {
                vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin 
                    = vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin;
                if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_T) {
                    if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_leftMin_T) {
                        if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_61) {
                            __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin 
                                = (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[5U])) 
                                     << 0x1cU) | ((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[4U])) 
                                                  >> 4U)));
                        }
                    } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_62) {
                        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin 
                            = (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[6U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[5U])) 
                                                    >> 5U)));
                    }
                } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_rightMin_T) {
                    if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_63) {
                        __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin 
                            = (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[7U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[6U])) 
                                                    >> 6U)));
                    }
                } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_64) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin 
                        = (0x1ffffffffULL & (((QData)((IData)(
                                                              vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[8U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[7U])) 
                                                >> 7U)));
                }
            }
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dataRange 
                = ((vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax 
                    > vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin)
                    ? (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax 
                                         - vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin))
                    : 1ULL);
            vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale 
                = ((0x3000000ULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dataRange)
                    ? (0x1ffffffffULL & VL_DIV_QQQ(33, vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dataRange, 0x3000000ULL))
                    : 0x1000000ULL);
        }
        if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_15) {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax = 0ULL;
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin = 0x1ffffffffULL;
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__state = 1U;
        } else if (vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_16) {
            if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                           vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0x10U])) 
                                           << 0x11U) 
                                          | ((QData)((IData)(
                                                             vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xfU])) 
                                             >> 0xfU))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_14 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_14;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_14 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_14;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xfU])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xeU])) 
                                                    >> 0xeU))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_13 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_13;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_13 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_13;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xeU])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xdU])) 
                                                    >> 0xdU))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_12 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_12;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_12 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_12;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xdU])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xcU])) 
                                                    >> 0xcU))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_11 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_11;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_11 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_11;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xcU])) 
                                                  << 0x15U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xbU])) 
                                                    >> 0xbU))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_10 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_10;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_10 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_10;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xbU])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xaU])) 
                                                    >> 0xaU))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_9 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_9;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_9 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_9;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xaU])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[9U])) 
                                                    >> 9U))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_8 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_8;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_8 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_8;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[9U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[8U])) 
                                                    >> 8U))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_7 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_7;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_7 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_7;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[8U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[7U])) 
                                                    >> 7U))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_6 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_6;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_6 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_6;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[7U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[6U])) 
                                                    >> 6U))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_5 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_5;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_5 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_5;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[6U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[5U])) 
                                                    >> 5U))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_4 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_4;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_4 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_4;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[5U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[4U])) 
                                                    >> 4U))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_3 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_3;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_3 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_3;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[4U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[3U])) 
                                                    >> 3U))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_2 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_2;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_2 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_2;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[3U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[2U])) 
                                                    >> 2U))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_1 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_1;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_1 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_1;
                }
            } else if ((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[2U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[1U])) 
                                                    >> 1U))))) {
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_0 
                              > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_0;
                }
                if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                           | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_0 
                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_0;
                }
            } else {
                if (((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0U]))))) 
                     & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                        | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN 
                           > vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN;
                }
                if (((0U != (0x1ffffffffULL & (((QData)((IData)(
                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0U]))))) 
                     & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                        | (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN 
                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin)))) {
                    __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin 
                        = vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN;
                }
            }
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__state = 2U;
        } else {
            __Vdly__QvuTop__DOT__quantizeFP4__DOT__state 
                = (3U & (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31))));
        }
        __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchHasData 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_15)) 
                     & ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_16)
                         ? ((0U != (0x1ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0x10U])) 
                                        << 0x11U) | 
                                       ((QData)((IData)(
                                                        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i[0xfU])) 
                                        >> 0xfU))))
                             ? (((~ (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData)) 
                                 | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_30)) 
                                | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_29))
                             : ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_30) 
                                | (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_29)))
                         : (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_53 
            = (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_55 
            = (1U & (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                      | ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                         & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)))) 
                     | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_56 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                     & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_57 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)
                      ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_56) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_55))
                      : (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_56)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_55))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_58 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                     & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_59 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)
                      ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_58) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_57))
                      : (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_58)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_57))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_60 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                     & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_61 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)
                      ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_60) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_59))
                      : (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_60)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_59))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_62 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                     & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_63 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)
                      ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_62) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_61))
                      : (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_62)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_61))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_64 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                     & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_65 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)
                      ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_64) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_63))
                      : (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_64)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_63))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_66 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                     & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_67 
            = (1U & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)
                      ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_66) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_65))
                      : (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_66)) 
                         | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_65))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_68 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                     & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_69 
            = (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_70 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold 
            = (0x7fffffU & VL_DIV_III(23, (0x7fffffU 
                                           & ((IData)(5U) 
                                              * vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_70)), (IData)(0x64U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T 
            = (0x7fffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_70 
                            - vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___dataRange_T 
            = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                 - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_16 
            = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___dataRange_T)
                                          ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___dataRange_T)
                                          : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___dataRange_T)) 
                                >> 3U));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_54 
            = (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_1_T 
            = (0xfffffU & ((0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                           + (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                              >> 0x10U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_2_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_1_T 
                           + (0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[1U])));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_3_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_2_T 
                           + (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                              >> 0x10U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_4_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_3_T 
                           + (0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[2U])));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_5_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_4_T 
                           + (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                              >> 0x10U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_6_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_5_T 
                           + (0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[3U])));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_71 
            = (0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U]);
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_72 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_1_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_73 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_2_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_74 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_3_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_75 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_4_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_76 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_5_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_77 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_6_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_78 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_6_T 
                           + (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                              >> 0x10U)));
        if ((0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal)) {
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin 
                                     + ((QData)((IData)(
                                                        (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_78 
                                                           > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                          & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_77 
                                                             <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                          ? 7U
                                                          : 
                                                         (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_77 
                                                            > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                           & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_76 
                                                              <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                           ? 6U
                                                           : 
                                                          (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_76 
                                                             > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                            & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_75 
                                                               <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                            ? 5U
                                                            : 
                                                           (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_75 
                                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                             & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_74 
                                                                <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                             ? 4U
                                                             : 
                                                            (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_74 
                                                               > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                              & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_73 
                                                                 <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                              ? 3U
                                                              : 
                                                             (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_73 
                                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                               & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_72 
                                                                  <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                               ? 2U
                                                               : 
                                                              ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_72 
                                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                               & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_71 
                                                                  <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold)))))))))) 
                                        * vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_16)));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin 
                                     + ((QData)((IData)(
                                                        (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_77 
                                                           < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                          & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_78 
                                                             >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                          ? 6U
                                                          : 
                                                         (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_76 
                                                            < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                           & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_77 
                                                              >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                           ? 5U
                                                           : 
                                                          (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_75 
                                                             < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                            & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_76 
                                                               >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                            ? 4U
                                                            : 
                                                           (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_74 
                                                              < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                             & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_75 
                                                                >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                             ? 3U
                                                             : 
                                                            (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_73 
                                                               < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                              & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_74 
                                                                 >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                              ? 2U
                                                              : 
                                                             (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_72 
                                                                < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                               & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_73 
                                                                  >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                               ? 1U
                                                               : 
                                                              (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_71 
                                                                 < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                                & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_72 
                                                                   >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                                ? 0U
                                                                : 7U))))))))) 
                                        * vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_16)));
        } else {
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin 
                = (0x1ffffffffULL & vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax 
                = (0x1ffffffffULL & vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax);
        }
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_79 
            = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_53) 
               | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_54));
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_79) 
                      | (~ (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_69) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                            & VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax, vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax))))))) {
            __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax 
                = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax;
        }
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_79) 
                      | (~ (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_69) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                            & VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin, vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin))))))) {
            __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin 
                = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin;
        }
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_79) 
                      | (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_69) 
                            & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))))))) {
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_8 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_15 
                = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_8)
                                      ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_8)
                                      : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_8));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_80 
                = (0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_15);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax 
                                     + vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin));
            if (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_80) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale = 1ULL;
                vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset 
                    = (0x1ffffffffULL & vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin);
            } else {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale 
                    = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                                   (0x1ffffffffULL 
                                                    & (0xeULL 
                                                       + vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_15)), 0xfULL));
                vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset 
                    = (0x1ffffffffULL & ((((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                                                                       >> 0x20U))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                                                             >> 1U)))) 
                                         - (0x1ffffffffULL 
                                            * vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)));
            }
        }
        if (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_53) {
            __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax = 0x1fffffff8ULL;
            __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin = 7ULL;
        } else if (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_54) {
            if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                       & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1;
            }
            if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                       & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1;
            }
        }
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_53)) 
                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_54)
                         ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)
                             ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_68) 
                                | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_67))
                             : (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_68)) 
                                | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_67)))
                         : (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__state 
            = (3U & (0x39U >> (7U & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state) 
                                     << 1U))));
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_53) 
                      | (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_54)))))) {
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_11 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_9 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_22 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_18 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_33 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_27 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_44 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_36 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_55 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_45 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_66 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_54 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_77 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_63 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_88 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_72 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_99 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_81 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_110 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_90 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_121 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_99 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_132 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_108 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_143 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_117 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_154 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_126 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_165 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_165)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_165)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_165)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_135 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_15 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_135)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_135)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_135)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_15)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_15))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_11)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_11)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_11)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_9)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_9)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_9)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_22)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_22)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_22)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_18)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_18)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_18)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_33)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_33)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_33)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_27)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_27)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_27)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_44)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_44)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_44)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_4 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_36)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_36)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_36)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_4)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_4))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_55)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_55)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_55)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_5 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_45)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_45)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_45)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_5)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_5))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_66)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_66)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_66)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_6 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_54)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_54)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_54)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_6)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_6))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_77)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_77)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_77)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_7 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_63)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_63)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_63)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_7)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_7))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_88)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_88)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_88)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_8 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_72)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_72)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_72)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_8)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_8))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_99)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_99)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_99)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_9 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_81)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_81)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_81)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_9)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_9))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_110)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_110)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_110)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_10 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_90)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_90)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_90)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_10)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_10))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_121)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_121)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_121)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_11 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_99)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_99)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_99)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_11)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_11))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_132)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_132)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_132)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_12 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_108)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_108)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_108)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_12)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_12))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_143)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_143)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_143)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_13 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_117)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_117)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_117)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_13)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_13))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_154)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_154)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_154)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_14 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_126)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_126)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_126)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_14)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_14))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15) 
                                                    << 4U))))));
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15)) 
                 & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15)) 
                 & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2) 
                          << 0x10U));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15)) 
                 & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15)) 
                 & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2) 
                          << 0x10U));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15)) 
                 & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15)) 
                 & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2) 
                          << 0x10U));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15)) 
                 & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15)) 
                 & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2) 
                          << 0x10U));
            }
            if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96)) 
                 & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            }
        }
    }
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[0U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[0U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[1U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[1U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[2U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[2U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[3U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[3U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[4U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[4U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[5U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[5U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[6U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[6U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[7U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[7U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax[8U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMax[8U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[0U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[0U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[1U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[1U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[2U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[2U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[3U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[3U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[4U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[4U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[5U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[5U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[6U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[6U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[7U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[7U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin[8U] 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowMin[8U];
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowValid;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__windowPtr;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMax;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMax;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchMin;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__batchHasData;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__state = __Vdly__QvuTop__DOT__quantizeFP4__DOT__state;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin 
        = __Vdly__QvuTop__DOT__quantizeFP4__DOT__globalMin;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__state = __Vdly__QvuTop__DOT__quantizeInt4__DOT__state;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U];
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U];
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U];
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U];
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50 
        = (((QData)((IData)((7U & (- (IData)((1U & (IData)(
                                                           (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                                            >> 0x20U)))))))) 
            << 0x22U) | ((QData)((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                          >> 1U))) 
                         << 2U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51 
        = (((QData)((IData)((1U & (IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                         >> 1U))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0 
        = (0x1fffffffffULL & VL_DIVS_QQQ(37, (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (1ULL 
                                                                           & ((6ULL 
                                                                               * 
                                                                               (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                                                                >> 0x20U)))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                                                                >> 1U))))) 
                                                                              >> 0x23U)))))) 
                                               << 0x24U) 
                                              | (0xfffffffffULL 
                                                 & (6ULL 
                                                    * 
                                                    (((QData)((IData)(
                                                                      (0xfU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                                                                >> 0x20U)))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                                                        >> 1U))))))), 5ULL));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48 
        = (((QData)((IData)((1U & (IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x21U) | vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale);
}

VL_INLINE_OPT void VQvuTop___024root___nba_sequent__TOP__1(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109 = 0;
    CData/*3:0*/ __VdfgTmp_h266d6a75__0;
    __VdfgTmp_h266d6a75__0 = 0;
    CData/*3:0*/ __VdfgTmp_haf5bb8dc__0;
    __VdfgTmp_haf5bb8dc__0 = 0;
    CData/*3:0*/ __VdfgTmp_h4cc533e1__0;
    __VdfgTmp_h4cc533e1__0 = 0;
    CData/*3:0*/ __VdfgTmp_hc3f1f329__0;
    __VdfgTmp_hc3f1f329__0 = 0;
    CData/*3:0*/ __VdfgTmp_h8a7e261f__0;
    __VdfgTmp_h8a7e261f__0 = 0;
    CData/*3:0*/ __VdfgTmp_h14aa63ed__0;
    __VdfgTmp_h14aa63ed__0 = 0;
    CData/*3:0*/ __VdfgTmp_h8555aa89__0;
    __VdfgTmp_h8555aa89__0 = 0;
    CData/*3:0*/ __VdfgTmp_hbbc8c52e__0;
    __VdfgTmp_hbbc8c52e__0 = 0;
    CData/*3:0*/ __VdfgTmp_h4164099a__0;
    __VdfgTmp_h4164099a__0 = 0;
    CData/*3:0*/ __VdfgTmp_hef50fc5e__0;
    __VdfgTmp_hef50fc5e__0 = 0;
    CData/*3:0*/ __VdfgTmp_h8faaaf4d__0;
    __VdfgTmp_h8faaaf4d__0 = 0;
    CData/*3:0*/ __VdfgTmp_hfc4e52b7__0;
    __VdfgTmp_hfc4e52b7__0 = 0;
    CData/*3:0*/ __VdfgTmp_h685a7541__0;
    __VdfgTmp_h685a7541__0 = 0;
    CData/*3:0*/ __VdfgTmp_h820a2292__0;
    __VdfgTmp_h820a2292__0 = 0;
    CData/*3:0*/ __VdfgTmp_h57d15536__0;
    __VdfgTmp_h57d15536__0 = 0;
    // Body
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_14 
                             - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_0 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_1 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_2 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_3 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_4 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_5 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_7 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_8 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_9 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_10 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_11 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_12 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_13 
                             - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_6 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    if ((0U != (IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale 
                        >> 1U)))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53);
    }
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7 
                                                                >> 0x15U))))))))));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15)) 
                             >> 1U));
    __VdfgTmp_h266d6a75__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdbc354e5__0)
                               ? ((((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                    & ((0x27fffffULL 
                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                       | ((0x1bfffffULL 
                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                          | ((0x13fffffULL 
                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                             | ((0xdfffffULL 
                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                                | ((0x9fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                                   | (IData)(
                                                             ((0ULL 
                                                               != 
                                                               (0x1ffe00000ULL 
                                                                & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)) 
                                                              | (0x5fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs))))))))) 
                                   << 3U) | ((0x27fffffULL 
                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                              ? 7U : 
                                             ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex)))))))))
                               : 0U);
    __VdfgTmp_haf5bb8dc__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdee4f6f7__0)
                               ? ((0xfffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   << 2U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1)))))))))
                               : 0U);
    __VdfgTmp_h4cc533e1__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0)
                               ? ((0xfffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   << 1U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2)))))))))
                               : 0U);
    __VdfgTmp_hc3f1f329__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd03ac44__0)
                               ? ((0xfffffff8U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3)))))))))
                               : 0U);
    __VdfgTmp_h8a7e261f__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0)
                               ? ((0x7ffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   >> 1U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4)))))))))
                               : 0U);
    __VdfgTmp_h14aa63ed__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd80e3daa__0)
                               ? ((0x3ffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   >> 2U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5)))))))))
                               : 0U);
    __VdfgTmp_h8555aa89__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37932ea5__0)
                               ? ((0x1ffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   >> 3U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6)))))))))
                               : 0U);
    __VdfgTmp_h4164099a__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3b636de0__0)
                               ? ((0x7fffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  >> 5U) 
                                                 & (((0x27fffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                     | ((0x1bfffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                        | ((0x13fffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                           | ((0xdfffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                              | ((0x9fffffULL 
                                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                                 | (IData)(
                                                                           ((0ULL 
                                                                             != 
                                                                             (0x1ffe00000ULL 
                                                                              & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)) 
                                                                            | (0x5fffffULL 
                                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)))))))) 
                                                    << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8)))))))))
                               : 0U);
    __VdfgTmp_hef50fc5e__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3af5d97e__0)
                               ? ((0x3fffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  >> 6U) 
                                                 & (((0x27fffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                     | ((0x1bfffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                        | ((0x13fffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                           | ((0xdfffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                              | ((0x9fffffULL 
                                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                                 | (IData)(
                                                                           ((0ULL 
                                                                             != 
                                                                             (0x1ffe00000ULL 
                                                                              & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)) 
                                                                            | (0x5fffffULL 
                                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)))))))) 
                                                    << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9)))))))))
                               : 0U);
    __VdfgTmp_h8faaaf4d__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0)
                               ? ((0x1fffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  >> 7U) 
                                                 & (((0x27fffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                     | ((0x1bfffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                        | ((0x13fffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                           | ((0xdfffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                              | ((0x9fffffULL 
                                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                                 | (IData)(
                                                                           ((0ULL 
                                                                             != 
                                                                             (0x1ffe00000ULL 
                                                                              & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)) 
                                                                            | (0x5fffffULL 
                                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)))))))) 
                                                    << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10)))))))))
                               : 0U);
    __VdfgTmp_hfc4e52b7__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd91def4b__0)
                               ? ((0xfffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                 >> 8U) 
                                                & (((0x27fffffULL 
                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                    | ((0x1bfffffULL 
                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                       | ((0x13fffffULL 
                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                          | ((0xdfffffULL 
                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                             | ((0x9fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                                | (IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x1ffe00000ULL 
                                                                             & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)) 
                                                                           | (0x5fffffULL 
                                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)))))))) 
                                                   << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11)))))))))
                               : 0U);
    __VdfgTmp_h685a7541__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0)
                               ? ((0x7ffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                 >> 9U) 
                                                & (((0x27fffffULL 
                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                    | ((0x1bfffffULL 
                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                       | ((0x13fffffULL 
                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                          | ((0xdfffffULL 
                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                             | ((0x9fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                                | (IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x1ffe00000ULL 
                                                                             & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)) 
                                                                           | (0x5fffffULL 
                                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)))))))) 
                                                   << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12)))))))))
                               : 0U);
    __VdfgTmp_h820a2292__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h34eabf7b__0)
                               ? ((0x3ffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                 >> 0xaU) 
                                                & (((0x27fffffULL 
                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                    | ((0x1bfffffULL 
                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                       | ((0x13fffffULL 
                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                          | ((0xdfffffULL 
                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                             | ((0x9fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                                | (IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x1ffe00000ULL 
                                                                             & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)) 
                                                                           | (0x5fffffULL 
                                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)))))))) 
                                                   << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13)))))))))
                               : 0U);
    __VdfgTmp_h57d15536__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3bf0dae__0)
                               ? ((0x1ffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                 >> 0xbU) 
                                                & (((0x27fffffULL 
                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                    | ((0x1bfffffULL 
                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                       | ((0x13fffffULL 
                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                          | ((0xdfffffULL 
                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                             | ((0x9fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                                | (IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x1ffe00000ULL 
                                                                             & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)) 
                                                                           | (0x5fffffULL 
                                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)))))))) 
                                                   << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14)))))))))
                               : 0U);
    __VdfgTmp_hbbc8c52e__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37f6fbe9__0)
                               ? ((0xffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  >> 4U) 
                                                 & (((0x27fffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                     | ((0x1bfffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                        | ((0x13fffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                           | ((0xdfffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                              | ((0x9fffffULL 
                                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                                 | (IData)(
                                                                           ((0ULL 
                                                                             != 
                                                                             (0x1ffe00000ULL 
                                                                              & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)) 
                                                                            | (0x5fffffULL 
                                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)))))))) 
                                                    << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7)))))))))
                               : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515);
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP4__io_fp4_o 
        = (((QData)((IData)(((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3016326__0)
                              ? ((0xffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                               >> 0xcU) 
                                              & (((0x27fffffULL 
                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                  | ((0x1bfffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                     | ((0x13fffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                        | ((0xdfffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                           | ((0x9fffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                              | (IData)(
                                                                        ((0ULL 
                                                                          != 
                                                                          (0x1ffe00000ULL 
                                                                           & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)) 
                                                                         | (0x5fffffULL 
                                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)))))))) 
                                                 << 3U))) 
                                 | ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                                     ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                              ? 6U : 
                                             ((5U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                               ? 5U
                                               : ((4U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                                     ? 2U
                                                     : 
                                                    (1U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15)))))))))
                              : 0U))) << 0x3cU) | (
                                                   ((QData)((IData)(__VdfgTmp_h57d15536__0)) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(__VdfgTmp_h820a2292__0)) 
                                                       << 0x34U) 
                                                      | (((QData)((IData)(__VdfgTmp_h685a7541__0)) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(__VdfgTmp_hfc4e52b7__0)) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(__VdfgTmp_h8faaaf4d__0)) 
                                                                << 0x28U) 
                                                               | (((QData)((IData)(__VdfgTmp_hef50fc5e__0)) 
                                                                   << 0x24U) 
                                                                  | (((QData)((IData)(__VdfgTmp_h4164099a__0)) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(__VdfgTmp_hbbc8c52e__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(__VdfgTmp_h8555aa89__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(__VdfgTmp_h14aa63ed__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(__VdfgTmp_h8a7e261f__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(__VdfgTmp_hc3f1f329__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(__VdfgTmp_h4cc533e1__0) 
                                                                                << 8U) 
                                                                                | (((IData)(__VdfgTmp_haf5bb8dc__0) 
                                                                                << 4U) 
                                                                                | (IData)(__VdfgTmp_h266d6a75__0))))))))))))))))));
    if (vlSelf->QvuTop__DOT___GEN_6) {
        vlSelf->io_float_o_0 = 0ULL;
        vlSelf->io_float_o_1 = 0ULL;
        vlSelf->io_float_o_2 = 0ULL;
        vlSelf->io_float_o_3 = 0ULL;
        vlSelf->io_float_o_4 = 0ULL;
        vlSelf->io_float_o_5 = 0ULL;
        vlSelf->io_float_o_6 = 0ULL;
        vlSelf->io_float_o_8 = 0ULL;
        vlSelf->io_float_o_9 = 0ULL;
        vlSelf->io_float_o_10 = 0ULL;
        vlSelf->io_float_o_11 = 0ULL;
        vlSelf->io_float_o_12 = 0ULL;
        vlSelf->io_float_o_13 = 0ULL;
        vlSelf->io_float_o_14 = 0ULL;
        vlSelf->io_float_o_7 = 0ULL;
        vlSelf->io_float_o_15 = 0ULL;
    } else if ((2U == (IData)(vlSelf->io_op))) {
        vlSelf->io_float_o_0 = ((0U != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                                 ? (QData)((IData)(vlSelf->__VdfgTmp_hc6e18ff1__0))
                                 : 0ULL);
        vlSelf->io_float_o_1 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xeU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_hd12e3618__0))))
                                 : 0ULL);
        vlSelf->io_float_o_2 = ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xdU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h15c5203c__0))))
                                 : 0ULL);
        vlSelf->io_float_o_3 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xcU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h1e6be8f2__0))))
                                 : 0ULL);
        vlSelf->io_float_o_4 = ((4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xbU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h29201396__0))))
                                 : 0ULL);
        vlSelf->io_float_o_5 = ((5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xaU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h1fa020bc__0))))
                                 : 0ULL);
        vlSelf->io_float_o_6 = ((6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 9U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h3f6e3113__0))))
                                 : 0ULL);
        vlSelf->io_float_o_8 = ((8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 7U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_hbc36f83b__0))))
                                 : 0ULL);
        vlSelf->io_float_o_9 = ((9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 6U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_hfbb06ac0__0))))
                                 : 0ULL);
        vlSelf->io_float_o_10 = ((0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 5U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_hfbcbb255__0))))
                                  : 0ULL);
        vlSelf->io_float_o_11 = ((0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 4U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h0609fa5a__0))))
                                  : 0ULL);
        vlSelf->io_float_o_12 = ((0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 3U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h3dfd7295__0))))
                                  : 0ULL);
        vlSelf->io_float_o_13 = ((0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 2U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h55c635c7__0))))
                                  : 0ULL);
        vlSelf->io_float_o_14 = ((0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h6b3a5eab__0))))
                                  : 0ULL);
        if ((0U == (IData)(vlSelf->io_vector_size))) {
            vlSelf->io_float_o_7 = (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 8U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h3f732c73__0))));
            vlSelf->io_float_o_15 = (QData)((IData)(
                                                    ((0x8000U 
                                                      & (IData)(vlSelf->QvuTop__DOT___GEN_7)) 
                                                     | (IData)(vlSelf->__VdfgTmp_hdaffa71e__0))));
        } else {
            vlSelf->io_float_o_7 = 0ULL;
            vlSelf->io_float_o_15 = 0ULL;
        }
    } else if ((3U == (IData)(vlSelf->io_op))) {
        vlSelf->io_float_o_0 = ((0U != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                                 ? (QData)((IData)(vlSelf->__VdfgTmp_hece37c2e__0))
                                 : 0ULL);
        vlSelf->io_float_o_1 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 6U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h45a06809__0))))
                                 : 0ULL);
        vlSelf->io_float_o_2 = ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 5U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h54d188b7__0))))
                                 : 0ULL);
        vlSelf->io_float_o_3 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 4U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h8a2eaf1f__0))))
                                 : 0ULL);
        vlSelf->io_float_o_4 = ((4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h95bf39bd__0))))
                                 : 0ULL);
        vlSelf->io_float_o_5 = ((5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 2U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_he5b81198__0))))
                                 : 0ULL);
        vlSelf->io_float_o_6 = ((6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h66c1db1c__0))))
                                 : 0ULL);
        vlSelf->io_float_o_8 = ((8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        >> 1U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_hab31a8ed__0))))
                                 : 0ULL);
        vlSelf->io_float_o_9 = ((9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        >> 2U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h90cf73ba__0))))
                                 : 0ULL);
        vlSelf->io_float_o_10 = ((0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 3U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_ha24b52a4__0))))
                                  : 0ULL);
        vlSelf->io_float_o_11 = ((0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h31cfcd1e__0))))
                                  : 0ULL);
        vlSelf->io_float_o_12 = ((0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 5U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_hd07f1d61__0))))
                                  : 0ULL);
        vlSelf->io_float_o_13 = ((0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 6U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h4ecb4224__0))))
                                  : 0ULL);
        vlSelf->io_float_o_14 = ((0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 7U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h34744805__0))))
                                  : 0ULL);
        if ((0U == (IData)(vlSelf->io_vector_size))) {
            vlSelf->io_float_o_7 = (QData)((IData)(
                                                   ((0x80U 
                                                     & (IData)(vlSelf->QvuTop__DOT___GEN_7)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h47b9a3d0__0))));
            vlSelf->io_float_o_15 = (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 8U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h03f676fd__0))));
        } else {
            vlSelf->io_float_o_7 = 0ULL;
            vlSelf->io_float_o_15 = 0ULL;
        }
    } else {
        vlSelf->io_float_o_0 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (0U != (IData)(vlSelf->QvuTop__DOT___GEN_0)))
                                 ? (QData)((IData)(__VdfgTmp_h266d6a75__0))
                                 : 0ULL);
        vlSelf->io_float_o_1 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0))
                                 ? (QData)((IData)(__VdfgTmp_haf5bb8dc__0))
                                 : 0ULL);
        vlSelf->io_float_o_2 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h4cc533e1__0))
                                 : 0ULL);
        vlSelf->io_float_o_3 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0))
                                 ? (QData)((IData)(__VdfgTmp_hc3f1f329__0))
                                 : 0ULL);
        vlSelf->io_float_o_4 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h8a7e261f__0))
                                 : 0ULL);
        vlSelf->io_float_o_5 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h14aa63ed__0))
                                 : 0ULL);
        vlSelf->io_float_o_6 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h8555aa89__0))
                                 : 0ULL);
        vlSelf->io_float_o_8 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h4164099a__0))
                                 : 0ULL);
        vlSelf->io_float_o_9 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_hef50fc5e__0))
                                 : 0ULL);
        vlSelf->io_float_o_10 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_h8faaaf4d__0))
                                  : 0ULL);
        vlSelf->io_float_o_11 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_hfc4e52b7__0))
                                  : 0ULL);
        vlSelf->io_float_o_12 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_h685a7541__0))
                                  : 0ULL);
        vlSelf->io_float_o_13 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_h820a2292__0))
                                  : 0ULL);
        vlSelf->io_float_o_14 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_h57d15536__0))
                                  : 0ULL);
        if (vlSelf->__VdfgTmp_hbb02c542__0) {
            vlSelf->io_float_o_7 = (QData)((IData)(__VdfgTmp_hbbc8c52e__0));
            vlSelf->io_float_o_15 = (vlSelf->QvuTop__DOT____Vcellout__quantizeFP4__io_fp4_o 
                                     >> 0x3cU);
        } else {
            vlSelf->io_float_o_7 = 0ULL;
            vlSelf->io_float_o_15 = 0ULL;
        }
    }
    if ((0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal)) {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
    } else {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15)));
    }
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_4 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_5 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_6 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_8 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_9 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_10 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_11 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_12 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_13 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_14 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_7 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_15 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_4) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_4)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_5) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_5)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_6) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_6)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_8) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_8)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_9) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_9)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_10) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_10)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_11) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_11)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_12) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_12)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_13) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_13)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_14) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_14)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_7) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_7)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_15) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_15)))));
    if ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)) {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15 = 0ULL;
    } else {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0;
    }
    if ((0U == (IData)(vlSelf->io_op))) {
        vlSelf->io_int_o_0 = ((0U != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                             ? 0ULL
                                                             : 0x7fULL)) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                              ? 0ULL
                                                              : 0x7fULL))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                          ? 0ULL
                                                          : 0x7fULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                              ? 0ULL
                                                              : 0x7fULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                   ? 0U
                                                   : 0x7fU))))
                               : 0U);
        vlSelf->io_int_o_1 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                             ? 0ULL
                                                             : 0x1ffffff80ULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffff80ULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                          ? 0ULL
                                                          : 0x1ffffff80ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                              ? 0ULL
                                                              : 0x1ffffff80ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                   ? 0U
                                                   : 0x80U))))
                               : 0U);
        vlSelf->io_int_o_2 = ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U)))) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                  ? 0x80U
                                                  : 
                                                 ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                  << 6U))))
                               : 0U);
        vlSelf->io_int_o_3 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                             ? 0ULL
                                                             : 0x1ffffffc0ULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffffc0ULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                          ? 0ULL
                                                          : 0x1ffffffc0ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                              ? 0ULL
                                                              : 0x1ffffffc0ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                   ? 0U
                                                   : 0xc0U))))
                               : 0U);
        vlSelf->io_int_o_4 = ((4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U)))) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                  ? 0x80U
                                                  : 
                                                 ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                  << 5U))))
                               : 0U);
        vlSelf->io_int_o_5 = ((5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                             ? 0ULL
                                                             : 0x1ffffffe0ULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffffe0ULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                          ? 0ULL
                                                          : 0x1ffffffe0ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                              ? 0ULL
                                                              : 0x1ffffffe0ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                   ? 0U
                                                   : 0xe0U))))
                               : 0U);
        vlSelf->io_int_o_6 = ((6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                             ? 0ULL
                                                             : 0x64ULL)) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                              ? 0ULL
                                                              : 0x64ULL))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                          ? 0ULL
                                                          : 0x64ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                              ? 0ULL
                                                              : 0x64ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                   ? 0U
                                                   : 0x64U))))
                               : 0U);
        vlSelf->io_int_o_8 = ((8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                             ? 0ULL
                                                             : 0x7fULL)) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                              ? 0ULL
                                                              : 0x7fULL))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                          ? 0ULL
                                                          : 0x7fULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                              ? 0ULL
                                                              : 0x7fULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                   ? 0U
                                                   : 0x7fU))))
                               : 0U);
        vlSelf->io_int_o_9 = ((9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                             ? 0ULL
                                                             : 0x1ffffff80ULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffff80ULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                          ? 0ULL
                                                          : 0x1ffffff80ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                              ? 0ULL
                                                              : 0x1ffffff80ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                   ? 0U
                                                   : 0x80U))))
                               : 0U);
        vlSelf->io_int_o_10 = ((0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U)))) 
                                                & VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U))))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U))))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U))))
                                                   ? 0x80U
                                                   : 
                                                  ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                   << 6U))))
                                : 0U);
        vlSelf->io_int_o_11 = ((0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                              ? 0ULL
                                                              : 0x1ffffffc0ULL)) 
                                                & ((0ULL 
                                                    != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0) 
                                                   | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                ((0ULL 
                                                                  == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                                  ? 0ULL
                                                                  : 0x1ffffffc0ULL)))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                           ? 0ULL
                                                           : 0x1ffffffc0ULL))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                               ? 0ULL
                                                               : 0x1ffffffc0ULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                    ? 0U
                                                    : 0xc0U))))
                                : 0U);
        vlSelf->io_int_o_12 = ((0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U)))) 
                                                & VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))
                                                   ? 0x80U
                                                   : 
                                                  ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                   << 5U))))
                                : 0U);
        vlSelf->io_int_o_13 = ((0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                              ? 0ULL
                                                              : 0x1ffffffe0ULL)) 
                                                & ((0ULL 
                                                    != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0) 
                                                   | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                ((0ULL 
                                                                  == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                                  ? 0ULL
                                                                  : 0x1ffffffe0ULL)))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                           ? 0ULL
                                                           : 0x1ffffffe0ULL))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                               ? 0ULL
                                                               : 0x1ffffffe0ULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                    ? 0U
                                                    : 0xe0U))))
                                : 0U);
        vlSelf->io_int_o_14 = ((0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                              ? 0ULL
                                                              : 0x64ULL)) 
                                                & VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                               ? 0ULL
                                                               : 0x64ULL))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                           ? 0ULL
                                                           : 0x64ULL))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                               ? 0ULL
                                                               : 0x64ULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                    ? 0U
                                                    : 0x64U))))
                                : 0U);
        if ((0U == (IData)(vlSelf->io_vector_size))) {
            vlSelf->io_int_o_7 = (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                             ? 0ULL
                                                             : 0x1ffffff9cULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffff9cULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                          ? 0ULL
                                                          : 0x1ffffff9cULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                              ? 0ULL
                                                              : 0x1ffffff9cULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                   ? 0U
                                                   : 0x9cU))));
            vlSelf->io_int_o_15 = (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                              ? 0ULL
                                                              : 0x1ffffff9cULL)) 
                                                & ((0ULL 
                                                    != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0) 
                                                   | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                ((0ULL 
                                                                  == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                                  ? 0ULL
                                                                  : 0x1ffffff9cULL)))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                           ? 0ULL
                                                           : 0x1ffffff9cULL))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                               ? 0ULL
                                                               : 0x1ffffff9cULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                    ? 0U
                                                    : 0x9cU))));
        } else {
            vlSelf->io_int_o_7 = 0U;
            vlSelf->io_int_o_15 = 0U;
        }
    } else {
        vlSelf->io_int_o_0 = (((1U == (IData)(vlSelf->io_op)) 
                               & (0U != (IData)(vlSelf->QvuTop__DOT___GEN_0)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0)))))))
                               : 0U);
        vlSelf->io_int_o_1 = (((1U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0)))))))
                               : 0U);
        vlSelf->io_int_o_2 = (((1U == (IData)(vlSelf->io_op)) 
                               & (2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0)))))))
                               : 0U);
        vlSelf->io_int_o_3 = (((1U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0)))))))
                               : 0U);
        vlSelf->io_int_o_4 = (((1U == (IData)(vlSelf->io_op)) 
                               & (4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0)))))))
                               : 0U);
        vlSelf->io_int_o_5 = (((1U == (IData)(vlSelf->io_op)) 
                               & (5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0)))))))
                               : 0U);
        vlSelf->io_int_o_6 = (((1U == (IData)(vlSelf->io_op)) 
                               & (6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0)))))))
                               : 0U);
        vlSelf->io_int_o_8 = (((1U == (IData)(vlSelf->io_op)) 
                               & (8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0)))))))
                               : 0U);
        vlSelf->io_int_o_9 = (((1U == (IData)(vlSelf->io_op)) 
                               & (9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0)))))))
                               : 0U);
        vlSelf->io_int_o_10 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0)))))))
                                : 0U);
        vlSelf->io_int_o_11 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0)))))))
                                : 0U);
        vlSelf->io_int_o_12 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0)))))))
                                : 0U);
        vlSelf->io_int_o_13 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0)))))))
                                : 0U);
        vlSelf->io_int_o_14 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0)))))))
                                : 0U);
        if (vlSelf->__VdfgTmp_he1263253__0) {
            vlSelf->io_int_o_7 = (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0)))))));
            vlSelf->io_int_o_15 = (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0)))))));
        } else {
            vlSelf->io_int_o_7 = 0U;
            vlSelf->io_int_o_15 = 0U;
        }
    }
}
