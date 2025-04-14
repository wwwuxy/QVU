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
        bufp->chgCData(oldp+51,(vlSelf->QvuTop__DOT___GEN_6),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgCData(oldp+52,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+53,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o),31);
        bufp->chgCData(oldp+54,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+55,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgCData(oldp+60,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+61,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o),31);
        bufp->chgCData(oldp+62,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+63,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgCData(oldp+68,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+69,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o),31);
        bufp->chgCData(oldp+70,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+71,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgCData(oldp+76,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+77,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o),31);
        bufp->chgCData(oldp+78,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+79,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgCData(oldp+84,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+85,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),31);
        bufp->chgCData(oldp+86,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+87,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgCData(oldp+92,((0x1fU & ((IData)(1U) 
                                          + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+93,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),31);
        bufp->chgCData(oldp+94,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+95,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgCData(oldp+100,((0x1fU & ((IData)(1U) 
                                           + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+101,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),31);
        bufp->chgCData(oldp+102,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+103,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x13U]))) {
        bufp->chgCData(oldp+108,((0x1fU & ((IData)(1U) 
                                           + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+109,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
        bufp->chgCData(oldp+110,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+111,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
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
                      | vlSelf->__Vm_traceActivity[0x14U]) 
                     | vlSelf->__Vm_traceActivity[0x16U]))) {
        bufp->chgQData(oldp+125,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs),33);
        bufp->chgCData(oldp+127,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex),3);
        bufp->chgQData(oldp+128,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1),33);
        bufp->chgCData(oldp+130,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1),3);
        bufp->chgQData(oldp+131,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2),33);
        bufp->chgCData(oldp+133,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2),3);
        bufp->chgQData(oldp+134,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3),33);
        bufp->chgCData(oldp+136,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3),3);
        bufp->chgSData(oldp+137,(((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
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
        bufp->chgQData(oldp+138,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue),34);
        bufp->chgQData(oldp+140,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder),33);
        bufp->chgQData(oldp+142,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx),34);
        bufp->chgBit(oldp+144,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding));
        bufp->chgCData(oldp+145,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection),2);
        bufp->chgQData(oldp+146,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue),33);
        bufp->chgQData(oldp+148,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1),34);
        bufp->chgQData(oldp+150,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1),33);
        bufp->chgQData(oldp+152,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1),34);
        bufp->chgBit(oldp+154,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1));
        bufp->chgCData(oldp+155,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1),2);
        bufp->chgQData(oldp+156,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1),33);
        bufp->chgQData(oldp+158,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2),34);
        bufp->chgQData(oldp+160,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2),33);
        bufp->chgQData(oldp+162,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2),34);
        bufp->chgBit(oldp+164,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2));
        bufp->chgCData(oldp+165,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2),2);
        bufp->chgQData(oldp+166,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2),33);
        bufp->chgQData(oldp+168,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3),34);
        bufp->chgQData(oldp+170,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3),33);
        bufp->chgQData(oldp+172,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3),34);
        bufp->chgBit(oldp+174,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3));
        bufp->chgCData(oldp+175,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3),2);
        bufp->chgQData(oldp+176,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3),33);
        bufp->chgIData(oldp+178,(((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
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
        bufp->chgQData(oldp+179,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                   ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0
                                   : 0ULL)),34);
        bufp->chgQData(oldp+181,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder),33);
        bufp->chgBit(oldp+183,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding));
        bufp->chgQData(oldp+184,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                   ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0
                                   : 0ULL)),34);
        bufp->chgQData(oldp+186,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1),33);
        bufp->chgBit(oldp+188,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1));
        bufp->chgQData(oldp+189,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                   ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0
                                   : 0ULL)),34);
        bufp->chgQData(oldp+191,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2),33);
        bufp->chgBit(oldp+193,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2));
        bufp->chgQData(oldp+194,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                   ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0
                                   : 0ULL)),34);
        bufp->chgQData(oldp+196,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3),33);
        bufp->chgBit(oldp+198,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xbU] 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgWData(oldp+199,(vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i),132);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgWData(oldp+204,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax),264);
        bufp->chgWData(oldp+213,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin),264);
        bufp->chgCData(oldp+222,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid),8);
        bufp->chgCData(oldp+223,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr),3);
        bufp->chgQData(oldp+224,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax),33);
        bufp->chgQData(oldp+226,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin),33);
        bufp->chgQData(oldp+228,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale),33);
        bufp->chgQData(oldp+230,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax),33);
        bufp->chgQData(oldp+232,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin),33);
        bufp->chgBit(oldp+234,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData));
        bufp->chgCData(oldp+235,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__state),2);
        bufp->chgQData(oldp+236,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_leftMax),33);
        bufp->chgQData(oldp+238,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_rightMax),33);
        bufp->chgQData(oldp+240,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax),33);
        bufp->chgQData(oldp+242,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_leftMax),33);
        bufp->chgQData(oldp+244,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_rightMax),33);
        bufp->chgQData(oldp+246,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax),33);
        bufp->chgQData(oldp+248,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax),33);
        bufp->chgQData(oldp+250,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_leftMax),33);
        bufp->chgQData(oldp+252,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_rightMax),33);
        bufp->chgQData(oldp+254,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax),33);
        bufp->chgQData(oldp+256,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_leftMax),33);
        bufp->chgQData(oldp+258,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_rightMax),33);
        bufp->chgQData(oldp+260,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax),33);
        bufp->chgQData(oldp+262,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax),33);
        bufp->chgQData(oldp+264,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax),33);
        bufp->chgQData(oldp+266,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_leftMin),33);
        bufp->chgQData(oldp+268,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_rightMin),33);
        bufp->chgQData(oldp+270,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin),33);
        bufp->chgQData(oldp+272,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_leftMin),33);
        bufp->chgQData(oldp+274,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_rightMin),33);
        bufp->chgQData(oldp+276,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin),33);
        bufp->chgQData(oldp+278,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin),33);
        bufp->chgQData(oldp+280,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_leftMin),33);
        bufp->chgQData(oldp+282,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_rightMin),33);
        bufp->chgQData(oldp+284,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin),33);
        bufp->chgQData(oldp+286,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_leftMin),33);
        bufp->chgQData(oldp+288,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_rightMin),33);
        bufp->chgQData(oldp+290,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin),33);
        bufp->chgQData(oldp+292,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin),33);
        bufp->chgQData(oldp+294,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin),33);
        bufp->chgQData(oldp+296,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dataRange),33);
        bufp->chgQData(oldp+298,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax),33);
        bufp->chgQData(oldp+300,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin),33);
        bufp->chgQData(oldp+302,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale),33);
        bufp->chgQData(oldp+304,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset),33);
        bufp->chgQData(oldp+306,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax),33);
        bufp->chgQData(oldp+308,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin),33);
        bufp->chgBit(oldp+310,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData));
        bufp->chgCData(oldp+311,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state),2);
        bufp->chgWData(oldp+312,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram),128);
        bufp->chgIData(oldp+316,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal),20);
        bufp->chgIData(oldp+317,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold),23);
        bufp->chgQData(oldp+318,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_4),33);
        bufp->chgQData(oldp+320,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin),33);
        bufp->chgQData(oldp+322,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax),33);
        bufp->chgQData(oldp+324,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth),33);
        bufp->chgQData(oldp+326,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex),33);
        bufp->chgCData(oldp+328,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex),3);
        bufp->chgQData(oldp+329,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1),33);
        bufp->chgQData(oldp+331,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1),33);
        bufp->chgCData(oldp+333,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1),3);
        bufp->chgQData(oldp+334,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2),33);
        bufp->chgQData(oldp+336,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2),33);
        bufp->chgCData(oldp+338,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2),3);
        bufp->chgQData(oldp+339,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3),33);
        bufp->chgQData(oldp+341,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3),33);
        bufp->chgCData(oldp+343,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3),3);
        bufp->chgQData(oldp+344,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax),33);
        bufp->chgQData(oldp+346,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin),33);
        bufp->chgQData(oldp+348,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale),33);
        bufp->chgQData(oldp+350,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset),33);
        bufp->chgQData(oldp+352,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax),33);
        bufp->chgQData(oldp+354,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin),33);
        bufp->chgBit(oldp+356,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData));
        bufp->chgCData(oldp+357,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__state),2);
    }
    bufp->chgBit(oldp+358,(vlSelf->clock));
    bufp->chgBit(oldp+359,(vlSelf->reset));
    bufp->chgIData(oldp+360,(vlSelf->io_posit_i1_0),32);
    bufp->chgIData(oldp+361,(vlSelf->io_posit_i1_1),32);
    bufp->chgIData(oldp+362,(vlSelf->io_posit_i1_2),32);
    bufp->chgIData(oldp+363,(vlSelf->io_posit_i1_3),32);
    bufp->chgIData(oldp+364,(vlSelf->io_posit_i2_0),32);
    bufp->chgIData(oldp+365,(vlSelf->io_posit_i2_1),32);
    bufp->chgIData(oldp+366,(vlSelf->io_posit_i2_2),32);
    bufp->chgIData(oldp+367,(vlSelf->io_posit_i2_3),32);
    bufp->chgCData(oldp+368,(vlSelf->io_op),4);
    bufp->chgBit(oldp+369,(vlSelf->io_Isposit));
    bufp->chgBit(oldp+370,(vlSelf->io_Outposit));
    bufp->chgQData(oldp+371,(vlSelf->io_float_i_0),64);
    bufp->chgQData(oldp+373,(vlSelf->io_float_i_1),64);
    bufp->chgQData(oldp+375,(vlSelf->io_float_i_2),64);
    bufp->chgQData(oldp+377,(vlSelf->io_float_i_3),64);
    bufp->chgQData(oldp+379,(vlSelf->io_float_i2_0),64);
    bufp->chgQData(oldp+381,(vlSelf->io_float_i2_1),64);
    bufp->chgQData(oldp+383,(vlSelf->io_float_i2_2),64);
    bufp->chgQData(oldp+385,(vlSelf->io_float_i2_3),64);
    bufp->chgCData(oldp+387,(vlSelf->io_float_mode),3);
    bufp->chgBit(oldp+388,(vlSelf->io_float_posit));
    bufp->chgCData(oldp+389,(vlSelf->io_src_posit_width),6);
    bufp->chgCData(oldp+390,(vlSelf->io_vector_size),3);
    bufp->chgCData(oldp+391,(vlSelf->io_dst_posit_width),6);
    bufp->chgQData(oldp+392,(vlSelf->io_float_o_0),64);
    bufp->chgQData(oldp+394,(vlSelf->io_float_o_1),64);
    bufp->chgQData(oldp+396,(vlSelf->io_float_o_2),64);
    bufp->chgQData(oldp+398,(vlSelf->io_float_o_3),64);
    bufp->chgQData(oldp+400,(vlSelf->io_float_dot_o),64);
    bufp->chgIData(oldp+402,(vlSelf->io_posit_o_0),32);
    bufp->chgIData(oldp+403,(vlSelf->io_posit_o_1),32);
    bufp->chgIData(oldp+404,(vlSelf->io_posit_o_2),32);
    bufp->chgIData(oldp+405,(vlSelf->io_posit_o_3),32);
    bufp->chgIData(oldp+406,(vlSelf->io_posit_dot_o),32);
    bufp->chgIData(oldp+407,(vlSelf->io_int_o_0),32);
    bufp->chgIData(oldp+408,(vlSelf->io_int_o_1),32);
    bufp->chgIData(oldp+409,(vlSelf->io_int_o_2),32);
    bufp->chgIData(oldp+410,(vlSelf->io_int_o_3),32);
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
    bufp->chgWData(oldp+411,(__Vtemp_h1b06671e__0),128);
    bufp->chgIData(oldp+415,(((((8U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
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
    bufp->chgWData(oldp+416,(__Vtemp_h6dabf4ce__0),112);
    bufp->chgBit(oldp+420,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+421,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+422,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+423,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+424,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+425,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+426,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+427,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
    bufp->chgWData(oldp+428,(__Vtemp_ha81f68f6__0),128);
    bufp->chgIData(oldp+432,(vlSelf->QvuTop__DOT__decode2__DOT__io_Exp),32);
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
    bufp->chgWData(oldp+433,(__Vtemp_hf607cc56__0),112);
    bufp->chgBit(oldp+437,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+438,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+439,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+440,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+441,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+442,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+443,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+444,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
    bufp->chgWData(oldp+445,(__Vtemp_h4bbae0a6__0),128);
    bufp->chgCData(oldp+449,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
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
    bufp->chgCData(oldp+450,(((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN) 
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
    bufp->chgWData(oldp+451,(__Vtemp_hbc5c8910__0),128);
    bufp->chgCData(oldp+455,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
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
    bufp->chgCData(oldp+456,(((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN) 
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
    bufp->chgQData(oldp+457,((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                   >> 3U)))) 
                               << 0x3fU) | (((QData)((IData)(
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
                                                                    : 0U)))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                                    >> 2U)))) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(vlSelf->__VdfgTmp_h6db38b42__0)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0x80000000U 
                                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                                         << 0x1eU)) 
                                                                     | (((IData)(vlSelf->__VdfgTmp_h9981df73__0) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlSelf->__VdfgTmp_h92081510__0)))))))))),64);
    bufp->chgSData(oldp+459,(((((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd03ac44__0)
                                 ? ((0xfffffff8U & 
                                     ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
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
                                         << 3U))) | 
                                    ((0x27fffffULL 
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
                                 : 0U) << 0xcU) | (
                                                   (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0)
                                                      ? 
                                                     ((0xfffffff8U 
                                                       & (((IData)(vlSelf->QvuTop__DOT___GEN_6) 
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
                                                          ? 7U
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                           ? 6U
                                                           : 
                                                          ((5U 
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
                                                      : 0U) 
                                                    << 8U) 
                                                   | ((((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdee4f6f7__0)
                                                         ? 
                                                        ((0xfffffff8U 
                                                          & (((IData)(vlSelf->QvuTop__DOT___GEN_6) 
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
                                                             ? 7U
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                              ? 6U
                                                              : 
                                                             ((5U 
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
                                                         : 0U) 
                                                       << 4U) 
                                                      | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdbc354e5__0)
                                                          ? 
                                                         ((((IData)(vlSelf->QvuTop__DOT___GEN_6) 
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
                                                           << 3U) 
                                                          | ((0x27fffffULL 
                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                                              ? 7U
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                               ? 6U
                                                               : 
                                                              ((5U 
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
                                                          : 0U))))),16);
    bufp->chgIData(oldp+460,(((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                              << 0x1cU)) 
                              | (((((0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0) 
                                    | VL_GTS_III(8, 0xf9U, 
                                                 (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                  >> 0x18U)))
                                    ? 0U : ((VL_LTS_III(8, 8U, 
                                                        (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                         >> 0x18U)) 
                                             | VL_LTS_III(8, 0xeU, 
                                                          (0xffU 
                                                           & ((IData)(7U) 
                                                              + 
                                                              (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                               >> 0x18U)))))
                                             ? 0x78U
                                             : (((VL_GTS_III(8, 0U, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                  >> 0x18U))))
                                                   ? 0U
                                                   : 
                                                  (VL_LTS_III(8, 0xeU, 
                                                              (0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                   >> 0x18U))))
                                                    ? 0xeU
                                                    : 
                                                   (0xfU 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                        >> 0x18U))))) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                    ? 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h9c9ab370__0 
                                                               >> 0x1eU)))
                                                    : 0U)))) 
                                  << 0x18U) | ((0x800000U 
                                                & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                   << 0x15U)) 
                                               | (((((0ULL 
                                                      == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8ec3__0) 
                                                     | VL_GTS_III(8, 0xf9U, 
                                                                  (0xffU 
                                                                   & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                      >> 0x10U))))
                                                     ? 0U
                                                     : 
                                                    ((VL_LTS_III(8, 8U, 
                                                                 (0xffU 
                                                                  & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                     >> 0x10U))) 
                                                      | VL_LTS_III(8, 0xeU, 
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                        >> 0x10U)))))
                                                      ? 0x78U
                                                      : 
                                                     (((VL_GTS_III(8, 0U, 
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                        >> 0x10U))))
                                                         ? 0U
                                                         : 
                                                        (VL_LTS_III(8, 0xeU, 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                         >> 0x10U))))
                                                          ? 0xeU
                                                          : 
                                                         (0xfU 
                                                          & ((IData)(7U) 
                                                             + 
                                                             (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                              >> 0x10U))))) 
                                                       << 3U) 
                                                      | ((2U 
                                                          < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                          ? 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->__VdfgTmp_haed5c1a2__0 
                                                                     >> 0x1eU)))
                                                          : 0U)))) 
                                                   << 0x10U) 
                                                  | ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                         << 0xeU)) 
                                                     | (((((0ULL 
                                                            == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf4442__0) 
                                                           | VL_GTS_III(8, 0xf9U, 
                                                                        (0xffU 
                                                                         & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                            >> 8U))))
                                                           ? 0U
                                                           : 
                                                          ((VL_LTS_III(8, 8U, 
                                                                       (0xffU 
                                                                        & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                           >> 8U))) 
                                                            | VL_LTS_III(8, 0xeU, 
                                                                         (0xffU 
                                                                          & ((IData)(7U) 
                                                                             + 
                                                                             (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                              >> 8U)))))
                                                            ? 0x78U
                                                            : 
                                                           (((VL_GTS_III(8, 0U, 
                                                                         (0xffU 
                                                                          & ((IData)(7U) 
                                                                             + 
                                                                             (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                              >> 8U))))
                                                               ? 0U
                                                               : 
                                                              (VL_LTS_III(8, 0xeU, 
                                                                          (0xffU 
                                                                           & ((IData)(7U) 
                                                                              + 
                                                                              (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                               >> 8U))))
                                                                ? 0xeU
                                                                : 
                                                               (0xfU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                    >> 8U))))) 
                                                             << 3U) 
                                                            | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                ? 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSelf->__VdfgTmp_h43a98faf__0 
                                                                           >> 0x1eU)))
                                                                : 0U)))) 
                                                         << 8U) 
                                                        | ((0x80U 
                                                            & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                               << 7U)) 
                                                           | (((0ULL 
                                                                == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a634__0) 
                                                               | VL_GTS_III(8, 0xf9U, 
                                                                            (0xffU 
                                                                             & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
                                                               ? 0U
                                                               : 
                                                              ((VL_LTS_III(8, 8U, 
                                                                           (0xffU 
                                                                            & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)) 
                                                                | VL_LTS_III(8, 0xeU, 
                                                                             (0xffU 
                                                                              & ((IData)(7U) 
                                                                                + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i))))
                                                                ? 0x78U
                                                                : 
                                                               (((VL_GTS_III(8, 0U, 
                                                                             (0xffU 
                                                                              & ((IData)(7U) 
                                                                                + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
                                                                   ? 0U
                                                                   : 
                                                                  (VL_LTS_III(8, 0xeU, 
                                                                              (0xffU 
                                                                               & ((IData)(7U) 
                                                                                + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
                                                                    ? 0xeU
                                                                    : 
                                                                   (0xfU 
                                                                    & ((IData)(7U) 
                                                                       + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))) 
                                                                 << 3U) 
                                                                | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                    ? 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__VdfgTmp_h46be9c78__0 
                                                                               >> 0x1eU)))
                                                                    : 0U)))))))))))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
}
