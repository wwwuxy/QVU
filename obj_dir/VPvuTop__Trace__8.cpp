// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPvuTop__Syms.h"


void VPvuTop___024root__trace_chg_sub_8(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_chg_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 24016);
    VlWide<4>/*127:0*/ __Vtemp_h59e9f3e0__0;
    VlWide<4>/*127:0*/ __Vtemp_had0027f6__0;
    // Body
    __Vtemp_h59e9f3e0__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_h9ede8a21__0;
    __Vtemp_h59e9f3e0__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_h9f50fb9f__0;
    __Vtemp_h59e9f3e0__0[2U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9859deca__0)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9faf7d5c__0))));
    __Vtemp_h59e9f3e0__0[3U] = (IData)(((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9859deca__0)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9faf7d5c__0))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+0,(__Vtemp_h59e9f3e0__0),128);
    __Vtemp_had0027f6__0[0U] = ((0U == vlSelf->PvuTop__DOT__tranInt__DOT__result)
                                 ? 0U : (((1U == vlSelf->PvuTop__DOT__tranInt__DOT__result) 
                                          & (0x40000000U 
                                             == vlSelf->PvuTop__DOT__tranInt__DOT__raw_posit))
                                          ? 1U : ((
                                                   (0xffffffffU 
                                                    == vlSelf->PvuTop__DOT__tranInt__DOT__result) 
                                                   & (IData)(vlSelf->PvuTop__DOT__tranInt__DOT___GEN_4))
                                                   ? 0xffffffffU
                                                   : 
                                                  (vlSelf->PvuTop__DOT__tranInt__DOT__result 
                                                   - (IData)(1U)))));
    __Vtemp_had0027f6__0[1U] = ((0U == vlSelf->PvuTop__DOT__tranInt__DOT__result_1)
                                 ? 0U : (((1U == vlSelf->PvuTop__DOT__tranInt__DOT__result_1) 
                                          & (0x40000000U 
                                             == vlSelf->PvuTop__DOT__tranInt__DOT__raw_posit_1))
                                          ? 1U : ((
                                                   (0xffffffffU 
                                                    == vlSelf->PvuTop__DOT__tranInt__DOT__result_1) 
                                                   & (IData)(vlSelf->PvuTop__DOT__tranInt__DOT___GEN_10))
                                                   ? 0xffffffffU
                                                   : 
                                                  (vlSelf->PvuTop__DOT__tranInt__DOT__result_1 
                                                   - (IData)(1U)))));
    __Vtemp_had0027f6__0[2U] = (IData)((((QData)((IData)(
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__tranInt__DOT__result_3)
                                                           ? 0U
                                                           : 
                                                          (((1U 
                                                             == vlSelf->PvuTop__DOT__tranInt__DOT__result_3) 
                                                            & (0x40000000U 
                                                               == vlSelf->PvuTop__DOT__tranInt__DOT__raw_posit_3))
                                                            ? 1U
                                                            : 
                                                           (((0xffffffffU 
                                                              == vlSelf->PvuTop__DOT__tranInt__DOT__result_3) 
                                                             & (IData)(vlSelf->PvuTop__DOT__tranInt__DOT___GEN_22))
                                                             ? 0xffffffffU
                                                             : 
                                                            (vlSelf->PvuTop__DOT__tranInt__DOT__result_3 
                                                             - (IData)(1U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__tranInt__DOT__result_2)
                                                            ? 0U
                                                            : 
                                                           (((1U 
                                                              == vlSelf->PvuTop__DOT__tranInt__DOT__result_2) 
                                                             & (0x40000000U 
                                                                == vlSelf->PvuTop__DOT__tranInt__DOT__raw_posit_2))
                                                             ? 1U
                                                             : 
                                                            (((0xffffffffU 
                                                               == vlSelf->PvuTop__DOT__tranInt__DOT__result_2) 
                                                              & (IData)(vlSelf->PvuTop__DOT__tranInt__DOT___GEN_16))
                                                              ? 0xffffffffU
                                                              : 
                                                             (vlSelf->PvuTop__DOT__tranInt__DOT__result_2 
                                                              - (IData)(1U)))))))));
    __Vtemp_had0027f6__0[3U] = (IData)(((((QData)((IData)(
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__tranInt__DOT__result_3)
                                                            ? 0U
                                                            : 
                                                           (((1U 
                                                              == vlSelf->PvuTop__DOT__tranInt__DOT__result_3) 
                                                             & (0x40000000U 
                                                                == vlSelf->PvuTop__DOT__tranInt__DOT__raw_posit_3))
                                                             ? 1U
                                                             : 
                                                            (((0xffffffffU 
                                                               == vlSelf->PvuTop__DOT__tranInt__DOT__result_3) 
                                                              & (IData)(vlSelf->PvuTop__DOT__tranInt__DOT___GEN_22))
                                                              ? 0xffffffffU
                                                              : 
                                                             (vlSelf->PvuTop__DOT__tranInt__DOT__result_3 
                                                              - (IData)(1U))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((0U 
                                                             == vlSelf->PvuTop__DOT__tranInt__DOT__result_2)
                                                             ? 0U
                                                             : 
                                                            (((1U 
                                                               == vlSelf->PvuTop__DOT__tranInt__DOT__result_2) 
                                                              & (0x40000000U 
                                                                 == vlSelf->PvuTop__DOT__tranInt__DOT__raw_posit_2))
                                                              ? 1U
                                                              : 
                                                             (((0xffffffffU 
                                                                == vlSelf->PvuTop__DOT__tranInt__DOT__result_2) 
                                                               & (IData)(vlSelf->PvuTop__DOT__tranInt__DOT___GEN_16))
                                                               ? 0xffffffffU
                                                               : 
                                                              (vlSelf->PvuTop__DOT__tranInt__DOT__result_2 
                                                               - (IData)(1U)))))))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+4,(__Vtemp_had0027f6__0),128);
    bufp->chgIData(oldp+8,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_io_result_o),31);
    bufp->chgIData(oldp+9,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->chgIData(oldp+10,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->chgIData(oldp+11,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->chgBit(oldp+12,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+13,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+14,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+15,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+16,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+17,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+18,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+19,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+20,(vlSymsp->TOP__PvuTop__DOT__decode2.io_Exp),32);
    bufp->chgIData(oldp+21,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_io_result_o),31);
    bufp->chgIData(oldp+22,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->chgIData(oldp+23,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->chgIData(oldp+24,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->chgBit(oldp+25,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+26,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+27,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+28,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+29,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+30,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+31,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+32,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+33,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+37,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+38,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+39,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+40,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+41,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+42,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+43,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+44,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+45,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+49,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+50,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+51,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+52,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+53,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+54,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+55,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+56,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+57,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+61,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+62,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+63,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+64,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+65,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+66,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+67,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+68,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+69,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+73,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+74,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+75,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+76,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+77,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+78,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+79,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+80,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+81,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp),32);
    bufp->chgWData(oldp+82,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+86,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+87,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+88,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+89,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+90,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+91,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+92,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+93,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
    while ((__Vilp <= 0x93U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
