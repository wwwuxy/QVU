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
    IData/*30:0*/ QvuTop__DOT__decode1__DOT____VdfgTmp_h217dfa70__0;
    QvuTop__DOT__decode1__DOT____VdfgTmp_h217dfa70__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT____VdfgTmp_h24ca96e6__0;
    QvuTop__DOT__decode1__DOT____VdfgTmp_h24ca96e6__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT____VdfgTmp_h244c0703__0;
    QvuTop__DOT__decode1__DOT____VdfgTmp_h244c0703__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT____VdfgTmp_h27f16fb5__0;
    QvuTop__DOT__decode1__DOT____VdfgTmp_h27f16fb5__0 = 0;
    CData/*0:0*/ QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0;
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0;
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0;
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0;
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT____VdfgTmp_h217dfa70__0;
    QvuTop__DOT__decode2__DOT____VdfgTmp_h217dfa70__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT____VdfgTmp_h24ca96e6__0;
    QvuTop__DOT__decode2__DOT____VdfgTmp_h24ca96e6__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT____VdfgTmp_h244c0703__0;
    QvuTop__DOT__decode2__DOT____VdfgTmp_h244c0703__0 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT____VdfgTmp_h27f16fb5__0;
    QvuTop__DOT__decode2__DOT____VdfgTmp_h27f16fb5__0 = 0;
    CData/*0:0*/ QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0;
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0;
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0;
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0;
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = 0;
    // Body
    vlSelf->QvuTop__DOT___GEN_3 = ((0U == (IData)(vlSelf->io_op)) 
                                   | (1U == (IData)(vlSelf->io_op)));
    vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h21c2c097__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i2_3 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h217d4d15__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i2_2 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h24cba9c4__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i2_1 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h244a7236__0 
        = ((IData)(vlSelf->io_Isposit) & (vlSelf->io_posit_i2_0 
                                          >> 0x1fU));
    vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0 = (IData)(
                                                          (((IData)(vlSelf->io_vector_size) 
                                                            >> 2U) 
                                                           | (0U 
                                                              == (IData)(vlSelf->io_vector_size))));
    vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0 = (
                                                   (0U 
                                                    == (IData)(vlSelf->io_vector_size)) 
                                                   | (0U 
                                                      != (IData)(vlSelf->io_vector_size)));
    vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0 = (IData)(
                                                          ((0U 
                                                            != 
                                                            (6U 
                                                             & (IData)(vlSelf->io_vector_size))) 
                                                           | (0U 
                                                              == (IData)(vlSelf->io_vector_size))));
    vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE = ((0U 
                                                == (IData)(vlSelf->io_vector_size))
                                                ? 4U
                                                : (IData)(vlSelf->io_vector_size));
    if (vlSelf->io_Isposit) {
        vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h21c2c097__0 
            = (vlSelf->io_posit_i1_3 >> 0x1fU);
        vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h217d4d15__0 
            = (vlSelf->io_posit_i1_2 >> 0x1fU);
        vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h24cba9c4__0 
            = (vlSelf->io_posit_i1_1 >> 0x1fU);
        vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h244a7236__0 
            = (vlSelf->io_posit_i1_0 >> 0x1fU);
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0 = 0U;
        QvuTop__DOT__decode2__DOT____VdfgTmp_h217dfa70__0 
            = (0x7fffffffU & vlSelf->io_posit_i2_3);
        QvuTop__DOT__decode2__DOT____VdfgTmp_h24ca96e6__0 
            = (0x7fffffffU & vlSelf->io_posit_i2_2);
        QvuTop__DOT__decode2__DOT____VdfgTmp_h244c0703__0 
            = (0x7fffffffU & vlSelf->io_posit_i2_1);
        QvuTop__DOT__decode2__DOT____VdfgTmp_h27f16fb5__0 
            = (0x7fffffffU & vlSelf->io_posit_i2_0);
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0 = 0U;
        QvuTop__DOT__decode1__DOT____VdfgTmp_h217dfa70__0 
            = (0x7fffffffU & vlSelf->io_posit_i1_3);
        QvuTop__DOT__decode1__DOT____VdfgTmp_h24ca96e6__0 
            = (0x7fffffffU & vlSelf->io_posit_i1_2);
        QvuTop__DOT__decode1__DOT____VdfgTmp_h244c0703__0 
            = (0x7fffffffU & vlSelf->io_posit_i1_1);
        QvuTop__DOT__decode1__DOT____VdfgTmp_h27f16fb5__0 
            = (0x7fffffffU & vlSelf->io_posit_i1_0);
        vlSelf->QvuTop__DOT___GEN_4 = ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                         & (IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h21c2c097__0)) 
                                        << 3U) | ((
                                                   ((2U 
                                                     < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                    & (IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h217d4d15__0)) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                       & (IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h24cba9c4__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                        & (IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h244a7236__0)))));
    } else {
        vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h21c2c097__0 = 0U;
        vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h217d4d15__0 = 0U;
        vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h24cba9c4__0 = 0U;
        vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h244a7236__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i2_3));
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i2_2));
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i2_1));
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i2_0));
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0 
            = (0xffU & (IData)((vlSelf->io_float_i2_0 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0 
            = (0xffU & (IData)((vlSelf->io_float_i2_1 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0 
            = (0xffU & (IData)((vlSelf->io_float_i2_2 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0 
            = (0xffU & (IData)((vlSelf->io_float_i2_3 
                                >> 0x17U)));
        QvuTop__DOT__decode2__DOT____VdfgTmp_h217dfa70__0 = 0U;
        QvuTop__DOT__decode2__DOT____VdfgTmp_h24ca96e6__0 = 0U;
        QvuTop__DOT__decode2__DOT____VdfgTmp_h244c0703__0 = 0U;
        QvuTop__DOT__decode2__DOT____VdfgTmp_h27f16fb5__0 = 0U;
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_3));
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_2));
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_1));
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_0));
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0 
            = (0xffU & (IData)((vlSelf->io_float_i_0 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0 
            = (0xffU & (IData)((vlSelf->io_float_i_1 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0 
            = (0xffU & (IData)((vlSelf->io_float_i_2 
                                >> 0x17U)));
        vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0 
            = (0xffU & (IData)((vlSelf->io_float_i_3 
                                >> 0x17U)));
        QvuTop__DOT__decode1__DOT____VdfgTmp_h217dfa70__0 = 0U;
        QvuTop__DOT__decode1__DOT____VdfgTmp_h24ca96e6__0 = 0U;
        QvuTop__DOT__decode1__DOT____VdfgTmp_h244c0703__0 = 0U;
        QvuTop__DOT__decode1__DOT____VdfgTmp_h27f16fb5__0 = 0U;
        vlSelf->QvuTop__DOT___GEN_4 = ((8U & (((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                               & ((~ (IData)(vlSelf->io_Isposit)) 
                                                  & (vlSelf->io_float_i_3 
                                                     >> 0x1fU))) 
                                              << 3U)) 
                                       | ((4U & (((2U 
                                                   < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                  & ((~ (IData)(vlSelf->io_Isposit)) 
                                                     & (vlSelf->io_float_i_2 
                                                        >> 0x1fU))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                & ((~ (IData)(vlSelf->io_Isposit)) 
                                                   & (vlSelf->io_float_i_1 
                                                      >> 0x1fU))) 
                                               << 1U)) 
                                             | (((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                 & (~ (IData)(vlSelf->io_Isposit))) 
                                                & (vlSelf->io_float_i_0 
                                                   >> 0x1fU)))));
    }
    vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN_0 
        = (((0U == vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0) 
            << 3U) | (((0U == vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0) 
                       << 2U) | (((0U == vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0) 
                                  << 1U) | (0U == vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0))));
    vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN = 
        (((IData)((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))) 
          << 3U) | (((IData)((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))) 
                     << 2U) | (((IData)((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))) 
                                << 1U) | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)))));
    vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h21c2c097__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i2_3)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode2__DOT____VdfgTmp_h217dfa70__0));
    vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h217d4d15__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i2_2)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode2__DOT____VdfgTmp_h24ca96e6__0));
    vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h24cba9c4__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i2_1)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode2__DOT____VdfgTmp_h244c0703__0));
    vlSelf->QvuTop__DOT__decode2__DOT__isNaR = ((((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h21c2c097__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h217d4d15__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h24cba9c4__0) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h244a7236__0)))) 
                                                & (((0U 
                                                     == QvuTop__DOT__decode2__DOT____VdfgTmp_h217dfa70__0) 
                                                    << 3U) 
                                                   | (((0U 
                                                        == QvuTop__DOT__decode2__DOT____VdfgTmp_h24ca96e6__0) 
                                                       << 2U) 
                                                      | (((0U 
                                                           == QvuTop__DOT__decode2__DOT____VdfgTmp_h244c0703__0) 
                                                          << 1U) 
                                                         | (0U 
                                                            == QvuTop__DOT__decode2__DOT____VdfgTmp_h27f16fb5__0)))));
    vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h244a7236__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i2_0)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode2__DOT____VdfgTmp_h27f16fb5__0));
    vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN_0 
        = (((0U == vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0) 
            << 3U) | (((0U == vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0) 
                       << 2U) | (((0U == vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0) 
                                  << 1U) | (0U == vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0))));
    vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN = 
        (((IData)((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))) 
          << 3U) | (((IData)((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))) 
                     << 2U) | (((IData)((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))) 
                                << 1U) | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)))));
    vlSelf->QvuTop__DOT____VdfgTmp_hbe60a94c__0 = (1U 
                                                   & ((~ (IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)) 
                                                      | (IData)(vlSelf->io_Isposit)));
    vlSelf->QvuTop__DOT____VdfgTmp_hf04f431a__0 = (1U 
                                                   & ((~ (IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0)) 
                                                      | (IData)(vlSelf->io_Isposit)));
    vlSelf->QvuTop__DOT____VdfgTmp_h4c27362e__0 = (1U 
                                                   & ((~ (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)) 
                                                      | (IData)(vlSelf->io_Isposit)));
    vlSelf->QvuTop__DOT____VdfgTmp_hf2aa9257__0 = (
                                                   (2U 
                                                    >= (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->io_Isposit));
    vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h21c2c097__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i1_3)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode1__DOT____VdfgTmp_h217dfa70__0));
    vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h217d4d15__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i1_2)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode1__DOT____VdfgTmp_h24ca96e6__0));
    vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h24cba9c4__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i1_1)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode1__DOT____VdfgTmp_h244c0703__0));
    vlSelf->QvuTop__DOT__decode1__DOT__isNaR = ((((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h21c2c097__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h217d4d15__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h24cba9c4__0) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h244a7236__0)))) 
                                                & (((0U 
                                                     == QvuTop__DOT__decode1__DOT____VdfgTmp_h217dfa70__0) 
                                                    << 3U) 
                                                   | (((0U 
                                                        == QvuTop__DOT__decode1__DOT____VdfgTmp_h24ca96e6__0) 
                                                       << 2U) 
                                                      | (((0U 
                                                           == QvuTop__DOT__decode1__DOT____VdfgTmp_h244c0703__0) 
                                                          << 1U) 
                                                         | (0U 
                                                            == QvuTop__DOT__decode1__DOT____VdfgTmp_h27f16fb5__0)))));
    vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6 
        = (0x7fffffffU & ((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h244a7236__0)
                           ? ((IData)(1U) + ((IData)(vlSelf->io_Isposit)
                                              ? (~ vlSelf->io_posit_i1_0)
                                              : 0x7fffffffU))
                           : QvuTop__DOT__decode1__DOT____VdfgTmp_h27f16fb5__0));
    vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6));
    vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6));
    vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6));
    vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6));
    vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6));
    vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6));
    vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6));
    vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1eU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1dU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1cU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1bU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1aU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x19U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x18U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x17U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x16U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x15U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x14U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x13U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x12U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x11U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x10U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xfU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xeU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xdU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xcU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xbU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xaU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 9U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 8U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 7U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 6U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 5U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 4U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 3U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 2U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 1U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i);
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1eU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1dU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1cU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1bU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1aU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x19U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x18U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x17U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x16U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x15U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x14U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x13U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x12U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x11U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x10U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xfU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xeU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xdU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xcU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xbU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xaU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 9U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 8U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 7U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 6U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 5U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 4U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 3U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 2U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 1U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i);
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1eU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1dU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1cU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1bU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1aU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x19U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x18U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x17U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x16U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x15U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x14U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x13U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x12U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x11U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x10U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xfU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xeU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xdU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xcU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xbU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xaU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 9U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 8U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 7U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 6U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 5U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 4U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 3U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 2U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 1U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i);
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1eU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1dU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1cU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1bU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1aU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x19U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x18U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x17U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x16U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x15U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x14U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x13U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x12U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x11U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x10U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xfU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xeU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xdU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xcU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xbU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xaU));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 9U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 8U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 7U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 6U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 5U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 4U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 3U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 2U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 1U));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i);
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1eU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1dU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1cU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1bU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x1aU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x19U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x18U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x17U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x16U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x15U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x14U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x13U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x12U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x11U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0x10U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xfU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xeU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xdU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xcU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xbU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 0xaU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 9U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 8U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 7U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 6U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 5U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 4U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 3U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 2U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i 
                 >> 1U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i);
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1eU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1dU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1cU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1bU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x1aU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x19U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x18U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x17U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x16U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x15U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x14U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x13U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x12U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x11U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0x10U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xfU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xeU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xdU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xcU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xbU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 0xaU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 9U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 8U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 7U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 6U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 5U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 4U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 3U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 2U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i 
                 >> 1U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i);
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1eU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1dU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1cU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1bU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x1aU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x19U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x18U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x17U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x16U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x15U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x14U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x13U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x12U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x11U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0x10U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xfU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xeU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xdU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xcU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xbU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 0xaU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 9U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 8U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 7U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 6U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 5U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 4U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 3U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 2U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i 
                 >> 1U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i);
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1eU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1dU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1cU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1bU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1aU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x19U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x18U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x17U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x16U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x15U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x14U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x13U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x12U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x11U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x10U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xfU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xeU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xdU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xcU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xbU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xaU));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 9U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 8U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 7U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 6U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 5U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 4U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 3U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 2U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 1U));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i);
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(QvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__0(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h70addc08__0;
    // Body
    __Vtemp_h70addc08__0 = ((0x40000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h70addc08__0);
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__1(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__1\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h61915956__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e8943e4__0;
    // Body
    __Vtemp_h61915956__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h61915956__0[1U] = ((((0x2000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h9e8943e4__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h61915956__0[0U];
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h61915956__0[1U];
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h9e8943e4__0[2U])))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6));
    QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__2(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h453887fa__0;
    // Body
    __Vtemp_h453887fa__0 = ((0x40000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h453887fa__0);
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__3(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__3\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h8fe7a933__0;
    VlWide<3>/*95:0*/ __Vtemp_he66552c2__0;
    // Body
    __Vtemp_h8fe7a933__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h8fe7a933__0[1U] = ((((0x2000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_he66552c2__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h8fe7a933__0[0U];
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h8fe7a933__0[1U];
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_he66552c2__0[2U])))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6));
    QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__4(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h205a8b1d__0;
    // Body
    __Vtemp_h205a8b1d__0 = ((0x40000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h205a8b1d__0);
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__5(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__5\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h339a20cf__0;
    VlWide<3>/*95:0*/ __Vtemp_h4587dc09__0;
    // Body
    __Vtemp_h339a20cf__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h339a20cf__0[1U] = ((((0x2000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h4587dc09__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h339a20cf__0[0U];
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h339a20cf__0[1U];
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h4587dc09__0[2U])))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6));
    QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__6(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__6\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h665dbdde__0;
    // Body
    __Vtemp_h665dbdde__0 = ((0x40000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h665dbdde__0);
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__7(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__7\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h68e99338__0;
    VlWide<3>/*95:0*/ __Vtemp_hb91d7c6f__0;
    // Body
    __Vtemp_h68e99338__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h68e99338__0[1U] = ((((0x2000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hb91d7c6f__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h68e99338__0[0U];
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h68e99338__0[1U];
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hb91d7c6f__0[2U])))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6));
    QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__8(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__8\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h5163671b__0;
    // Body
    __Vtemp_h5163671b__0 = ((0x40000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h5163671b__0);
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__9(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__9\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hb98228ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h471c1467__0;
    // Body
    __Vtemp_hb98228ef__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hb98228ef__0[1U] = ((((0x2000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h471c1467__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hb98228ef__0[0U];
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hb98228ef__0[1U];
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h471c1467__0[2U])))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6));
    QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h9c9ab370__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((8U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hbe60a94c__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0))));
    if (vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0) {
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0 
            = vlSelf->__VdfgTmp_h9c9ab370__0;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61bde__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h9c9ab370__0));
    } else {
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61bde__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__10(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__10\n"); );
    // Init
    IData/*31:0*/ __Vtemp_ha8ea6435__0;
    // Body
    __Vtemp_ha8ea6435__0 = ((0x40000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_ha8ea6435__0);
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__11(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__11\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha4452604__0;
    VlWide<3>/*95:0*/ __Vtemp_h51c4a7c3__0;
    // Body
    __Vtemp_ha4452604__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_ha4452604__0[1U] = ((((0x2000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h51c4a7c3__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_ha4452604__0[0U];
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_ha4452604__0[1U];
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h51c4a7c3__0[2U])))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6));
    QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_haed5c1a2__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((4U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hf2aa9257__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0))));
    if ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8ec3__0 
            = vlSelf->__VdfgTmp_haed5c1a2__0;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8805__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_haed5c1a2__0));
    } else {
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8ec3__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8805__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__12(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__12\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hf1142543__0;
    // Body
    __Vtemp_hf1142543__0 = ((0x40000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_hf1142543__0);
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__13(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__13\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_habc36894__0;
    VlWide<3>/*95:0*/ __Vtemp_h0e4b3ab5__0;
    // Body
    __Vtemp_habc36894__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_habc36894__0[1U] = ((((0x2000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h0e4b3ab5__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_habc36894__0[0U];
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_habc36894__0[1U];
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h0e4b3ab5__0[2U])))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6));
    QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h43a98faf__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((2U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h4c27362e__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0))));
    if (vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0) {
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf4442__0 
            = vlSelf->__VdfgTmp_h43a98faf__0;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf2b43__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h43a98faf__0));
    } else {
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf4442__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf2b43__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__14(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__14\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h8c96b982__0;
    // Body
    __Vtemp_h8c96b982__0 = ((0x40000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h8c96b982__0);
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__15(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__15\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hd3f11cc5__0;
    VlWide<3>/*95:0*/ __Vtemp_h3087c4ad__0;
    // Body
    __Vtemp_hd3f11cc5__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hd3f11cc5__0[1U] = ((((0x2000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h3087c4ad__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hd3f11cc5__0[0U];
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hd3f11cc5__0[1U];
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h3087c4ad__0[2U])))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6));
    QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h46be9c78__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hf04f431a__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0))));
    if (vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0) {
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a634__0 
            = vlSelf->__VdfgTmp_h46be9c78__0;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a6fc__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h46be9c78__0));
    } else {
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a634__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a6fc__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__16(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__16\n"); );
    // Body
    vlSelf->QvuTop__DOT__decode2__DOT__io_Exp = (((
                                                   (8U 
                                                    & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                    ? 0U
                                                    : 
                                                   ((((1U 
                                                       & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                           - (IData)(1U)))
                                                        : 
                                                       (0x20U 
                                                        | (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (~ 
                                                               vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                       : 0U) 
                                                     << 2U) 
                                                    | ((1U 
                                                        & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       (3U 
                                                        & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                           >> 0x1dU))
                                                        : 0U))) 
                                                  << 0x18U) 
                                                 | ((((4U 
                                                       & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                       ? 0U
                                                       : 
                                                      ((((1U 
                                                          & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                          ? 
                                                         ((0x40000000U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6)
                                                           ? 
                                                          (0x1fU 
                                                           & (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                              - (IData)(1U)))
                                                           : 
                                                          (0x20U 
                                                           | (0x1fU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 (~ 
                                                                  vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                          : 0U) 
                                                        << 2U) 
                                                       | ((1U 
                                                           & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                           ? 
                                                          (3U 
                                                           & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                              >> 0x1dU))
                                                           : 0U))) 
                                                     << 0x10U) 
                                                    | ((((2U 
                                                          & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                          ? 0U
                                                          : 
                                                         ((((1U 
                                                             & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                             ? 
                                                            ((0x40000000U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6)
                                                              ? 
                                                             (0x1fU 
                                                              & (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                 - (IData)(1U)))
                                                              : 
                                                             (0x20U 
                                                              | (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (~ 
                                                                     vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                             : 0U) 
                                                           << 2U) 
                                                          | ((1U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             (3U 
                                                              & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                 >> 0x1dU))
                                                              : 0U))) 
                                                        << 8U) 
                                                       | ((1U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          ((((1U 
                                                              & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((0x40000000U 
                                                               & vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6)
                                                               ? 
                                                              (0x1fU 
                                                               & (vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                  - (IData)(1U)))
                                                               : 
                                                              (0x20U 
                                                               | (0x1fU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (~ 
                                                                      vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                              : 0U) 
                                                            << 2U) 
                                                           | ((1U 
                                                               & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                               ? 
                                                              (3U 
                                                               & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                  >> 0x1dU))
                                                               : 0U))))));
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__17(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__17\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T;
    QvuTop__DOT__quantizeInt8__DOT___roundedInt_T = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1;
    QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2;
    QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3;
    QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT___centeredValue_T;
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T = 0;
    CData/*1:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3;
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2;
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2 = 0;
    CData/*1:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9;
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4;
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4 = 0;
    CData/*1:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15;
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6;
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6 = 0;
    CData/*1:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21;
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0;
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0;
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0;
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0;
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 = 0;
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
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0 = 0;
    // Body
    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
        = ((IData)(vlSelf->io_Isposit) ? ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                             ? ((8U 
                                                 & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                 ? 0U
                                                 : 
                                                ((((1U 
                                                    & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6)
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                        - (IData)(1U)))
                                                     : 
                                                    (0x20U 
                                                     | (0x1fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ 
                                                            vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                    : 0U) 
                                                  << 2U) 
                                                 | ((1U 
                                                     & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                     ? 
                                                    (3U 
                                                     & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                        >> 0x1dU))
                                                     : 0U)))
                                             : 0U) 
                                           << 0x18U) 
                                          | ((((2U 
                                                < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                    ? 0U
                                                    : 
                                                   ((((1U 
                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                           - (IData)(1U)))
                                                        : 
                                                       (0x20U 
                                                        | (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (~ 
                                                               vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                       : 0U) 
                                                     << 2U) 
                                                    | ((1U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       (3U 
                                                        & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                           >> 0x1dU))
                                                        : 0U)))
                                                : 0U) 
                                              << 0x10U) 
                                             | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                    ? 0U
                                                    : 
                                                   ((((1U 
                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                           - (IData)(1U)))
                                                        : 
                                                       (0x20U 
                                                        | (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (~ 
                                                               vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                       : 0U) 
                                                     << 2U) 
                                                    | ((1U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       (3U 
                                                        & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                           >> 0x1dU))
                                                        : 0U)))
                                                   : 0U) 
                                                 << 8U) 
                                                | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                     ? 0U
                                                     : 
                                                    ((((1U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       ((0x40000000U 
                                                         & vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6)
                                                         ? 
                                                        (0x1fU 
                                                         & (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                            - (IData)(1U)))
                                                         : 
                                                        (0x20U 
                                                         | (0x1fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (~ 
                                                                vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                        : 0U) 
                                                      << 2U) 
                                                     | ((1U 
                                                         & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (3U 
                                                         & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                                            >> 0x1dU))
                                                         : 0U)))
                                                    : 0U))))
            : ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hbe60a94c__0)
                  ? 0U : ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))
                           ? 0x82U : ((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))
                                       ? 0U : (0xffU 
                                               & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0) 
                                                  - (IData)(0x7fU)))))) 
                << 0x18U) | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hf2aa9257__0)
                                ? 0U : ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))
                                         ? 0x82U : 
                                        ((0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))
                                          ? 0U : (0xffU 
                                                  & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0) 
                                                     - (IData)(0x7fU)))))) 
                              << 0x10U) | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h4c27362e__0)
                                              ? 0U : 
                                             ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))
                                               ? 0x82U
                                               : ((0xffU 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0) 
                                                      - (IData)(0x7fU)))))) 
                                            << 8U) 
                                           | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hf04f431a__0)
                                               ? 0U
                                               : ((0U 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))
                                                   ? 0x82U
                                                   : 
                                                  ((0xffU 
                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0) 
                                                       - (IData)(0x7fU))))))))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
            ? (0x3fU & ((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i))
            : 0U);
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_1 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                             >> 8U))))
            ? (0x3fU & ((IData)(0x1eU) - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                          >> 8U))) : 0U);
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_2 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                             >> 0x10U))))
            ? (0x3fU & ((IData)(0x1eU) - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                          >> 0x10U)))
            : 0U);
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_3 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                             >> 0x18U))))
            ? (0x3fU & ((IData)(0x1eU) - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                          >> 0x18U)))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i))) 
                 & (((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i) 
                    >> 5U)));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                   >> 8U)))) 
                 & (((IData)(0x1eU) - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                       >> 8U)) >> 5U)));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                   >> 0x10U)))) 
                 & (((IData)(0x1eU) - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                       >> 0x10U)) >> 5U)));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                   >> 0x18U)))) 
                 & (((IData)(0x1eU) - (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                       >> 0x18U)) >> 5U)));
    vlSelf->__VdfgTmp_h6db38b42__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8ec3__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                        >> 0x10U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                               >> 0x10U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                  >> 0x10U)))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                     >> 0x10U))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                      >> 0x10U))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                           >> 0x10U))))) 
                                                    << 0xaU) 
                                                   | ((2U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_haed5c1a2__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h9981df73__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf4442__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                        >> 8U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                               >> 8U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                  >> 8U)))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                     >> 8U))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                      >> 8U))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                           >> 8U))))) 
                                                    << 0xaU) 
                                                   | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h43a98faf__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h92081510__0 = ((0x8000U & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                                  << 0xfU)) 
                                      | (((0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a634__0) 
                                          | VL_GTS_III(8, 0xf1U, 
                                                       (0xffU 
                                                        & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
                                          ? 0U : ((
                                                   VL_LTS_III(8, 0x10U, 
                                                              (0xffU 
                                                               & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)) 
                                                   | VL_LTS_III(8, 0x1eU, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i))))
                                                   ? 0x7c00U
                                                   : 
                                                  (((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))) 
                                                    << 0xaU) 
                                                   | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h46be9c78__0 
                                                                  >> 0x17U)))
                                                       : 0U)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf4442__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                          >> 8U))) 
              & ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0) 
                 & (0U != vlSelf->__VdfgTmp_h43a98faf__0))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a634__0) 
           | (VL_GTS_III(8, 1U, (0xffU & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)) 
              & ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0) 
                 & (0U != vlSelf->__VdfgTmp_h46be9c78__0))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8ec3__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                          >> 0x10U))) 
              & ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                 & (0U != vlSelf->__VdfgTmp_haed5c1a2__0))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0) 
           | (VL_GTS_III(8, 1U, (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                 >> 0x18U)) & ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                               & (0U 
                                                  != vlSelf->__VdfgTmp_h9c9ab370__0))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0)
            ? (- (IData)((1U & (IData)(vlSelf->QvuTop__DOT___GEN_4))))
            : ((0x1fU >= (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal))
                ? ((vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a6fc__0 
                    << 4U) >> (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal))
                : 0U));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                >> 1U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf2b43__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                >> 2U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8805__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                >> 3U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61bde__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                              : 0U));
    vlSelf->io_float_o_2 = ((1U & ((~ ((2U == (IData)(vlSelf->io_op)) 
                                       & (2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))) 
                                   | (IData)(vlSelf->QvuTop__DOT___GEN_3)))
                             ? 0ULL : (QData)((IData)(
                                                      ((0x8000U 
                                                        & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                                           << 0xdU)) 
                                                       | (IData)(vlSelf->__VdfgTmp_h6db38b42__0)))));
    vlSelf->io_float_o_1 = ((1U & ((~ ((2U == (IData)(vlSelf->io_op)) 
                                       & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0))) 
                                   | (IData)(vlSelf->QvuTop__DOT___GEN_3)))
                             ? 0ULL : (QData)((IData)(
                                                      ((0x8000U 
                                                        & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                                           << 0xeU)) 
                                                       | (IData)(vlSelf->__VdfgTmp_h9981df73__0)))));
    vlSelf->io_float_o_0 = ((1U & ((~ ((2U == (IData)(vlSelf->io_op)) 
                                       & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0))) 
                                   | (IData)(vlSelf->QvuTop__DOT___GEN_3)))
                             ? 0ULL : (QData)((IData)(vlSelf->__VdfgTmp_h92081510__0)));
    vlSelf->io_float_o_3 = ((1U & ((~ ((2U == (IData)(vlSelf->io_op)) 
                                       & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0))) 
                                   | (IData)(vlSelf->QvuTop__DOT___GEN_3)))
                             ? 0ULL : ((0x8000ULL & 
                                        ((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                                             >> 3U)))) 
                                         << 0xfU)) 
                                       | ((0xffffULL 
                                           & (QData)((IData)(
                                                             (((0ULL 
                                                                == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0) 
                                                               | VL_GTS_III(8, 0xf1U, 
                                                                            (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                             >> 0x18U)))
                                                               ? 0U
                                                               : 
                                                              ((VL_LTS_III(8, 0x10U, 
                                                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                            >> 0x18U)) 
                                                                | VL_LTS_III(8, 0x1eU, 
                                                                             (0xffU 
                                                                              & ((IData)(0xfU) 
                                                                                + 
                                                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                                >> 0x18U)))))
                                                                ? 0x7c00U
                                                                : 
                                                               (((VL_GTS_III(8, 0U, 
                                                                             (0xffU 
                                                                              & ((IData)(0xfU) 
                                                                                + 
                                                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                                >> 0x18U))))
                                                                   ? 0U
                                                                   : 
                                                                  (VL_LTS_III(8, 0x1eU, 
                                                                              (0xffU 
                                                                               & ((IData)(0xfU) 
                                                                                + 
                                                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                                >> 0x18U))))
                                                                    ? 0x1eU
                                                                    : 
                                                                   (0x1fU 
                                                                    & ((IData)(0xfU) 
                                                                       + 
                                                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                        >> 0x18U))))) 
                                                                 << 0xaU) 
                                                                | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                                    ? 
                                                                   (0x3ffU 
                                                                    & (IData)(
                                                                              (vlSelf->__VdfgTmp_h9c9ab370__0 
                                                                               >> 0x17U)))
                                                                    : 0U))))))) 
                                          | ((0xffffULL 
                                              & ((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                                                     >> 2U)))) 
                                                 >> 1U)) 
                                             | ((0xffffULL 
                                                 & ((QData)((IData)(vlSelf->__VdfgTmp_h6db38b42__0)) 
                                                    >> 0x10U)) 
                                                | ((QData)((IData)(
                                                                   ((0x80000000U 
                                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                                                        << 0x1eU)) 
                                                                    | (((IData)(vlSelf->__VdfgTmp_h9981df73__0) 
                                                                        << 0x10U) 
                                                                       | (IData)(vlSelf->__VdfgTmp_h92081510__0))))) 
                                                   >> 0x30U))))));
    QvuTop__DOT__quantizeInt8__DOT___roundedInt_T = 
        (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
                         >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
                                         & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0)
                                              ? ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                 & (0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h46be9c78__0))))
                                              : ((0U 
                                                  != (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal)) 
                                                 & ((~ 
                                                     ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0) 
                                                      | (0U 
                                                         == (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal)))) 
                                                    & (0U 
                                                       != 
                                                       (((((0x1fU 
                                                            >= (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal))
                                                            ? 
                                                           ((IData)(1U) 
                                                            << (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal))
                                                            : 0U) 
                                                          - (IData)(1U)) 
                                                         >> 4U) 
                                                        & vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a6fc__0))))) 
                                            | (vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
                                               >> 1U))))));
    QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0)
                                                ? ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h43a98faf__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_1)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_1)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf2b43__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0)
                                                ? (
                                                   (2U 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_haed5c1a2__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_2)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_2)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8805__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0)
                                                ? ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h9c9ab370__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_3)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_3)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61bde__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
                                                 >> 1U))))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)
            ? 0ULL : ((1U & (IData)(vlSelf->QvuTop__DOT___GEN_4))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt8__DOT___roundedInt_T 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedInt_T)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)
            ? 0ULL : ((2U & (IData)(vlSelf->QvuTop__DOT___GEN_4))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)
            ? 0ULL : ((4U & (IData)(vlSelf->QvuTop__DOT___GEN_4))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
            ? 0ULL : ((8U & (IData)(vlSelf->QvuTop__DOT___GEN_4))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3)))));
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1 
                             - vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4 
                             - vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7 
                             - vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10 
                             - vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0 
        = (0x3ffffffffULL & VL_DIV_QQQ(34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (QvuTop__DOT__quantizeInt8__DOT___centeredValue_T 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | QvuTop__DOT__quantizeInt8__DOT___centeredValue_T), vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_11));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, QvuTop__DOT__quantizeInt8__DOT___centeredValue_T, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale));
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
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0 
        = (0x3ffffffffULL & VL_DIV_QQQ(34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2), vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_11));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale));
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
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0 
        = (0x3ffffffffULL & VL_DIV_QQQ(34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4), vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_11));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale));
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
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0 
        = (0x3ffffffffULL & VL_DIV_QQQ(34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6), vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_11));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale));
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
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12));
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder)
                              : vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder));
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
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              : vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1));
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
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              : vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2));
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
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              : vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3));
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
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding 
        = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
           | ((QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
               == vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
              & ((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale) 
                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0))));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5);
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1 
        = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
           | ((QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
               == vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
              & ((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale) 
                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0))));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39);
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2 
        = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
           | ((QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
               == vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
              & ((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale) 
                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0))));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73);
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3 
        = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
           | ((QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
               == vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
              & ((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale) 
                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0))));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107);
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding)))));
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
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_14, 5ULL))));
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
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_14, 5ULL))));
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
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_14, 5ULL))));
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
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_14, 5ULL))));
    } else {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)));
    }
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1)))));
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2)))));
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4 
        = (0x3ffffffffULL & (((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                               ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0
                               : 0ULL) + (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3) 
                                                                          >> 1U)))))) 
                                           << 2U) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10 
        = (0x3ffffffffULL & (((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                               ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0
                               : 0ULL) + (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9) 
                                                                          >> 1U)))))) 
                                           << 2U) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16 
        = (0x3ffffffffULL & (((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                               ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0
                               : 0ULL) + (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15) 
                                                                          >> 1U)))))) 
                                           << 2U) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22 
        = (0x3ffffffffULL & (((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                               ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0
                               : 0ULL) + (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21) 
                                                                          >> 1U)))))) 
                                           << 2U) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3)))));
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
    if ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)) {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3 = 0ULL;
    } else {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0;
    }
    if ((0U == (IData)(vlSelf->io_op))) {
        vlSelf->io_int_o_0 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0)
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                                               & (VL_GTES_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4) 
                                                  & (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4) 
                                                     | (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4 
                                                                >> 7U))))))) 
                                   << 8U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                              ? 0U : 
                                             (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                                   ? 0x80U
                                                   : 
                                                  (0xffU 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4))))))
                               : 0U);
        vlSelf->io_int_o_1 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                                               & (VL_GTES_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10) 
                                                  & (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10) 
                                                     | (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10 
                                                                >> 7U))))))) 
                                   << 8U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                              ? 0U : 
                                             (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                                   ? 0x80U
                                                   : 
                                                  (0xffU 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10))))))
                               : 0U);
        vlSelf->io_int_o_2 = ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                                               & (VL_GTES_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16) 
                                                  & (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16) 
                                                     | (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16 
                                                                >> 7U))))))) 
                                   << 8U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                              ? 0U : 
                                             (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                                   ? 0x80U
                                                   : 
                                                  (0xffU 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16))))))
                               : 0U);
        vlSelf->io_int_o_3 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                                               & (VL_GTES_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22) 
                                                  & (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22) 
                                                     | (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22 
                                                                >> 7U))))))) 
                                   << 8U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                              ? 0U : 
                                             (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                                   ? 0x80U
                                                   : 
                                                  (0xffU 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22))))))
                               : 0U);
    } else {
        vlSelf->io_int_o_0 = (((1U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)
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
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)
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
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)
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
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
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
    }
}
