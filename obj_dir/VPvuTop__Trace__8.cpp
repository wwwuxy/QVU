// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPvuTop__Syms.h"


void VPvuTop___024root__trace_chg_sub_8(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_chg_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 24030);
    VlWide<4>/*127:0*/ __Vtemp_hadd908e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h06ddd436__0;
    VlWide<4>/*127:0*/ __Vtemp_h59e9f3e0__0;
    // Body
    __Vtemp_hadd908e9__0[0U] = (IData)((((QData)((IData)(
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                           ? 0U
                                                           : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                            ? 0U
                                                            : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)))));
    __Vtemp_hadd908e9__0[1U] = ((((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                   ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0U 
                                                                          == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                                          ? 0U
                                                                          : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((0U 
                                                                           == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                                           ? 0U
                                                                           : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)))) 
                                                      >> 0x20U)));
    __Vtemp_hadd908e9__0[2U] = ((((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                   ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0) 
                                 << 0x14U) | (((0U 
                                                == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                ? 0U
                                                : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0) 
                                              >> 8U));
    __Vtemp_hadd908e9__0[3U] = (((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                  ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0) 
                                >> 0xcU);
    bufp->chgWData(oldp+0,(__Vtemp_hadd908e9__0),112);
    bufp->chgBit(oldp+4,((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)));
    bufp->chgBit(oldp+5,((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)));
    bufp->chgBit(oldp+6,((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)));
    bufp->chgBit(oldp+7,((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)));
    bufp->chgIData(oldp+8,(((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                               ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                   ? 0U : (IData)(vlSelf->__VdfgTmp_h20089437__0))
                               : 0U) << 0x18U) | ((
                                                   ((2U 
                                                     < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                     ? 
                                                    ((0U 
                                                      == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                      ? 0U
                                                      : (IData)(vlSelf->__VdfgTmp_h59018146__0))
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                        ? 
                                                       ((0U 
                                                         == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                         ? 0U
                                                         : (IData)(vlSelf->__VdfgTmp_h2c94c8d9__0))
                                                        : 0U) 
                                                      << 8U) 
                                                     | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                         ? 
                                                        ((0U 
                                                          == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                          ? 0U
                                                          : (IData)(vlSelf->__VdfgTmp_h0a27806e__0))
                                                         : 0U))))),32);
    __Vtemp_h06ddd436__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                           ? 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                            ? 0U
                                                            : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                           : 0U))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                            ? 
                                                           ((0U 
                                                             == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                             ? 0U
                                                             : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                            : 0U)))));
    __Vtemp_h06ddd436__0[1U] = ((((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                   ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                       ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                   : 0U) << 0x18U) 
                                | (IData)(((((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                               ? 
                                                              ((0U 
                                                                == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                                ? 0U
                                                                : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                               : 0U))) 
                                             << 0x1cU) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                ? 
                                                               ((0U 
                                                                 == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                                 ? 0U
                                                                 : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                                : 0U)))) 
                                           >> 0x20U)));
    __Vtemp_h06ddd436__0[2U] = ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                   ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                       ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                   : 0U) << 0x14U) 
                                | (((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                     ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                         ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                     : 0U) >> 8U));
    __Vtemp_h06ddd436__0[3U] = (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                  ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                      ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                  : 0U) >> 0xcU);
    bufp->chgWData(oldp+9,(__Vtemp_h06ddd436__0),112);
    __Vtemp_h59e9f3e0__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_h9ede8a21__0;
    __Vtemp_h59e9f3e0__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_h9f50fb9f__0;
    __Vtemp_h59e9f3e0__0[2U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9859deca__0)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9faf7d5c__0))));
    __Vtemp_h59e9f3e0__0[3U] = (IData)(((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9859deca__0)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9faf7d5c__0))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+13,(__Vtemp_h59e9f3e0__0),128);
    bufp->chgIData(oldp+17,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_io_result_o),31);
    bufp->chgIData(oldp+18,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->chgIData(oldp+19,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->chgIData(oldp+20,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->chgBit(oldp+21,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+22,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+23,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+24,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+25,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+26,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+27,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+28,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+29,(vlSymsp->TOP__PvuTop__DOT__decode2.io_Exp),32);
    bufp->chgIData(oldp+30,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_io_result_o),31);
    bufp->chgIData(oldp+31,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->chgIData(oldp+32,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->chgIData(oldp+33,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->chgBit(oldp+34,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+35,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+36,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+37,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+38,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+39,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+40,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+41,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+42,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+46,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+47,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+48,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+49,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+50,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+51,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+52,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+53,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+54,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+58,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+59,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+60,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+61,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+62,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+63,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+64,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+65,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+66,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+70,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+71,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+72,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+73,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+74,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+75,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+76,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+77,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+78,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+82,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+83,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+84,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+85,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+86,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+87,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+88,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+89,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+90,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp),32);
    bufp->chgWData(oldp+91,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+95,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+96,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+97,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+98,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+99,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+100,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+101,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+102,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
}

void VPvuTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_cleanup\n"); );
    // Init
    VPvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPvuTop___024root*>(voidSelf);
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    IData/*31:0*/ __Vilp;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vilp = 0U;
    while ((__Vilp <= 0x94U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
