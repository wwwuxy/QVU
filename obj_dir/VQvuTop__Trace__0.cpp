// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQvuTop__Syms.h"


void VQvuTop___024root__trace_chg_sub_0(VQvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VQvuTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_chg_top_0\n"); );
    // Init
    VQvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQvuTop___024root*>(voidSelf);
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VQvuTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VQvuTop___024root__trace_chg_sub_0(VQvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h829b5439__0;
    VlWide<3>/*95:0*/ __Vtemp_h32f0c7c3__0;
    VlWide<5>/*159:0*/ __Vtemp_h15db7925__0;
    VlWide<4>/*127:0*/ __Vtemp_h1b06671e__0;
    VlWide<4>/*127:0*/ __Vtemp_h6dabf4ce__0;
    VlWide<4>/*127:0*/ __Vtemp_ha81f68f6__0;
    VlWide<4>/*127:0*/ __Vtemp_hf607cc56__0;
    VlWide<4>/*127:0*/ __Vtemp_h4bbae0a6__0;
    VlWide<4>/*127:0*/ __Vtemp_hbc5c8910__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE),3);
        bufp->chgCData(oldp+1,((((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h21c2c097__0) 
                                 << 3U) | (((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h217d4d15__0) 
                                            << 2U) 
                                           | (((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h24cba9c4__0) 
                                               << 1U) 
                                              | (IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h244a7236__0))))),4);
        bufp->chgCData(oldp+2,(vlSelf->QvuTop__DOT__decode1__DOT__isNaR),4);
        bufp->chgIData(oldp+3,(vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6),31);
        bufp->chgIData(oldp+4,(vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6),31);
        bufp->chgIData(oldp+5,(vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6),31);
        bufp->chgIData(oldp+6,(vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6),31);
        bufp->chgIData(oldp+7,(vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i),31);
        bufp->chgIData(oldp+8,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+9,(vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i),31);
        bufp->chgIData(oldp+10,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+11,(vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i),31);
        bufp->chgIData(oldp+12,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+13,(vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i),31);
        bufp->chgIData(oldp+14,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp),31);
        bufp->chgCData(oldp+15,((((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h21c2c097__0) 
                                  << 3U) | (((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h217d4d15__0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h24cba9c4__0) 
                                                << 1U) 
                                               | (IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h244a7236__0))))),4);
        bufp->chgCData(oldp+16,(vlSelf->QvuTop__DOT__decode2__DOT__isNaR),4);
        bufp->chgIData(oldp+17,(vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6),31);
        bufp->chgIData(oldp+18,(vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6),31);
        bufp->chgIData(oldp+19,(vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6),31);
        bufp->chgIData(oldp+20,(vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6),31);
        bufp->chgIData(oldp+21,(vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i),31);
        bufp->chgIData(oldp+22,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+23,(vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i),31);
        bufp->chgIData(oldp+24,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+25,(vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i),31);
        bufp->chgIData(oldp+26,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+27,(vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i),31);
        bufp->chgIData(oldp+28,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp),31);
        bufp->chgQData(oldp+29,((((QData)((IData)((
                                                   (0U 
                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))
                                                    ? 0x182U
                                                    : 
                                                   ((0xffU 
                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))
                                                     ? 0U
                                                     : 
                                                    ((0x100U 
                                                      & (((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0) 
                                                          - (IData)(0x7fU)) 
                                                         << 1U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0) 
                                                           - (IData)(0x7fU)))))))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              ((((0U 
                                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))
                                                                  ? 0x182U
                                                                  : 
                                                                 ((0xffU 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x100U 
                                                                    & (((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0) 
                                                                        - (IData)(0x7fU)) 
                                                                       << 1U)) 
                                                                   | (0xffU 
                                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0) 
                                                                         - (IData)(0x7fU)))))) 
                                                                << 0x12U) 
                                                               | ((((0U 
                                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))
                                                                     ? 0x182U
                                                                     : 
                                                                    ((0xffU 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))
                                                                      ? 0U
                                                                      : 
                                                                     ((0x100U 
                                                                       & (((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0) 
                                                                           - (IData)(0x7fU)) 
                                                                          << 1U)) 
                                                                      | (0xffU 
                                                                         & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0) 
                                                                            - (IData)(0x7fU)))))) 
                                                                   << 9U) 
                                                                  | ((0U 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))
                                                                      ? 0x182U
                                                                      : 
                                                                     ((0xffU 
                                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))
                                                                       ? 0U
                                                                       : 
                                                                      ((0x100U 
                                                                        & (((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0) 
                                                                            - (IData)(0x7fU)) 
                                                                           << 1U)) 
                                                                       | (0xffU 
                                                                          & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0) 
                                                                             - (IData)(0x7fU)))))))))))),36);
        __Vtemp_h829b5439__0[0U] = (IData)((((QData)((IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((0U 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0)) 
                                                                  | (0xffU 
                                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))))))) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0)) 
                                                << 0x18U) 
                                               | (QData)((IData)(
                                                                 ((0x800000U 
                                                                   & ((~ 
                                                                       ((0U 
                                                                         == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                      << 0x17U)) 
                                                                  | vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0))))));
        __Vtemp_h829b5439__0[1U] = ((vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0 
                                     << 0x10U) | (IData)(
                                                         ((((QData)((IData)(
                                                                            (1U 
                                                                             & (~ 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0)) 
                                                                                | (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))))))) 
                                                            << 0x2fU) 
                                                           | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0)) 
                                                               << 0x18U) 
                                                              | (QData)((IData)(
                                                                                ((0x800000U 
                                                                                & ((~ 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)) 
                                                                                | (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                                << 0x17U)) 
                                                                                | vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0))))) 
                                                          >> 0x20U)));
        __Vtemp_h829b5439__0[2U] = (((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0)) 
                                         | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0)))) 
                                     << 0x1fU) | ((vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0 
                                                   << 8U) 
                                                  | ((0x80U 
                                                      & ((~ 
                                                          ((0U 
                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0)) 
                                                           | (0xffU 
                                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0)))) 
                                                         << 7U)) 
                                                     | (vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0 
                                                        >> 0x10U))));
        bufp->chgWData(oldp+31,(__Vtemp_h829b5439__0),96);
        bufp->chgCData(oldp+34,(((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN) 
                                 & (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN_0))),4);
        bufp->chgCData(oldp+35,(((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0)) 
                                   << 3U) | (((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0)) 
                                              << 2U) 
                                             | (((0U 
                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0)) 
                                                 << 1U) 
                                                | (0U 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))))) 
                                 & (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN_0))),4);
        bufp->chgBit(oldp+36,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))));
        bufp->chgBit(oldp+37,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))));
        bufp->chgBit(oldp+38,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))));
        bufp->chgBit(oldp+39,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))));
        bufp->chgQData(oldp+40,((((QData)((IData)((
                                                   (0U 
                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))
                                                    ? 0x182U
                                                    : 
                                                   ((0xffU 
                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))
                                                     ? 0U
                                                     : 
                                                    ((0x100U 
                                                      & (((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0) 
                                                          - (IData)(0x7fU)) 
                                                         << 1U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0) 
                                                           - (IData)(0x7fU)))))))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              ((((0U 
                                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))
                                                                  ? 0x182U
                                                                  : 
                                                                 ((0xffU 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x100U 
                                                                    & (((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0) 
                                                                        - (IData)(0x7fU)) 
                                                                       << 1U)) 
                                                                   | (0xffU 
                                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0) 
                                                                         - (IData)(0x7fU)))))) 
                                                                << 0x12U) 
                                                               | ((((0U 
                                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))
                                                                     ? 0x182U
                                                                     : 
                                                                    ((0xffU 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))
                                                                      ? 0U
                                                                      : 
                                                                     ((0x100U 
                                                                       & (((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0) 
                                                                           - (IData)(0x7fU)) 
                                                                          << 1U)) 
                                                                      | (0xffU 
                                                                         & ((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0) 
                                                                            - (IData)(0x7fU)))))) 
                                                                   << 9U) 
                                                                  | ((0U 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))
                                                                      ? 0x182U
                                                                      : 
                                                                     ((0xffU 
                                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))
                                                                       ? 0U
                                                                       : 
                                                                      ((0x100U 
                                                                        & (((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0) 
                                                                            - (IData)(0x7fU)) 
                                                                           << 1U)) 
                                                                       | (0xffU 
                                                                          & ((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0) 
                                                                             - (IData)(0x7fU)))))))))))),36);
        __Vtemp_h32f0c7c3__0[0U] = (IData)((((QData)((IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((0U 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0)) 
                                                                  | (0xffU 
                                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))))))) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0)) 
                                                << 0x18U) 
                                               | (QData)((IData)(
                                                                 ((0x800000U 
                                                                   & ((~ 
                                                                       ((0U 
                                                                         == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                      << 0x17U)) 
                                                                  | vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0))))));
        __Vtemp_h32f0c7c3__0[1U] = ((vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0 
                                     << 0x10U) | (IData)(
                                                         ((((QData)((IData)(
                                                                            (1U 
                                                                             & (~ 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0)) 
                                                                                | (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))))))) 
                                                            << 0x2fU) 
                                                           | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0)) 
                                                               << 0x18U) 
                                                              | (QData)((IData)(
                                                                                ((0x800000U 
                                                                                & ((~ 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)) 
                                                                                | (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                                << 0x17U)) 
                                                                                | vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0))))) 
                                                          >> 0x20U)));
        __Vtemp_h32f0c7c3__0[2U] = (((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0)) 
                                         | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0)))) 
                                     << 0x1fU) | ((vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0 
                                                   << 8U) 
                                                  | ((0x80U 
                                                      & ((~ 
                                                          ((0U 
                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0)) 
                                                           | (0xffU 
                                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0)))) 
                                                         << 7U)) 
                                                     | (vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0 
                                                        >> 0x10U))));
        bufp->chgWData(oldp+42,(__Vtemp_h32f0c7c3__0),96);
        bufp->chgCData(oldp+45,(((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN) 
                                 & (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN_0))),4);
        bufp->chgCData(oldp+46,(((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0)) 
                                   << 3U) | (((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0)) 
                                              << 2U) 
                                             | (((0U 
                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0)) 
                                                 << 1U) 
                                                | (0U 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))))) 
                                 & (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN_0))),4);
        bufp->chgBit(oldp+47,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))));
        bufp->chgBit(oldp+48,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))));
        bufp->chgBit(oldp+49,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))));
        bufp->chgBit(oldp+50,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))));
        bufp->chgCData(oldp+51,(vlSelf->QvuTop__DOT___GEN_2),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgCData(oldp+52,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+53,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o),31);
        bufp->chgCData(oldp+54,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+55,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgCData(oldp+60,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+61,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o),31);
        bufp->chgCData(oldp+62,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+63,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgCData(oldp+68,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+69,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o),31);
        bufp->chgCData(oldp+70,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+71,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgCData(oldp+76,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+77,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o),31);
        bufp->chgCData(oldp+78,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+79,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgCData(oldp+84,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+85,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),31);
        bufp->chgCData(oldp+86,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+87,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgCData(oldp+92,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+93,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),31);
        bufp->chgCData(oldp+94,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+95,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgCData(oldp+100,((0x1fU & ((IData)(1U) 
                                           + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+101,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),31);
        bufp->chgCData(oldp+102,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+103,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgCData(oldp+108,((0x1fU & ((IData)(1U) 
                                           + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+109,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
        bufp->chgCData(oldp+110,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+111,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x13U]))) {
        bufp->chgIData(oldp+116,(vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i),32);
        bufp->chgCData(oldp+117,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal),6);
        bufp->chgIData(oldp+118,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac),32);
        bufp->chgCData(oldp+119,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_1),6);
        bufp->chgIData(oldp+120,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1),32);
        bufp->chgCData(oldp+121,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_2),6);
        bufp->chgIData(oldp+122,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2),32);
        bufp->chgCData(oldp+123,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_3),6);
        bufp->chgIData(oldp+124,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[0xaU] 
                      | vlSelf->__Vm_traceActivity[0x13U]) 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgSData(oldp+125,(((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                     ? 0U : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                              ? 7U : 
                                             (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                               ? 8U
                                               : ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                   ? 0U
                                                   : 
                                                  (0xfU 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0)))))) 
                                   << 0xcU) | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                                  ? 0U
                                                  : 
                                                 (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0)))))) 
                                                << 8U) 
                                               | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                                     ? 0U
                                                     : 
                                                    (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                                      ? 7U
                                                      : 
                                                     (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                                       ? 8U
                                                       : 
                                                      ((0ULL 
                                                        == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                        ? 0U
                                                        : 
                                                       (0xfU 
                                                        & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0)))))) 
                                                   << 4U) 
                                                  | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                                       ? 7U
                                                       : 
                                                      (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                                        ? 8U
                                                        : 
                                                       ((0ULL 
                                                         == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                         ? 0U
                                                         : 
                                                        (0xfU 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0)))))))))),16);
        bufp->chgQData(oldp+126,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue),34);
        bufp->chgQData(oldp+128,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder),33);
        bufp->chgQData(oldp+130,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx),34);
        bufp->chgBit(oldp+132,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding));
        bufp->chgCData(oldp+133,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection),2);
        bufp->chgQData(oldp+134,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue),33);
        bufp->chgQData(oldp+136,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1),34);
        bufp->chgQData(oldp+138,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1),33);
        bufp->chgQData(oldp+140,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1),34);
        bufp->chgBit(oldp+142,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1));
        bufp->chgCData(oldp+143,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1),2);
        bufp->chgQData(oldp+144,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1),33);
        bufp->chgQData(oldp+146,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2),34);
        bufp->chgQData(oldp+148,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2),33);
        bufp->chgQData(oldp+150,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2),34);
        bufp->chgBit(oldp+152,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2));
        bufp->chgCData(oldp+153,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2),2);
        bufp->chgQData(oldp+154,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2),33);
        bufp->chgQData(oldp+156,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3),34);
        bufp->chgQData(oldp+158,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3),33);
        bufp->chgQData(oldp+160,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3),34);
        bufp->chgBit(oldp+162,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3));
        bufp->chgCData(oldp+163,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3),2);
        bufp->chgQData(oldp+164,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3),33);
        bufp->chgIData(oldp+166,(((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                     ? 0U : (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                                  ? 0x80U
                                                  : 
                                                 (0xffU 
                                                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22))))) 
                                   << 0x18U) | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                                   ? 0U
                                                   : 
                                                  (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                                    ? 0x7fU
                                                    : 
                                                   (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                                     ? 0x80U
                                                     : 
                                                    (0xffU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16))))) 
                                                 << 0x10U) 
                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                                       ? 0x7fU
                                                       : 
                                                      (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                                        ? 0x80U
                                                        : 
                                                       (0xffU 
                                                        & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10))))) 
                                                    << 8U) 
                                                   | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                                       ? 0U
                                                       : 
                                                      (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                                        ? 0x7fU
                                                        : 
                                                       (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                                         ? 0x80U
                                                         : 
                                                        (0xffU 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4))))))))),32);
        bufp->chgQData(oldp+167,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                   ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0
                                   : 0ULL)),34);
        bufp->chgQData(oldp+169,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder),33);
        bufp->chgBit(oldp+171,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding));
        bufp->chgQData(oldp+172,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                   ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0
                                   : 0ULL)),34);
        bufp->chgQData(oldp+174,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1),33);
        bufp->chgBit(oldp+176,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1));
        bufp->chgQData(oldp+177,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                   ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0
                                   : 0ULL)),34);
        bufp->chgQData(oldp+179,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2),33);
        bufp->chgBit(oldp+181,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2));
        bufp->chgQData(oldp+182,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                   ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0
                                   : 0ULL)),34);
        bufp->chgQData(oldp+184,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3),33);
        bufp->chgBit(oldp+186,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgQData(oldp+187,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax),33);
        bufp->chgQData(oldp+189,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin),33);
        bufp->chgQData(oldp+191,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale),33);
        bufp->chgQData(oldp+193,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset),33);
        bufp->chgQData(oldp+195,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax),33);
        bufp->chgQData(oldp+197,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin),33);
        bufp->chgBit(oldp+199,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData));
        bufp->chgCData(oldp+200,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state),2);
        bufp->chgWData(oldp+201,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram),128);
        bufp->chgIData(oldp+205,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal),20);
        bufp->chgIData(oldp+206,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold),23);
        bufp->chgQData(oldp+207,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_4),33);
        bufp->chgQData(oldp+209,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin),33);
        bufp->chgQData(oldp+211,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax),33);
        bufp->chgQData(oldp+213,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth),33);
        bufp->chgQData(oldp+215,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex),33);
        bufp->chgCData(oldp+217,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex),3);
        bufp->chgQData(oldp+218,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1),33);
        bufp->chgQData(oldp+220,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1),33);
        bufp->chgCData(oldp+222,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1),3);
        bufp->chgQData(oldp+223,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2),33);
        bufp->chgQData(oldp+225,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2),33);
        bufp->chgCData(oldp+227,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2),3);
        bufp->chgQData(oldp+228,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3),33);
        bufp->chgQData(oldp+230,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3),33);
        bufp->chgCData(oldp+232,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3),3);
        bufp->chgQData(oldp+233,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax),33);
        bufp->chgQData(oldp+235,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin),33);
        bufp->chgQData(oldp+237,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale),33);
        bufp->chgQData(oldp+239,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset),33);
        bufp->chgQData(oldp+241,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax),33);
        bufp->chgQData(oldp+243,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin),33);
        bufp->chgBit(oldp+245,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData));
        bufp->chgCData(oldp+246,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__state),2);
    }
    bufp->chgBit(oldp+247,(vlSelf->clock));
    bufp->chgBit(oldp+248,(vlSelf->reset));
    bufp->chgIData(oldp+249,(vlSelf->io_posit_i1_0),32);
    bufp->chgIData(oldp+250,(vlSelf->io_posit_i1_1),32);
    bufp->chgIData(oldp+251,(vlSelf->io_posit_i1_2),32);
    bufp->chgIData(oldp+252,(vlSelf->io_posit_i1_3),32);
    bufp->chgIData(oldp+253,(vlSelf->io_posit_i2_0),32);
    bufp->chgIData(oldp+254,(vlSelf->io_posit_i2_1),32);
    bufp->chgIData(oldp+255,(vlSelf->io_posit_i2_2),32);
    bufp->chgIData(oldp+256,(vlSelf->io_posit_i2_3),32);
    bufp->chgCData(oldp+257,(vlSelf->io_op),4);
    bufp->chgBit(oldp+258,(vlSelf->io_Isposit));
    bufp->chgBit(oldp+259,(vlSelf->io_Outposit));
    bufp->chgQData(oldp+260,(vlSelf->io_float_i_0),64);
    bufp->chgQData(oldp+262,(vlSelf->io_float_i_1),64);
    bufp->chgQData(oldp+264,(vlSelf->io_float_i_2),64);
    bufp->chgQData(oldp+266,(vlSelf->io_float_i_3),64);
    bufp->chgQData(oldp+268,(vlSelf->io_float_i2_0),64);
    bufp->chgQData(oldp+270,(vlSelf->io_float_i2_1),64);
    bufp->chgQData(oldp+272,(vlSelf->io_float_i2_2),64);
    bufp->chgQData(oldp+274,(vlSelf->io_float_i2_3),64);
    bufp->chgCData(oldp+276,(vlSelf->io_float_mode),3);
    bufp->chgBit(oldp+277,(vlSelf->io_float_posit));
    bufp->chgCData(oldp+278,(vlSelf->io_src_posit_width),6);
    bufp->chgCData(oldp+279,(vlSelf->io_vector_size),3);
    bufp->chgCData(oldp+280,(vlSelf->io_dst_posit_width),6);
    bufp->chgQData(oldp+281,(vlSelf->io_float_o_0),64);
    bufp->chgQData(oldp+283,(vlSelf->io_float_o_1),64);
    bufp->chgQData(oldp+285,(vlSelf->io_float_o_2),64);
    bufp->chgQData(oldp+287,(vlSelf->io_float_o_3),64);
    bufp->chgQData(oldp+289,(vlSelf->io_float_dot_o),64);
    bufp->chgIData(oldp+291,(vlSelf->io_posit_o_0),32);
    bufp->chgIData(oldp+292,(vlSelf->io_posit_o_1),32);
    bufp->chgIData(oldp+293,(vlSelf->io_posit_o_2),32);
    bufp->chgIData(oldp+294,(vlSelf->io_posit_o_3),32);
    bufp->chgIData(oldp+295,(vlSelf->io_posit_dot_o),32);
    bufp->chgIData(oldp+296,(vlSelf->io_int_o_0),32);
    bufp->chgIData(oldp+297,(vlSelf->io_int_o_1),32);
    bufp->chgIData(oldp+298,(vlSelf->io_int_o_2),32);
    bufp->chgIData(oldp+299,(vlSelf->io_int_o_3),32);
    __Vtemp_h15db7925__0[0U] = (IData)(((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0)
                                         ? vlSelf->__VdfgTmp_h46be9c78__0
                                         : 0ULL));
    __Vtemp_h15db7925__0[1U] = (((IData)(((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)
                                           ? vlSelf->__VdfgTmp_h43a98faf__0
                                           : 0ULL)) 
                                 << 1U) | (IData)((
                                                   ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                     ? vlSelf->__VdfgTmp_h46be9c78__0
                                                     : 0ULL) 
                                                   >> 0x20U)));
    __Vtemp_h15db7925__0[2U] = (((IData)(((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                           ? vlSelf->__VdfgTmp_haed5c1a2__0
                                           : 0ULL)) 
                                 << 2U) | (((IData)(
                                                    ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                      ? vlSelf->__VdfgTmp_h43a98faf__0
                                                      : 0ULL)) 
                                            >> 0x1fU) 
                                           | ((IData)(
                                                      (((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                         ? vlSelf->__VdfgTmp_h43a98faf__0
                                                         : 0ULL) 
                                                       >> 0x20U)) 
                                              << 1U)));
    __Vtemp_h15db7925__0[3U] = (((IData)(((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                           ? vlSelf->__VdfgTmp_h9c9ab370__0
                                           : 0ULL)) 
                                 << 3U) | (((IData)(
                                                    ((2U 
                                                      < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                      ? vlSelf->__VdfgTmp_haed5c1a2__0
                                                      : 0ULL)) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (((2U 
                                                         < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                         ? vlSelf->__VdfgTmp_haed5c1a2__0
                                                         : 0ULL) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h15db7925__0[4U] = (((IData)(((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                           ? vlSelf->__VdfgTmp_h9c9ab370__0
                                           : 0ULL)) 
                                 >> 0x1dU) | ((IData)(
                                                      (((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                         ? vlSelf->__VdfgTmp_h9c9ab370__0
                                                         : 0ULL) 
                                                       >> 0x20U)) 
                                              << 3U));
    bufp->chgWData(oldp+300,(__Vtemp_h15db7925__0),132);
    if (vlSelf->io_Isposit) {
        __Vtemp_h1b06671e__0[0U] = vlSelf->io_posit_i1_0;
        __Vtemp_h1b06671e__0[1U] = vlSelf->io_posit_i1_1;
        __Vtemp_h1b06671e__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_posit_i1_2))));
        __Vtemp_h1b06671e__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_posit_i1_2))) 
                                            >> 0x20U));
    } else {
        __Vtemp_h1b06671e__0[0U] = 0U;
        __Vtemp_h1b06671e__0[1U] = 0U;
        __Vtemp_h1b06671e__0[2U] = 0U;
        __Vtemp_h1b06671e__0[3U] = 0U;
    }
    bufp->chgWData(oldp+305,(__Vtemp_h1b06671e__0),128);
    bufp->chgIData(oldp+309,(((((8U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                 ? 0U : ((((1U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                            ? ((0x40000000U 
                                                & vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6)
                                                ? (0x1fU 
                                                   & (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                      - (IData)(1U)))
                                                : (0x20U 
                                                   | (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ 
                                                          vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                            : 0U) << 2U) 
                                         | ((1U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? (3U 
                                                & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                   >> 0x1dU))
                                             : 0U))) 
                               << 0x18U) | ((((4U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                               ? 0U
                                               : ((
                                                   ((1U 
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
                                             << 0x10U) 
                                            | ((((2U 
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
                                                << 8U) 
                                               | ((1U 
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
                                                       : 0U))))))),32);
    __Vtemp_h6dabf4ce__0[0U] = (IData)((((QData)((IData)(
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
                                         << 0x1cU) 
                                        | (QData)((IData)(
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
                                                                  >> 2U))))))));
    __Vtemp_h6dabf4ce__0[1U] = ((((4U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                 >> 2U)))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
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
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
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
                                                                                >> 2U))))))) 
                                                      >> 0x20U)));
    __Vtemp_h6dabf4ce__0[2U] = ((((8U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                 >> 2U)))) 
                                 << 0x14U) | (((4U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                         >> 2U)))) 
                                              >> 8U));
    __Vtemp_h6dabf4ce__0[3U] = (((8U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                  ? 0U : (((IData)(
                                                   (0U 
                                                    != vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6)) 
                                           << 0x1bU) 
                                          | (0x7ffffffU 
                                             & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                >> 2U)))) 
                                >> 0xcU);
    bufp->chgWData(oldp+310,(__Vtemp_h6dabf4ce__0),112);
    bufp->chgBit(oldp+314,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+315,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+316,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+317,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+318,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+319,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+320,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+321,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    if (vlSelf->io_Isposit) {
        __Vtemp_ha81f68f6__0[0U] = vlSelf->io_posit_i2_0;
        __Vtemp_ha81f68f6__0[1U] = vlSelf->io_posit_i2_1;
        __Vtemp_ha81f68f6__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_posit_i2_2))));
        __Vtemp_ha81f68f6__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                            >> 0x20U));
    } else {
        __Vtemp_ha81f68f6__0[0U] = 0U;
        __Vtemp_ha81f68f6__0[1U] = 0U;
        __Vtemp_ha81f68f6__0[2U] = 0U;
        __Vtemp_ha81f68f6__0[3U] = 0U;
    }
    bufp->chgWData(oldp+322,(__Vtemp_ha81f68f6__0),128);
    bufp->chgIData(oldp+326,(vlSelf->QvuTop__DOT__decode2__DOT__io_Exp),32);
    __Vtemp_hf607cc56__0[0U] = (IData)((((QData)((IData)(
                                                         ((2U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                 >> 2U)))))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                            ? 0U
                                                            : 
                                                           (((IData)(
                                                                     (0U 
                                                                      != vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6)) 
                                                             << 0x1bU) 
                                                            | (0x7ffffffU 
                                                               & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                  >> 2U))))))));
    __Vtemp_hf607cc56__0[1U] = ((((4U & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                 >> 2U)))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((2U 
                                                                          & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                                          ? 0U
                                                                          : 
                                                                         (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6)) 
                                                                           << 0x1bU) 
                                                                          | (0x7ffffffU 
                                                                             & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 2U)))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                                           ? 0U
                                                                           : 
                                                                          (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6)) 
                                                                            << 0x1bU) 
                                                                           | (0x7ffffffU 
                                                                              & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                                >> 2U))))))) 
                                                      >> 0x20U)));
    __Vtemp_hf607cc56__0[2U] = ((((8U & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                 >> 2U)))) 
                                 << 0x14U) | (((4U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                         >> 2U)))) 
                                              >> 8U));
    __Vtemp_hf607cc56__0[3U] = (((8U & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                  ? 0U : (((IData)(
                                                   (0U 
                                                    != vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6)) 
                                           << 0x1bU) 
                                          | (0x7ffffffU 
                                             & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                >> 2U)))) 
                                >> 0xcU);
    bufp->chgWData(oldp+327,(__Vtemp_hf607cc56__0),112);
    bufp->chgBit(oldp+331,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+332,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+333,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+334,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+335,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+336,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+337,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+338,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    if (vlSelf->io_Isposit) {
        __Vtemp_h4bbae0a6__0[0U] = 0U;
        __Vtemp_h4bbae0a6__0[1U] = 0U;
        __Vtemp_h4bbae0a6__0[2U] = 0U;
        __Vtemp_h4bbae0a6__0[3U] = 0U;
    } else {
        __Vtemp_h4bbae0a6__0[0U] = (IData)(vlSelf->io_float_i_0);
        __Vtemp_h4bbae0a6__0[1U] = (IData)(vlSelf->io_float_i_1);
        __Vtemp_h4bbae0a6__0[2U] = (IData)((((QData)((IData)(vlSelf->io_float_i_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_float_i_2))));
        __Vtemp_h4bbae0a6__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_float_i_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_float_i_2))) 
                                            >> 0x20U));
    }
    bufp->chgWData(oldp+339,(__Vtemp_h4bbae0a6__0),128);
    bufp->chgCData(oldp+343,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
                                      & (IData)((vlSelf->io_float_i_3 
                                                 >> 0x1fU))) 
                                     << 3U)) | ((4U 
                                                 & (((~ (IData)(vlSelf->io_Isposit)) 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_2 
                                                                >> 0x1fU))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((~ (IData)(vlSelf->io_Isposit)) 
                                                        & (IData)(
                                                                  (vlSelf->io_float_i_1 
                                                                   >> 0x1fU))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSelf->io_Isposit)) 
                                                         & (IData)(
                                                                   (vlSelf->io_float_i_0 
                                                                    >> 0x1fU)))))))),4);
    bufp->chgCData(oldp+344,(((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN) 
                              & ((((~ (IData)(vlSelf->io_Isposit)) 
                                   & (0U != (0x7fffffU 
                                             & (IData)(vlSelf->io_float_i_3)))) 
                                  << 3U) | ((((~ (IData)(vlSelf->io_Isposit)) 
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
                                                      & (IData)(vlSelf->io_float_i_0))))))))),4);
    if (vlSelf->io_Isposit) {
        __Vtemp_hbc5c8910__0[0U] = 0U;
        __Vtemp_hbc5c8910__0[1U] = 0U;
        __Vtemp_hbc5c8910__0[2U] = 0U;
        __Vtemp_hbc5c8910__0[3U] = 0U;
    } else {
        __Vtemp_hbc5c8910__0[0U] = (IData)(vlSelf->io_float_i2_0);
        __Vtemp_hbc5c8910__0[1U] = (IData)(vlSelf->io_float_i2_1);
        __Vtemp_hbc5c8910__0[2U] = (IData)((((QData)((IData)(vlSelf->io_float_i2_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_float_i2_2))));
        __Vtemp_hbc5c8910__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_float_i2_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_float_i2_2))) 
                                            >> 0x20U));
    }
    bufp->chgWData(oldp+345,(__Vtemp_hbc5c8910__0),128);
    bufp->chgCData(oldp+349,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
                                      & (IData)((vlSelf->io_float_i2_3 
                                                 >> 0x1fU))) 
                                     << 3U)) | ((4U 
                                                 & (((~ (IData)(vlSelf->io_Isposit)) 
                                                     & (IData)(
                                                               (vlSelf->io_float_i2_2 
                                                                >> 0x1fU))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((~ (IData)(vlSelf->io_Isposit)) 
                                                        & (IData)(
                                                                  (vlSelf->io_float_i2_1 
                                                                   >> 0x1fU))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSelf->io_Isposit)) 
                                                         & (IData)(
                                                                   (vlSelf->io_float_i2_0 
                                                                    >> 0x1fU)))))))),4);
    bufp->chgCData(oldp+350,(((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN) 
                              & ((((~ (IData)(vlSelf->io_Isposit)) 
                                   & (0U != (0x7fffffU 
                                             & (IData)(vlSelf->io_float_i2_3)))) 
                                  << 3U) | ((((~ (IData)(vlSelf->io_Isposit)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & (IData)(vlSelf->io_float_i2_2)))) 
                                             << 2U) 
                                            | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & (IData)(vlSelf->io_float_i2_1)))) 
                                                << 1U) 
                                               | ((~ (IData)(vlSelf->io_Isposit)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & (IData)(vlSelf->io_float_i2_0))))))))),4);
}

void VQvuTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_cleanup\n"); );
    // Init
    VQvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQvuTop___024root*>(voidSelf);
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
}
