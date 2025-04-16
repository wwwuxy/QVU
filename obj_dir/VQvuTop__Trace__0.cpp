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

extern const VlWide<16>/*511:0*/ VQvuTop__ConstPool__CONST_h93e1b771_0;

void VQvuTop___024root__trace_chg_sub_0(VQvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<16>/*511:0*/ __Vtemp_hb473fa4f__0;
    VlWide<3>/*95:0*/ __Vtemp_hb9c394a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h30212936__0;
    VlWide<3>/*95:0*/ __Vtemp_hc5f9a6b7__0;
    VlWide<4>/*127:0*/ __Vtemp_h76de1cfc__0;
    VlWide<4>/*127:0*/ __Vtemp_hd79ae1c4__0;
    VlWide<14>/*447:0*/ __Vtemp_hd8e3ab57__0;
    VlWide<16>/*511:0*/ __Vtemp_hbf8b0890__0;
    VlWide<3>/*95:0*/ __Vtemp_h7fb1b112__0;
    VlWide<3>/*95:0*/ __Vtemp_hf815a4b1__0;
    VlWide<4>/*127:0*/ __Vtemp_h53a2d94e__0;
    VlWide<4>/*127:0*/ __Vtemp_h2d4cfaee__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE),5);
        bufp->chgSData(oldp+1,((((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcfb253e9__0) 
                                 << 0xfU) | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcf4be793__0) 
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
                                                                                | (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h244a7236__0))))))))))))))))),16);
        bufp->chgSData(oldp+2,(vlSelf->QvuTop__DOT__decode__DOT__isNaR),16);
        bufp->chgIData(oldp+3,(vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6),31);
        bufp->chgIData(oldp+4,(vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6),31);
        bufp->chgIData(oldp+5,(vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6),31);
        bufp->chgIData(oldp+6,(vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6),31);
        bufp->chgIData(oldp+7,(vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6),31);
        bufp->chgIData(oldp+8,(vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6),31);
        bufp->chgIData(oldp+9,(vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6),31);
        bufp->chgIData(oldp+10,(vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6),31);
        bufp->chgIData(oldp+11,(vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6),31);
        bufp->chgIData(oldp+12,(vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6),31);
        bufp->chgIData(oldp+13,(vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6),31);
        bufp->chgIData(oldp+14,(vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6),31);
        bufp->chgIData(oldp+15,(vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6),31);
        bufp->chgIData(oldp+16,(vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6),31);
        bufp->chgIData(oldp+17,(vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6),31);
        bufp->chgIData(oldp+18,(vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6),31);
        bufp->chgWData(oldp+19,(vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Exp),144);
        bufp->chgWData(oldp+24,(vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac),384);
        bufp->chgSData(oldp+36,(vlSelf->QvuTop__DOT__floatDecode__DOT__io_isNaN),16);
        bufp->chgSData(oldp+37,(((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT___GEN) 
                                 & (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT___GEN_0))),16);
        bufp->chgSData(oldp+38,(((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0)) 
                                   << 0xfU) | (((0U 
                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0)) 
                                                << 0xeU) 
                                               | (((0U 
                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0)) 
                                                   << 0xdU) 
                                                  | (((0U 
                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0)) 
                                                      << 0xcU) 
                                                     | (((0U 
                                                          == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0)) 
                                                         << 0xbU) 
                                                        | (((0U 
                                                             == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0)) 
                                                            << 0xaU) 
                                                           | (((0U 
                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0)) 
                                                               << 9U) 
                                                              | (((0U 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0)) 
                                                                  << 8U) 
                                                                 | (((0U 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0)) 
                                                                     << 7U) 
                                                                    | (((0U 
                                                                         == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0)) 
                                                                        << 6U) 
                                                                       | (((0U 
                                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0)) 
                                                                           << 5U) 
                                                                          | (((0U 
                                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0)) 
                                                                              << 4U) 
                                                                             | (((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0)) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))))))))))))))))) 
                                 & (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT___GEN_0))),16);
        bufp->chgBit(oldp+39,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))));
        bufp->chgBit(oldp+40,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))));
        bufp->chgBit(oldp+41,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))));
        bufp->chgBit(oldp+42,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))));
        bufp->chgBit(oldp+43,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))));
        bufp->chgBit(oldp+44,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))));
        bufp->chgBit(oldp+45,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))));
        bufp->chgBit(oldp+46,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))));
        bufp->chgBit(oldp+47,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0))));
        bufp->chgBit(oldp+48,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0))));
        bufp->chgBit(oldp+49,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0))));
        bufp->chgBit(oldp+50,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0))));
        bufp->chgBit(oldp+51,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0))));
        bufp->chgBit(oldp+52,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0))));
        bufp->chgBit(oldp+53,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0))));
        bufp->chgBit(oldp+54,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0))));
        bufp->chgSData(oldp+55,(vlSelf->QvuTop__DOT___GEN_7),16);
        bufp->chgIData(oldp+56,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6))),31);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+58,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6))),31);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+60,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6))),31);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+62,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6))),31);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+64,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6))),31);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+66,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6))),31);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+68,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6))),31);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+70,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6))),31);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+72,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6))),31);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+74,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6))),31);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+76,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6))),31);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+78,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6))),31);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+80,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6))),31);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+82,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6))),31);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+84,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6))),31);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__in_tmp),31);
        bufp->chgIData(oldp+86,((0x7fffffffU & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6))),31);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__in_tmp),31);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgCData(oldp+88,((0x1fU & ((IData)(1U) 
                                          + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+89,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o),31);
        bufp->chgCData(oldp+90,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+91,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgCData(oldp+96,((0x1fU & ((IData)(1U) 
                                          + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+97,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o),31);
        bufp->chgCData(oldp+98,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+99,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x16U]))) {
        bufp->chgCData(oldp+104,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+105,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o),31);
        bufp->chgCData(oldp+106,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+107,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgCData(oldp+112,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+113,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o),31);
        bufp->chgCData(oldp+114,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+115,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0x18U]))) {
        bufp->chgCData(oldp+120,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+121,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o),31);
        bufp->chgCData(oldp+122,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+123,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x19U]))) {
        bufp->chgCData(oldp+128,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+129,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o),31);
        bufp->chgCData(oldp+130,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+131,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x1aU]))) {
        bufp->chgCData(oldp+136,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+137,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o),31);
        bufp->chgCData(oldp+138,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+139,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x1bU]))) {
        bufp->chgCData(oldp+144,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+145,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o),31);
        bufp->chgCData(oldp+146,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+147,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x1cU]))) {
        bufp->chgCData(oldp+152,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+153,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o),31);
        bufp->chgCData(oldp+154,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+155,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xbU] 
                     | vlSelf->__Vm_traceActivity[0x1dU]))) {
        bufp->chgCData(oldp+160,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+161,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o),31);
        bufp->chgCData(oldp+162,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+163,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xcU] 
                     | vlSelf->__Vm_traceActivity[0x1eU]))) {
        bufp->chgCData(oldp+168,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+169,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o),31);
        bufp->chgCData(oldp+170,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+171,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xdU] 
                     | vlSelf->__Vm_traceActivity[0x1fU]))) {
        bufp->chgCData(oldp+176,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+177,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o),31);
        bufp->chgCData(oldp+178,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+179,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xeU] 
                     | vlSelf->__Vm_traceActivity[0x20U]))) {
        bufp->chgCData(oldp+184,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+185,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o),31);
        bufp->chgCData(oldp+186,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+187,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xfU] 
                     | vlSelf->__Vm_traceActivity[0x21U]))) {
        bufp->chgCData(oldp+192,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+193,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o),31);
        bufp->chgCData(oldp+194,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+195,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x10U] 
                     | vlSelf->__Vm_traceActivity[0x22U]))) {
        bufp->chgCData(oldp+200,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+201,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o),31);
        bufp->chgCData(oldp+202,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+203,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x11U] 
                     | vlSelf->__Vm_traceActivity[0x23U]))) {
        bufp->chgCData(oldp+208,((0x1fU & ((IData)(1U) 
                                           + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
        bufp->chgIData(oldp+209,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o),31);
        bufp->chgCData(oldp+210,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+211,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x12U] 
                     | vlSelf->__Vm_traceActivity[0x24U]))) {
        bufp->chgWData(oldp+216,(vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i),128);
        bufp->chgWData(oldp+220,(vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o),256);
        bufp->chgWData(oldp+228,(vlSelf->QvuTop__DOT____Vcellout__quantizeFP8__io_fp8_o),128);
        bufp->chgCData(oldp+232,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal),6);
        bufp->chgIData(oldp+233,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac),32);
        bufp->chgCData(oldp+234,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1),6);
        bufp->chgIData(oldp+235,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_1),32);
        bufp->chgCData(oldp+236,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2),6);
        bufp->chgIData(oldp+237,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_2),32);
        bufp->chgCData(oldp+238,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3),6);
        bufp->chgIData(oldp+239,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_3),32);
        bufp->chgCData(oldp+240,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4),6);
        bufp->chgIData(oldp+241,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_4),32);
        bufp->chgCData(oldp+242,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5),6);
        bufp->chgIData(oldp+243,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_5),32);
        bufp->chgCData(oldp+244,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6),6);
        bufp->chgIData(oldp+245,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_6),32);
        bufp->chgCData(oldp+246,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7),6);
        bufp->chgIData(oldp+247,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_7),32);
        bufp->chgCData(oldp+248,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8),6);
        bufp->chgIData(oldp+249,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_8),32);
        bufp->chgCData(oldp+250,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9),6);
        bufp->chgIData(oldp+251,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_9),32);
        bufp->chgCData(oldp+252,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10),6);
        bufp->chgIData(oldp+253,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_10),32);
        bufp->chgCData(oldp+254,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11),6);
        bufp->chgIData(oldp+255,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_11),32);
        bufp->chgCData(oldp+256,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12),6);
        bufp->chgIData(oldp+257,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_12),32);
        bufp->chgCData(oldp+258,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13),6);
        bufp->chgIData(oldp+259,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_13),32);
        bufp->chgCData(oldp+260,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14),6);
        bufp->chgIData(oldp+261,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_14),32);
        bufp->chgCData(oldp+262,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15),6);
        bufp->chgIData(oldp+263,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_15),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[0x12U] 
                      | vlSelf->__Vm_traceActivity[0x24U]) 
                     | vlSelf->__Vm_traceActivity[0x26U]))) {
        bufp->chgQData(oldp+264,(vlSelf->QvuTop__DOT____Vcellout__quantizeFP4__io_fp4_o),64);
        bufp->chgQData(oldp+266,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs),33);
        bufp->chgCData(oldp+268,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex),3);
        bufp->chgQData(oldp+269,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1),33);
        bufp->chgCData(oldp+271,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1),3);
        bufp->chgQData(oldp+272,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2),33);
        bufp->chgCData(oldp+274,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2),3);
        bufp->chgQData(oldp+275,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3),33);
        bufp->chgCData(oldp+277,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3),3);
        bufp->chgQData(oldp+278,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4),33);
        bufp->chgCData(oldp+280,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4),3);
        bufp->chgQData(oldp+281,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5),33);
        bufp->chgCData(oldp+283,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5),3);
        bufp->chgQData(oldp+284,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6),33);
        bufp->chgCData(oldp+286,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6),3);
        bufp->chgQData(oldp+287,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7),33);
        bufp->chgCData(oldp+289,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7),3);
        bufp->chgQData(oldp+290,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8),33);
        bufp->chgCData(oldp+292,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8),3);
        bufp->chgQData(oldp+293,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9),33);
        bufp->chgCData(oldp+295,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9),3);
        bufp->chgQData(oldp+296,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10),33);
        bufp->chgCData(oldp+298,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10),3);
        bufp->chgQData(oldp+299,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11),33);
        bufp->chgCData(oldp+301,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11),3);
        bufp->chgQData(oldp+302,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12),33);
        bufp->chgCData(oldp+304,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12),3);
        bufp->chgQData(oldp+305,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13),33);
        bufp->chgCData(oldp+307,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13),3);
        bufp->chgQData(oldp+308,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14),33);
        bufp->chgCData(oldp+310,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14),3);
        bufp->chgQData(oldp+311,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15),33);
        bufp->chgCData(oldp+313,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15),3);
        bufp->chgQData(oldp+314,((((QData)((IData)(
                                                   ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)
                                                     ? 0U
                                                     : 
                                                    (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15)
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
                                                        & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0)))))))) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)
                                                                   ? 0U
                                                                   : 
                                                                  (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14)
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
                                                                      & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0)))))))) 
                                                 << 0x38U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)
                                                                      ? 0U
                                                                      : 
                                                                     (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13)
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
                                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0)))))))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)
                                                                         ? 0U
                                                                         : 
                                                                        (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12)
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
                                                                            & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0)))))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)
                                                                            ? 0U
                                                                            : 
                                                                           (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11)
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
                                                                               & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0)))))))) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)
                                                                               ? 0U
                                                                               : 
                                                                              (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10)
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
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0)))))))) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0)))))))) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0)))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0)))))) 
                                                                                << 0x1cU) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0)))))) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0)))))) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0)))))) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0)))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)
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
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)
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
                                                                                | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)
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
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0)))))))))))))))))))))))),64);
        bufp->chgQData(oldp+316,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue),34);
        bufp->chgQData(oldp+318,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder),33);
        bufp->chgQData(oldp+320,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx),34);
        bufp->chgBit(oldp+322,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding));
        bufp->chgCData(oldp+323,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection),2);
        bufp->chgQData(oldp+324,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue),33);
        bufp->chgQData(oldp+326,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1),34);
        bufp->chgQData(oldp+328,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1),33);
        bufp->chgQData(oldp+330,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1),34);
        bufp->chgBit(oldp+332,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1));
        bufp->chgCData(oldp+333,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1),2);
        bufp->chgQData(oldp+334,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1),33);
        bufp->chgQData(oldp+336,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2),34);
        bufp->chgQData(oldp+338,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2),33);
        bufp->chgQData(oldp+340,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2),34);
        bufp->chgBit(oldp+342,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2));
        bufp->chgCData(oldp+343,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2),2);
        bufp->chgQData(oldp+344,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2),33);
        bufp->chgQData(oldp+346,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3),34);
        bufp->chgQData(oldp+348,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3),33);
        bufp->chgQData(oldp+350,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3),34);
        bufp->chgBit(oldp+352,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3));
        bufp->chgCData(oldp+353,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3),2);
        bufp->chgQData(oldp+354,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3),33);
        bufp->chgQData(oldp+356,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4),34);
        bufp->chgQData(oldp+358,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4),33);
        bufp->chgQData(oldp+360,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4),34);
        bufp->chgBit(oldp+362,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4));
        bufp->chgCData(oldp+363,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_4),2);
        bufp->chgQData(oldp+364,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4),33);
        bufp->chgQData(oldp+366,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5),34);
        bufp->chgQData(oldp+368,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5),33);
        bufp->chgQData(oldp+370,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5),34);
        bufp->chgBit(oldp+372,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5));
        bufp->chgCData(oldp+373,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_5),2);
        bufp->chgQData(oldp+374,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5),33);
        bufp->chgQData(oldp+376,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6),34);
        bufp->chgQData(oldp+378,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6),33);
        bufp->chgQData(oldp+380,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6),34);
        bufp->chgBit(oldp+382,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6));
        bufp->chgCData(oldp+383,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_6),2);
        bufp->chgQData(oldp+384,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6),33);
        bufp->chgQData(oldp+386,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7),34);
        bufp->chgQData(oldp+388,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7),33);
        bufp->chgQData(oldp+390,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7),34);
        bufp->chgBit(oldp+392,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7));
        bufp->chgCData(oldp+393,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_7),2);
        bufp->chgQData(oldp+394,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7),33);
        bufp->chgQData(oldp+396,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8),34);
        bufp->chgQData(oldp+398,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8),33);
        bufp->chgQData(oldp+400,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8),34);
        bufp->chgBit(oldp+402,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8));
        bufp->chgCData(oldp+403,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_8),2);
        bufp->chgQData(oldp+404,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8),33);
        bufp->chgQData(oldp+406,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9),34);
        bufp->chgQData(oldp+408,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9),33);
        bufp->chgQData(oldp+410,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9),34);
        bufp->chgBit(oldp+412,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9));
        bufp->chgCData(oldp+413,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_9),2);
        bufp->chgQData(oldp+414,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9),33);
        bufp->chgQData(oldp+416,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10),34);
        bufp->chgQData(oldp+418,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10),33);
        bufp->chgQData(oldp+420,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10),34);
        bufp->chgBit(oldp+422,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10));
        bufp->chgCData(oldp+423,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_10),2);
        bufp->chgQData(oldp+424,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10),33);
        bufp->chgQData(oldp+426,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11),34);
        bufp->chgQData(oldp+428,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11),33);
        bufp->chgQData(oldp+430,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11),34);
        bufp->chgBit(oldp+432,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11));
        bufp->chgCData(oldp+433,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_11),2);
        bufp->chgQData(oldp+434,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11),33);
        bufp->chgQData(oldp+436,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12),34);
        bufp->chgQData(oldp+438,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12),33);
        bufp->chgQData(oldp+440,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12),34);
        bufp->chgBit(oldp+442,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12));
        bufp->chgCData(oldp+443,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_12),2);
        bufp->chgQData(oldp+444,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12),33);
        bufp->chgQData(oldp+446,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13),34);
        bufp->chgQData(oldp+448,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13),33);
        bufp->chgQData(oldp+450,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13),34);
        bufp->chgBit(oldp+452,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13));
        bufp->chgCData(oldp+453,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_13),2);
        bufp->chgQData(oldp+454,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13),33);
        bufp->chgQData(oldp+456,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14),34);
        bufp->chgQData(oldp+458,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14),33);
        bufp->chgQData(oldp+460,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14),34);
        bufp->chgBit(oldp+462,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14));
        bufp->chgCData(oldp+463,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_14),2);
        bufp->chgQData(oldp+464,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14),33);
        bufp->chgQData(oldp+466,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15),34);
        bufp->chgQData(oldp+468,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15),33);
        bufp->chgQData(oldp+470,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15),34);
        bufp->chgBit(oldp+472,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15));
        bufp->chgCData(oldp+473,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_15),2);
        bufp->chgQData(oldp+474,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15),33);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x13U] 
                     | vlSelf->__Vm_traceActivity[0x25U]))) {
        bufp->chgWData(oldp+476,(vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i),528);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x26U])) {
        bufp->chgCData(oldp+493,(vlSelf->QvuTop__DOT__resetCounter),5);
        bufp->chgWData(oldp+494,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax),264);
        bufp->chgWData(oldp+503,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin),264);
        bufp->chgCData(oldp+512,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid),8);
        bufp->chgCData(oldp+513,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr),3);
        bufp->chgQData(oldp+514,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax),33);
        bufp->chgQData(oldp+516,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin),33);
        bufp->chgQData(oldp+518,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale),33);
        bufp->chgQData(oldp+520,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax),33);
        bufp->chgQData(oldp+522,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin),33);
        bufp->chgBit(oldp+524,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData));
        bufp->chgCData(oldp+525,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__state),2);
        bufp->chgQData(oldp+526,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_leftMax),33);
        bufp->chgQData(oldp+528,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_rightMax),33);
        bufp->chgQData(oldp+530,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax),33);
        bufp->chgQData(oldp+532,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_leftMax),33);
        bufp->chgQData(oldp+534,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_rightMax),33);
        bufp->chgQData(oldp+536,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax),33);
        bufp->chgQData(oldp+538,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax),33);
        bufp->chgQData(oldp+540,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_leftMax),33);
        bufp->chgQData(oldp+542,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_rightMax),33);
        bufp->chgQData(oldp+544,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax),33);
        bufp->chgQData(oldp+546,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_leftMax),33);
        bufp->chgQData(oldp+548,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_rightMax),33);
        bufp->chgQData(oldp+550,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax),33);
        bufp->chgQData(oldp+552,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax),33);
        bufp->chgQData(oldp+554,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax),33);
        bufp->chgQData(oldp+556,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_leftMin),33);
        bufp->chgQData(oldp+558,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_rightMin),33);
        bufp->chgQData(oldp+560,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin),33);
        bufp->chgQData(oldp+562,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_leftMin),33);
        bufp->chgQData(oldp+564,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_rightMin),33);
        bufp->chgQData(oldp+566,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin),33);
        bufp->chgQData(oldp+568,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin),33);
        bufp->chgQData(oldp+570,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_leftMin),33);
        bufp->chgQData(oldp+572,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_rightMin),33);
        bufp->chgQData(oldp+574,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin),33);
        bufp->chgQData(oldp+576,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_leftMin),33);
        bufp->chgQData(oldp+578,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_rightMin),33);
        bufp->chgQData(oldp+580,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin),33);
        bufp->chgQData(oldp+582,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin),33);
        bufp->chgQData(oldp+584,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin),33);
        bufp->chgQData(oldp+586,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dataRange),33);
        bufp->chgQData(oldp+588,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax),33);
        bufp->chgQData(oldp+590,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin),33);
        bufp->chgQData(oldp+592,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale),33);
        bufp->chgQData(oldp+594,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset),33);
        bufp->chgQData(oldp+596,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax),33);
        bufp->chgQData(oldp+598,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin),33);
        bufp->chgBit(oldp+600,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData));
        bufp->chgCData(oldp+601,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state),2);
        bufp->chgWData(oldp+602,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram),128);
        bufp->chgIData(oldp+606,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal),20);
        bufp->chgIData(oldp+607,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold),23);
        bufp->chgQData(oldp+608,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_16),33);
        bufp->chgQData(oldp+610,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin),33);
        bufp->chgQData(oldp+612,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax),33);
        bufp->chgQData(oldp+614,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth),33);
        bufp->chgQData(oldp+616,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex),33);
        bufp->chgCData(oldp+618,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex),3);
        bufp->chgQData(oldp+619,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1),33);
        bufp->chgQData(oldp+621,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1),33);
        bufp->chgCData(oldp+623,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1),3);
        bufp->chgQData(oldp+624,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2),33);
        bufp->chgQData(oldp+626,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2),33);
        bufp->chgCData(oldp+628,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2),3);
        bufp->chgQData(oldp+629,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3),33);
        bufp->chgQData(oldp+631,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3),33);
        bufp->chgCData(oldp+633,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3),3);
        bufp->chgQData(oldp+634,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4),33);
        bufp->chgQData(oldp+636,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_4),33);
        bufp->chgCData(oldp+638,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4),3);
        bufp->chgQData(oldp+639,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5),33);
        bufp->chgQData(oldp+641,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_5),33);
        bufp->chgCData(oldp+643,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5),3);
        bufp->chgQData(oldp+644,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6),33);
        bufp->chgQData(oldp+646,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_6),33);
        bufp->chgCData(oldp+648,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6),3);
        bufp->chgQData(oldp+649,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7),33);
        bufp->chgQData(oldp+651,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_7),33);
        bufp->chgCData(oldp+653,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7),3);
        bufp->chgQData(oldp+654,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8),33);
        bufp->chgQData(oldp+656,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_8),33);
        bufp->chgCData(oldp+658,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8),3);
        bufp->chgQData(oldp+659,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9),33);
        bufp->chgQData(oldp+661,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_9),33);
        bufp->chgCData(oldp+663,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9),3);
        bufp->chgQData(oldp+664,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10),33);
        bufp->chgQData(oldp+666,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_10),33);
        bufp->chgCData(oldp+668,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10),3);
        bufp->chgQData(oldp+669,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11),33);
        bufp->chgQData(oldp+671,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_11),33);
        bufp->chgCData(oldp+673,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11),3);
        bufp->chgQData(oldp+674,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12),33);
        bufp->chgQData(oldp+676,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_12),33);
        bufp->chgCData(oldp+678,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12),3);
        bufp->chgQData(oldp+679,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13),33);
        bufp->chgQData(oldp+681,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_13),33);
        bufp->chgCData(oldp+683,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13),3);
        bufp->chgQData(oldp+684,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14),33);
        bufp->chgQData(oldp+686,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_14),33);
        bufp->chgCData(oldp+688,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14),3);
        bufp->chgQData(oldp+689,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15),33);
        bufp->chgQData(oldp+691,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_15),33);
        bufp->chgCData(oldp+693,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15),3);
    }
    bufp->chgBit(oldp+694,(vlSelf->clock));
    bufp->chgBit(oldp+695,(vlSelf->reset));
    bufp->chgIData(oldp+696,(vlSelf->io_posit_i_0),32);
    bufp->chgIData(oldp+697,(vlSelf->io_posit_i_1),32);
    bufp->chgIData(oldp+698,(vlSelf->io_posit_i_2),32);
    bufp->chgIData(oldp+699,(vlSelf->io_posit_i_3),32);
    bufp->chgIData(oldp+700,(vlSelf->io_posit_i_4),32);
    bufp->chgIData(oldp+701,(vlSelf->io_posit_i_5),32);
    bufp->chgIData(oldp+702,(vlSelf->io_posit_i_6),32);
    bufp->chgIData(oldp+703,(vlSelf->io_posit_i_7),32);
    bufp->chgIData(oldp+704,(vlSelf->io_posit_i_8),32);
    bufp->chgIData(oldp+705,(vlSelf->io_posit_i_9),32);
    bufp->chgIData(oldp+706,(vlSelf->io_posit_i_10),32);
    bufp->chgIData(oldp+707,(vlSelf->io_posit_i_11),32);
    bufp->chgIData(oldp+708,(vlSelf->io_posit_i_12),32);
    bufp->chgIData(oldp+709,(vlSelf->io_posit_i_13),32);
    bufp->chgIData(oldp+710,(vlSelf->io_posit_i_14),32);
    bufp->chgIData(oldp+711,(vlSelf->io_posit_i_15),32);
    bufp->chgCData(oldp+712,(vlSelf->io_op),4);
    bufp->chgBit(oldp+713,(vlSelf->io_Isposit));
    bufp->chgBit(oldp+714,(vlSelf->io_Outposit));
    bufp->chgQData(oldp+715,(vlSelf->io_float_i_0),64);
    bufp->chgQData(oldp+717,(vlSelf->io_float_i_1),64);
    bufp->chgQData(oldp+719,(vlSelf->io_float_i_2),64);
    bufp->chgQData(oldp+721,(vlSelf->io_float_i_3),64);
    bufp->chgQData(oldp+723,(vlSelf->io_float_i_4),64);
    bufp->chgQData(oldp+725,(vlSelf->io_float_i_5),64);
    bufp->chgQData(oldp+727,(vlSelf->io_float_i_6),64);
    bufp->chgQData(oldp+729,(vlSelf->io_float_i_7),64);
    bufp->chgQData(oldp+731,(vlSelf->io_float_i_8),64);
    bufp->chgQData(oldp+733,(vlSelf->io_float_i_9),64);
    bufp->chgQData(oldp+735,(vlSelf->io_float_i_10),64);
    bufp->chgQData(oldp+737,(vlSelf->io_float_i_11),64);
    bufp->chgQData(oldp+739,(vlSelf->io_float_i_12),64);
    bufp->chgQData(oldp+741,(vlSelf->io_float_i_13),64);
    bufp->chgQData(oldp+743,(vlSelf->io_float_i_14),64);
    bufp->chgQData(oldp+745,(vlSelf->io_float_i_15),64);
    bufp->chgCData(oldp+747,(vlSelf->io_float_mode),3);
    bufp->chgBit(oldp+748,(vlSelf->io_float_posit));
    bufp->chgCData(oldp+749,(vlSelf->io_src_posit_width),6);
    bufp->chgCData(oldp+750,(vlSelf->io_vector_size),3);
    bufp->chgCData(oldp+751,(vlSelf->io_dst_posit_width),6);
    bufp->chgQData(oldp+752,(vlSelf->io_float_o_0),64);
    bufp->chgQData(oldp+754,(vlSelf->io_float_o_1),64);
    bufp->chgQData(oldp+756,(vlSelf->io_float_o_2),64);
    bufp->chgQData(oldp+758,(vlSelf->io_float_o_3),64);
    bufp->chgQData(oldp+760,(vlSelf->io_float_o_4),64);
    bufp->chgQData(oldp+762,(vlSelf->io_float_o_5),64);
    bufp->chgQData(oldp+764,(vlSelf->io_float_o_6),64);
    bufp->chgQData(oldp+766,(vlSelf->io_float_o_7),64);
    bufp->chgQData(oldp+768,(vlSelf->io_float_o_8),64);
    bufp->chgQData(oldp+770,(vlSelf->io_float_o_9),64);
    bufp->chgQData(oldp+772,(vlSelf->io_float_o_10),64);
    bufp->chgQData(oldp+774,(vlSelf->io_float_o_11),64);
    bufp->chgQData(oldp+776,(vlSelf->io_float_o_12),64);
    bufp->chgQData(oldp+778,(vlSelf->io_float_o_13),64);
    bufp->chgQData(oldp+780,(vlSelf->io_float_o_14),64);
    bufp->chgQData(oldp+782,(vlSelf->io_float_o_15),64);
    bufp->chgIData(oldp+784,(vlSelf->io_posit_o_0),32);
    bufp->chgIData(oldp+785,(vlSelf->io_posit_o_1),32);
    bufp->chgIData(oldp+786,(vlSelf->io_posit_o_2),32);
    bufp->chgIData(oldp+787,(vlSelf->io_posit_o_3),32);
    bufp->chgIData(oldp+788,(vlSelf->io_posit_o_4),32);
    bufp->chgIData(oldp+789,(vlSelf->io_posit_o_5),32);
    bufp->chgIData(oldp+790,(vlSelf->io_posit_o_6),32);
    bufp->chgIData(oldp+791,(vlSelf->io_posit_o_7),32);
    bufp->chgIData(oldp+792,(vlSelf->io_posit_o_8),32);
    bufp->chgIData(oldp+793,(vlSelf->io_posit_o_9),32);
    bufp->chgIData(oldp+794,(vlSelf->io_posit_o_10),32);
    bufp->chgIData(oldp+795,(vlSelf->io_posit_o_11),32);
    bufp->chgIData(oldp+796,(vlSelf->io_posit_o_12),32);
    bufp->chgIData(oldp+797,(vlSelf->io_posit_o_13),32);
    bufp->chgIData(oldp+798,(vlSelf->io_posit_o_14),32);
    bufp->chgIData(oldp+799,(vlSelf->io_posit_o_15),32);
    bufp->chgIData(oldp+800,(vlSelf->io_int_o_0),32);
    bufp->chgIData(oldp+801,(vlSelf->io_int_o_1),32);
    bufp->chgIData(oldp+802,(vlSelf->io_int_o_2),32);
    bufp->chgIData(oldp+803,(vlSelf->io_int_o_3),32);
    bufp->chgIData(oldp+804,(vlSelf->io_int_o_4),32);
    bufp->chgIData(oldp+805,(vlSelf->io_int_o_5),32);
    bufp->chgIData(oldp+806,(vlSelf->io_int_o_6),32);
    bufp->chgIData(oldp+807,(vlSelf->io_int_o_7),32);
    bufp->chgIData(oldp+808,(vlSelf->io_int_o_8),32);
    bufp->chgIData(oldp+809,(vlSelf->io_int_o_9),32);
    bufp->chgIData(oldp+810,(vlSelf->io_int_o_10),32);
    bufp->chgIData(oldp+811,(vlSelf->io_int_o_11),32);
    bufp->chgIData(oldp+812,(vlSelf->io_int_o_12),32);
    bufp->chgIData(oldp+813,(vlSelf->io_int_o_13),32);
    bufp->chgIData(oldp+814,(vlSelf->io_int_o_14),32);
    bufp->chgIData(oldp+815,(vlSelf->io_int_o_15),32);
    bufp->chgBit(oldp+816,(vlSelf->io_reset_window));
    if (vlSelf->io_Isposit) {
        __Vtemp_hb473fa4f__0[0U] = vlSelf->io_posit_i_0;
        __Vtemp_hb473fa4f__0[1U] = vlSelf->io_posit_i_1;
        __Vtemp_hb473fa4f__0[2U] = vlSelf->io_posit_i_2;
        __Vtemp_hb473fa4f__0[3U] = vlSelf->io_posit_i_3;
        __Vtemp_hb473fa4f__0[4U] = vlSelf->io_posit_i_4;
        __Vtemp_hb473fa4f__0[5U] = vlSelf->io_posit_i_5;
        __Vtemp_hb473fa4f__0[6U] = vlSelf->io_posit_i_6;
        __Vtemp_hb473fa4f__0[7U] = vlSelf->io_posit_i_7;
        __Vtemp_hb473fa4f__0[8U] = vlSelf->io_posit_i_8;
        __Vtemp_hb473fa4f__0[9U] = vlSelf->io_posit_i_9;
        __Vtemp_hb473fa4f__0[0xaU] = vlSelf->io_posit_i_10;
        __Vtemp_hb473fa4f__0[0xbU] = vlSelf->io_posit_i_11;
        __Vtemp_hb473fa4f__0[0xcU] = vlSelf->io_posit_i_12;
        __Vtemp_hb473fa4f__0[0xdU] = vlSelf->io_posit_i_13;
        __Vtemp_hb473fa4f__0[0xeU] = (IData)((((QData)((IData)(vlSelf->io_posit_i_15)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->io_posit_i_14))));
        __Vtemp_hb473fa4f__0[0xfU] = (IData)(((((QData)((IData)(vlSelf->io_posit_i_15)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->io_posit_i_14))) 
                                              >> 0x20U));
    } else {
        __Vtemp_hb473fa4f__0[0U] = VQvuTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hb473fa4f__0[1U] = VQvuTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hb473fa4f__0[2U] = VQvuTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hb473fa4f__0[3U] = VQvuTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hb473fa4f__0[4U] = VQvuTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hb473fa4f__0[5U] = VQvuTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hb473fa4f__0[6U] = VQvuTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hb473fa4f__0[7U] = VQvuTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hb473fa4f__0[8U] = VQvuTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hb473fa4f__0[9U] = VQvuTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hb473fa4f__0[0xaU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hb473fa4f__0[0xbU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hb473fa4f__0[0xcU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hb473fa4f__0[0xdU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hb473fa4f__0[0xeU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hb473fa4f__0[0xfU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    bufp->chgWData(oldp+817,(__Vtemp_hb473fa4f__0),512);
    __Vtemp_hb9c394a1__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x80U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          ((((1U 
                                                              & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((0x40000000U 
                                                               & vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6)
                                                               ? 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                  - (IData)(1U)))
                                                               : 
                                                              (0x20U 
                                                               | (0x1fU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (~ 
                                                                      vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                              : 0U) 
                                                            << 2U) 
                                                           | ((1U 
                                                               & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                               ? 
                                                              (3U 
                                                               & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
                                                                  >> 0x1dU))
                                                               : 0U))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((0x40U 
                                                              & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                              ? 0U
                                                              : 
                                                             ((((1U 
                                                                 & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((0x40000000U 
                                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)
                                                                  ? 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                     - (IData)(1U)))
                                                                  : 
                                                                 (0x20U 
                                                                  | (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (~ 
                                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                 : 0U) 
                                                               << 2U) 
                                                              | ((1U 
                                                                  & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 (3U 
                                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                                     >> 0x1dU))
                                                                  : 0U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((0x20U 
                                                                 & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                 ? 0U
                                                                 : 
                                                                ((((1U 
                                                                    & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((0x40000000U 
                                                                     & vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                        - (IData)(1U)))
                                                                     : 
                                                                    (0x20U 
                                                                     | (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (~ 
                                                                            vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                    : 0U) 
                                                                  << 2U) 
                                                                 | ((1U 
                                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    (3U 
                                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                                        >> 0x1dU))
                                                                     : 0U))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((0x10U 
                                                                    & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                    ? 0U
                                                                    : 
                                                                   ((((1U 
                                                                       & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((0x40000000U 
                                                                        & vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)
                                                                        ? 
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                           - (IData)(1U)))
                                                                        : 
                                                                       (0x20U 
                                                                        | (0x1fU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (~ 
                                                                               vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                       : 0U) 
                                                                     << 2U) 
                                                                    | ((1U 
                                                                        & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       (3U 
                                                                        & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                                           >> 0x1dU))
                                                                        : 0U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                       ? 0U
                                                                       : 
                                                                      ((((1U 
                                                                          & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((0x40000000U 
                                                                           & vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)
                                                                           ? 
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              - (IData)(1U)))
                                                                           : 
                                                                          (0x20U 
                                                                           | (0x1fU 
                                                                              & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                          : 0U) 
                                                                        << 2U) 
                                                                       | ((1U 
                                                                           & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          (3U 
                                                                           & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                                              >> 0x1dU))
                                                                           : 0U))) 
                                                                     << 0x18U) 
                                                                    | ((((4U 
                                                                          & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                          ? 0U
                                                                          : 
                                                                         ((((1U 
                                                                             & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((0x40000000U 
                                                                              & vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)
                                                                              ? 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                              : 
                                                                             (0x20U 
                                                                              | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                             : 0U) 
                                                                           << 2U) 
                                                                          | ((1U 
                                                                              & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             (3U 
                                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                                                >> 0x1dU))
                                                                              : 0U))) 
                                                                        << 0x10U) 
                                                                       | ((((2U 
                                                                             & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                             ? 0U
                                                                             : 
                                                                            ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                : 0U) 
                                                                              << 2U) 
                                                                             | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U))) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                              ? 0U
                                                                              : 
                                                                             ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                               << 2U) 
                                                                              | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U)))))))))))));
    __Vtemp_hb9c394a1__0[1U] = (IData)(((((QData)((IData)(
                                                          ((0x80U 
                                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                            ? 0U
                                                            : 
                                                           ((((1U 
                                                               & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                               ? 
                                                              ((0x40000000U 
                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6)
                                                                ? 
                                                               (0x1fU 
                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                   - (IData)(1U)))
                                                                : 
                                                               (0x20U 
                                                                | (0x1fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (~ 
                                                                       vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                               : 0U) 
                                                             << 2U) 
                                                            | ((1U 
                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                                ? 
                                                               (3U 
                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
                                                                   >> 0x1dU))
                                                                : 0U))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((0x40U 
                                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                               ? 0U
                                                               : 
                                                              ((((1U 
                                                                  & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((0x40000000U 
                                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)
                                                                   ? 
                                                                  (0x1fU 
                                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                      - (IData)(1U)))
                                                                   : 
                                                                  (0x20U 
                                                                   | (0x1fU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                  : 0U) 
                                                                << 2U) 
                                                               | ((1U 
                                                                   & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                   ? 
                                                                  (3U 
                                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                                      >> 0x1dU))
                                                                   : 0U))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((0x20U 
                                                                  & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                  ? 0U
                                                                  : 
                                                                 ((((1U 
                                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((0x40000000U 
                                                                      & vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)
                                                                      ? 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                         - (IData)(1U)))
                                                                      : 
                                                                     (0x20U 
                                                                      | (0x1fU 
                                                                         & ((IData)(1U) 
                                                                            + 
                                                                            (~ 
                                                                             vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                     : 0U) 
                                                                   << 2U) 
                                                                  | ((1U 
                                                                      & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                      ? 
                                                                     (3U 
                                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                                         >> 0x1dU))
                                                                      : 0U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                     ? 0U
                                                                     : 
                                                                    ((((1U 
                                                                        & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((0x40000000U 
                                                                         & vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                            - (IData)(1U)))
                                                                         : 
                                                                        (0x20U 
                                                                         | (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                        : 0U) 
                                                                      << 2U) 
                                                                     | ((1U 
                                                                         & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                         ? 
                                                                        (3U 
                                                                         & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                                            >> 0x1dU))
                                                                         : 0U))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                        ? 0U
                                                                        : 
                                                                       ((((1U 
                                                                           & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((0x40000000U 
                                                                            & vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)
                                                                            ? 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                               - (IData)(1U)))
                                                                            : 
                                                                           (0x20U 
                                                                            | (0x1fU 
                                                                               & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                           : 0U) 
                                                                         << 2U) 
                                                                        | ((1U 
                                                                            & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                            ? 
                                                                           (3U 
                                                                            & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                                               >> 0x1dU))
                                                                            : 0U))) 
                                                                      << 0x18U) 
                                                                     | ((((4U 
                                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                           ? 0U
                                                                           : 
                                                                          ((((1U 
                                                                              & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((0x40000000U 
                                                                               & vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)
                                                                               ? 
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                               : 
                                                                              (0x20U 
                                                                               | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                              : 0U) 
                                                                            << 2U) 
                                                                           | ((1U 
                                                                               & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                               ? 
                                                                              (3U 
                                                                               & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                                                >> 0x1dU))
                                                                               : 0U))) 
                                                                         << 0x10U) 
                                                                        | ((((2U 
                                                                              & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                              ? 0U
                                                                              : 
                                                                             ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                               << 2U) 
                                                                              | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U))) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                               ? 0U
                                                                               : 
                                                                              ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                                << 2U) 
                                                                               | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U)))))))))))) 
                                        >> 0x20U));
    __Vtemp_h30212936__0[2U] = ((((0x200U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes)
                                              ? ((0x40000000U 
                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                     - (IData)(1U)))
                                                  : 
                                                 (0x20U 
                                                  | (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                              : 0U) 
                                            << 2U) 
                                           | ((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o 
                                                     >> 0x1dU))
                                               : 0U))) 
                                 << 8U) | ((0x100U 
                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                            ? 0U : 
                                           ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? ((0x40000000U 
                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      - (IData)(1U)))
                                                   : 
                                                  (0x20U 
                                                   | (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ 
                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                               : 0U) 
                                             << 2U) 
                                            | ((1U 
                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes)
                                                ? (3U 
                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o 
                                                      >> 0x1dU))
                                                : 0U))));
    __Vtemp_hc5f9a6b7__0[2U] = ((((0x800U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes)
                                              ? ((0x40000000U 
                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                     - (IData)(1U)))
                                                  : 
                                                 (0x20U 
                                                  | (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                              : 0U) 
                                            << 2U) 
                                           | ((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o 
                                                     >> 0x1dU))
                                               : 0U))) 
                                 << 0x18U) | ((((0x400U 
                                                 & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                 ? 0U
                                                 : 
                                                ((((1U 
                                                    & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6)
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                        - (IData)(1U)))
                                                     : 
                                                    (0x20U 
                                                     | (0x1fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ 
                                                            vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                    : 0U) 
                                                  << 2U) 
                                                 | ((1U 
                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes)
                                                     ? 
                                                    (3U 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o 
                                                        >> 0x1dU))
                                                     : 0U))) 
                                               << 0x10U) 
                                              | __Vtemp_h30212936__0[2U]));
    __Vtemp_h76de1cfc__0[3U] = ((((0x2000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes)
                                              ? ((0x40000000U 
                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                     - (IData)(1U)))
                                                  : 
                                                 (0x20U 
                                                  | (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                              : 0U) 
                                            << 2U) 
                                           | ((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o 
                                                     >> 0x1dU))
                                               : 0U))) 
                                 << 8U) | ((0x1000U 
                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                            ? 0U : 
                                           ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? ((0x40000000U 
                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      - (IData)(1U)))
                                                   : 
                                                  (0x20U 
                                                   | (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ 
                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                               : 0U) 
                                             << 2U) 
                                            | ((1U 
                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes)
                                                ? (3U 
                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o 
                                                      >> 0x1dU))
                                                : 0U))));
    __Vtemp_hd79ae1c4__0[0U] = __Vtemp_hb9c394a1__0[0U];
    __Vtemp_hd79ae1c4__0[1U] = __Vtemp_hb9c394a1__0[1U];
    __Vtemp_hd79ae1c4__0[2U] = __Vtemp_hc5f9a6b7__0[2U];
    __Vtemp_hd79ae1c4__0[3U] = ((((0x8000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes)
                                              ? ((0x40000000U 
                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                     - (IData)(1U)))
                                                  : 
                                                 (0x20U 
                                                  | (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                              : 0U) 
                                            << 2U) 
                                           | ((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o 
                                                     >> 0x1dU))
                                               : 0U))) 
                                 << 0x18U) | ((((0x4000U 
                                                 & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                 ? 0U
                                                 : 
                                                ((((1U 
                                                    & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6)
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                        - (IData)(1U)))
                                                     : 
                                                    (0x20U 
                                                     | (0x1fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ 
                                                            vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                    : 0U) 
                                                  << 2U) 
                                                 | ((1U 
                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes)
                                                     ? 
                                                    (3U 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o 
                                                        >> 0x1dU))
                                                     : 0U))) 
                                               << 0x10U) 
                                              | __Vtemp_h76de1cfc__0[3U]));
    bufp->chgWData(oldp+833,(__Vtemp_hd79ae1c4__0),128);
    __Vtemp_hd8e3ab57__0[0U] = (IData)((((QData)((IData)(
                                                         ((2U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                 >> 2U)))))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                            ? 0U
                                                            : 
                                                           (((IData)(
                                                                     (0U 
                                                                      != vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)) 
                                                             << 0x1bU) 
                                                            | (0x7ffffffU 
                                                               & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                  >> 2U))))))));
    __Vtemp_hd8e3ab57__0[1U] = ((((4U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                 >> 2U)))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((2U 
                                                                          & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                          ? 0U
                                                                          : 
                                                                         (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)) 
                                                                           << 0x1bU) 
                                                                          | (0x7ffffffU 
                                                                             & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 2U)))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                           ? 0U
                                                                           : 
                                                                          (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)) 
                                                                            << 0x1bU) 
                                                                           | (0x7ffffffU 
                                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                                >> 2U))))))) 
                                                      >> 0x20U)));
    __Vtemp_hd8e3ab57__0[2U] = ((((8U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                 >> 2U)))) 
                                 << 0x14U) | (((4U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                         >> 2U)))) 
                                              >> 8U));
    __Vtemp_hd8e3ab57__0[3U] = ((((0x10U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                 >> 2U)))) 
                                 << 0x10U) | (((8U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                         >> 2U)))) 
                                              >> 0xcU));
    __Vtemp_hd8e3ab57__0[4U] = ((((0x20U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                 >> 2U)))) 
                                 << 0xcU) | (((0x10U 
                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                               ? 0U
                                               : (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                        >> 2U)))) 
                                             >> 0x10U));
    __Vtemp_hd8e3ab57__0[5U] = ((((0x40U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                 >> 2U)))) 
                                 << 8U) | (((0x20U 
                                             & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                             ? 0U : 
                                            (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                   >> 2U)))) 
                                           >> 0x14U));
    __Vtemp_hd8e3ab57__0[6U] = ((((0x80U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
                                                 >> 2U)))) 
                                 << 4U) | (((0x40U 
                                             & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                             ? 0U : 
                                            (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                   >> 2U)))) 
                                           >> 0x18U));
    __Vtemp_hd8e3ab57__0[7U] = ((((0x200U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o 
                                                 >> 2U)))) 
                                 << 0x1cU) | ((0x100U 
                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                               ? 0U
                                               : (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o 
                                                        >> 2U)))));
    __Vtemp_hd8e3ab57__0[8U] = ((((0x400U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o 
                                                 >> 2U)))) 
                                 << 0x18U) | (((0x200U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o 
                                                         >> 2U)))) 
                                              >> 4U));
    __Vtemp_hd8e3ab57__0[9U] = ((((0x800U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o 
                                                 >> 2U)))) 
                                 << 0x14U) | (((0x400U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o 
                                                         >> 2U)))) 
                                              >> 8U));
    __Vtemp_hd8e3ab57__0[0xaU] = ((((0x1000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                     ? 0U : (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o 
                                                   >> 2U)))) 
                                   << 0x10U) | (((0x800U 
                                                  & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                  ? 0U
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o 
                                                        >> 2U)))) 
                                                >> 0xcU));
    __Vtemp_hd8e3ab57__0[0xbU] = ((((0x2000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                     ? 0U : (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o 
                                                   >> 2U)))) 
                                   << 0xcU) | (((0x1000U 
                                                 & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                 ? 0U
                                                 : 
                                                (((IData)(
                                                          (0U 
                                                           != vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6)) 
                                                  << 0x1bU) 
                                                 | (0x7ffffffU 
                                                    & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o 
                                                       >> 2U)))) 
                                               >> 0x10U));
    __Vtemp_hd8e3ab57__0[0xcU] = ((((0x4000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                     ? 0U : (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o 
                                                   >> 2U)))) 
                                   << 8U) | (((0x2000U 
                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                               ? 0U
                                               : (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o 
                                                        >> 2U)))) 
                                             >> 0x14U));
    __Vtemp_hd8e3ab57__0[0xdU] = ((((0x8000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                     ? 0U : (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o 
                                                   >> 2U)))) 
                                   << 4U) | (((0x4000U 
                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                               ? 0U
                                               : (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o 
                                                        >> 2U)))) 
                                             >> 0x18U));
    bufp->chgWData(oldp+837,(__Vtemp_hd8e3ab57__0),448);
    if (vlSelf->io_Isposit) {
        __Vtemp_hbf8b0890__0[0U] = VQvuTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hbf8b0890__0[1U] = VQvuTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hbf8b0890__0[2U] = VQvuTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hbf8b0890__0[3U] = VQvuTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hbf8b0890__0[4U] = VQvuTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hbf8b0890__0[5U] = VQvuTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hbf8b0890__0[6U] = VQvuTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hbf8b0890__0[7U] = VQvuTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hbf8b0890__0[8U] = VQvuTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hbf8b0890__0[9U] = VQvuTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hbf8b0890__0[0xaU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hbf8b0890__0[0xbU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hbf8b0890__0[0xcU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hbf8b0890__0[0xdU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hbf8b0890__0[0xeU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hbf8b0890__0[0xfU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else {
        __Vtemp_hbf8b0890__0[0U] = (IData)(vlSelf->io_float_i_0);
        __Vtemp_hbf8b0890__0[1U] = (IData)(vlSelf->io_float_i_1);
        __Vtemp_hbf8b0890__0[2U] = (IData)(vlSelf->io_float_i_2);
        __Vtemp_hbf8b0890__0[3U] = (IData)(vlSelf->io_float_i_3);
        __Vtemp_hbf8b0890__0[4U] = (IData)(vlSelf->io_float_i_4);
        __Vtemp_hbf8b0890__0[5U] = (IData)(vlSelf->io_float_i_5);
        __Vtemp_hbf8b0890__0[6U] = (IData)(vlSelf->io_float_i_6);
        __Vtemp_hbf8b0890__0[7U] = (IData)(vlSelf->io_float_i_7);
        __Vtemp_hbf8b0890__0[8U] = (IData)(vlSelf->io_float_i_8);
        __Vtemp_hbf8b0890__0[9U] = (IData)(vlSelf->io_float_i_9);
        __Vtemp_hbf8b0890__0[0xaU] = (IData)(vlSelf->io_float_i_10);
        __Vtemp_hbf8b0890__0[0xbU] = (IData)(vlSelf->io_float_i_11);
        __Vtemp_hbf8b0890__0[0xcU] = (IData)(vlSelf->io_float_i_12);
        __Vtemp_hbf8b0890__0[0xdU] = (IData)(vlSelf->io_float_i_13);
        __Vtemp_hbf8b0890__0[0xeU] = (IData)((((QData)((IData)(vlSelf->io_float_i_15)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->io_float_i_14))));
        __Vtemp_hbf8b0890__0[0xfU] = (IData)(((((QData)((IData)(vlSelf->io_float_i_15)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->io_float_i_14))) 
                                              >> 0x20U));
    }
    bufp->chgWData(oldp+851,(__Vtemp_hbf8b0890__0),512);
    bufp->chgSData(oldp+867,(((0x8000U & (((~ (IData)(vlSelf->io_Isposit)) 
                                           & (IData)(
                                                     (vlSelf->io_float_i_15 
                                                      >> 0x1fU))) 
                                          << 0xfU)) 
                              | ((0x4000U & (((~ (IData)(vlSelf->io_Isposit)) 
                                              & (IData)(
                                                        (vlSelf->io_float_i_14 
                                                         >> 0x1fU))) 
                                             << 0xeU)) 
                                 | ((0x2000U & (((~ (IData)(vlSelf->io_Isposit)) 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_13 
                                                            >> 0x1fU))) 
                                                << 0xdU)) 
                                    | ((0x1000U & (
                                                   ((~ (IData)(vlSelf->io_Isposit)) 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_12 
                                                               >> 0x1fU))) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (((~ (IData)(vlSelf->io_Isposit)) 
                                             & (IData)(
                                                       (vlSelf->io_float_i_11 
                                                        >> 0x1fU))) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & (((~ (IData)(vlSelf->io_Isposit)) 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_10 
                                                             >> 0x1fU))) 
                                                 << 0xaU)) 
                                             | ((0x200U 
                                                 & (((~ (IData)(vlSelf->io_Isposit)) 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_9 
                                                                >> 0x1fU))) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & (((~ (IData)(vlSelf->io_Isposit)) 
                                                        & (IData)(
                                                                  (vlSelf->io_float_i_8 
                                                                   >> 0x1fU))) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & (((~ (IData)(vlSelf->io_Isposit)) 
                                                           & (IData)(
                                                                     (vlSelf->io_float_i_7 
                                                                      >> 0x1fU))) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & (((~ (IData)(vlSelf->io_Isposit)) 
                                                              & (IData)(
                                                                        (vlSelf->io_float_i_6 
                                                                         >> 0x1fU))) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & (((~ (IData)(vlSelf->io_Isposit)) 
                                                                 & (IData)(
                                                                           (vlSelf->io_float_i_5 
                                                                            >> 0x1fU))) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & (((~ (IData)(vlSelf->io_Isposit)) 
                                                                    & (IData)(
                                                                              (vlSelf->io_float_i_4 
                                                                               >> 0x1fU))) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & (((~ (IData)(vlSelf->io_Isposit)) 
                                                                       & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0x1fU))) 
                                                                      << 3U)) 
                                                                  | ((4U 
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
                                                                                >> 0x1fU)))))))))))))))))))),16);
    __Vtemp_h7fb1b112__0[0U] = (IData)((((QData)((IData)(
                                                         (VL_LTS_IQQ(33, 0x7fULL, 
                                                                     ((0ULL 
                                                                       == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                       ? 0ULL
                                                                       : 0x1ffffff9cULL))
                                                           ? 0x7fU
                                                           : 
                                                          (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                      ((0ULL 
                                                                        == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                        ? 0ULL
                                                                        : 0x1ffffff9cULL))
                                                            ? 0x80U
                                                            : 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                             ? 0U
                                                             : 0x9cU))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (VL_LTS_IQQ(33, 0x7fULL, 
                                                                        ((0ULL 
                                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                          ? 0ULL
                                                                          : 0x64ULL))
                                                              ? 0x7fU
                                                              : 
                                                             (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                         ((0ULL 
                                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                           ? 0ULL
                                                                           : 0x64ULL))
                                                               ? 0x80U
                                                               : 
                                                              ((0ULL 
                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                ? 0U
                                                                : 0x64U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (VL_LTS_IQQ(33, 0x7fULL, 
                                                                           ((0ULL 
                                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                             ? 0ULL
                                                                             : 0x1ffffffe0ULL))
                                                                 ? 0x7fU
                                                                 : 
                                                                (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                            ((0ULL 
                                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                              ? 0ULL
                                                                              : 0x1ffffffe0ULL))
                                                                  ? 0x80U
                                                                  : 
                                                                 ((0ULL 
                                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                   ? 0U
                                                                   : 0xe0U))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                                    ? 0x7fU
                                                                    : 
                                                                   (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                                     ? 0x80U
                                                                     : 
                                                                    ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                     << 5U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffffc0ULL))
                                                                       ? 0x7fU
                                                                       : 
                                                                      (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffffc0ULL))
                                                                        ? 0x80U
                                                                        : 
                                                                       ((0ULL 
                                                                         == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                         ? 0U
                                                                         : 0xc0U))) 
                                                                     << 0x18U) 
                                                                    | (((VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                                          ? 0x7fU
                                                                          : 
                                                                         (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                                           ? 0x80U
                                                                           : 
                                                                          ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                           << 6U))) 
                                                                        << 0x10U) 
                                                                       | (((VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffff80ULL))
                                                                             ? 0x7fU
                                                                             : 
                                                                            (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffff80ULL))
                                                                              ? 0x80U
                                                                              : 
                                                                             ((0ULL 
                                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                               ? 0U
                                                                               : 0x80U))) 
                                                                           << 8U) 
                                                                          | (VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0ULL
                                                                                 : 0x7fULL))
                                                                              ? 0x7fU
                                                                              : 
                                                                             (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0ULL
                                                                                 : 0x7fULL))
                                                                               ? 0x80U
                                                                               : 
                                                                              ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                ? 0U
                                                                                : 0x7fU)))))))))))));
    __Vtemp_h7fb1b112__0[1U] = (IData)(((((QData)((IData)(
                                                          (VL_LTS_IQQ(33, 0x7fULL, 
                                                                      ((0ULL 
                                                                        == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                        ? 0ULL
                                                                        : 0x1ffffff9cULL))
                                                            ? 0x7fU
                                                            : 
                                                           (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                       ((0ULL 
                                                                         == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                         ? 0ULL
                                                                         : 0x1ffffff9cULL))
                                                             ? 0x80U
                                                             : 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                              ? 0U
                                                              : 0x9cU))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (VL_LTS_IQQ(33, 0x7fULL, 
                                                                         ((0ULL 
                                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                           ? 0ULL
                                                                           : 0x64ULL))
                                                               ? 0x7fU
                                                               : 
                                                              (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                          ((0ULL 
                                                                            == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                            ? 0ULL
                                                                            : 0x64ULL))
                                                                ? 0x80U
                                                                : 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                 ? 0U
                                                                 : 0x64U))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (VL_LTS_IQQ(33, 0x7fULL, 
                                                                            ((0ULL 
                                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                              ? 0ULL
                                                                              : 0x1ffffffe0ULL))
                                                                  ? 0x7fU
                                                                  : 
                                                                 (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                             ((0ULL 
                                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                               ? 0ULL
                                                                               : 0x1ffffffe0ULL))
                                                                   ? 0x80U
                                                                   : 
                                                                  ((0ULL 
                                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                    ? 0U
                                                                    : 0xe0U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                                     ? 0x7fU
                                                                     : 
                                                                    (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                                      ? 0x80U
                                                                      : 
                                                                     ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                      << 5U))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffffc0ULL))
                                                                        ? 0x7fU
                                                                        : 
                                                                       (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffffc0ULL))
                                                                         ? 0x80U
                                                                         : 
                                                                        ((0ULL 
                                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                          ? 0U
                                                                          : 0xc0U))) 
                                                                      << 0x18U) 
                                                                     | (((VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                                           ? 0x7fU
                                                                           : 
                                                                          (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                                            ? 0x80U
                                                                            : 
                                                                           ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                            << 6U))) 
                                                                         << 0x10U) 
                                                                        | (((VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffff80ULL))
                                                                              ? 0x7fU
                                                                              : 
                                                                             (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffff80ULL))
                                                                               ? 0x80U
                                                                               : 
                                                                              ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                ? 0U
                                                                                : 0x80U))) 
                                                                            << 8U) 
                                                                           | (VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0ULL
                                                                                 : 0x7fULL))
                                                                               ? 0x7fU
                                                                               : 
                                                                              (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0ULL
                                                                                 : 0x7fULL))
                                                                                ? 0x80U
                                                                                : 
                                                                               ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0U
                                                                                 : 0x7fU)))))))))))) 
                                        >> 0x20U));
    __Vtemp_hf815a4b1__0[2U] = (((VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                          ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                           << 6U))))
                                   ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U))))
                                               ? 0x80U
                                               : ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                  << 6U))) 
                                 << 0x10U) | (((VL_LTS_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                             ? 0ULL
                                                             : 0x1ffffff80ULL))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                              ? 0ULL
                                                              : 0x1ffffff80ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                   ? 0U
                                                   : 0x80U))) 
                                               << 8U) 
                                              | (VL_LTS_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                              ? 0ULL
                                                              : 0x7fULL))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                               ? 0ULL
                                                               : 0x7fULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                    ? 0U
                                                    : 0x7fU)))));
    __Vtemp_h53a2d94e__0[3U] = (((VL_LTS_IQQ(33, 0x7fULL, 
                                             ((0ULL 
                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                               ? 0ULL
                                               : 0x64ULL))
                                   ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                           ? 0ULL
                                                           : 0x64ULL))
                                               ? 0x80U
                                               : ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                   ? 0U
                                                   : 0x64U))) 
                                 << 0x10U) | (((VL_LTS_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                             ? 0ULL
                                                             : 0x1ffffffe0ULL))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                              ? 0ULL
                                                              : 0x1ffffffe0ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                   ? 0U
                                                   : 0xe0U))) 
                                               << 8U) 
                                              | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))
                                                   ? 0x80U
                                                   : 
                                                  ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                   << 5U)))));
    __Vtemp_h2d4cfaee__0[0U] = __Vtemp_h7fb1b112__0[0U];
    __Vtemp_h2d4cfaee__0[1U] = __Vtemp_h7fb1b112__0[1U];
    __Vtemp_h2d4cfaee__0[2U] = (((VL_LTS_IQQ(33, 0x7fULL, 
                                             ((0ULL 
                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                               ? 0ULL
                                               : 0x1ffffffc0ULL))
                                   ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                           ? 0ULL
                                                           : 0x1ffffffc0ULL))
                                               ? 0x80U
                                               : ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                   ? 0U
                                                   : 0xc0U))) 
                                 << 0x18U) | __Vtemp_hf815a4b1__0[2U]);
    __Vtemp_h2d4cfaee__0[3U] = (((VL_LTS_IQQ(33, 0x7fULL, 
                                             ((0ULL 
                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                               ? 0ULL
                                               : 0x1ffffff9cULL))
                                   ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                           ? 0ULL
                                                           : 0x1ffffff9cULL))
                                               ? 0x80U
                                               : ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                   ? 0U
                                                   : 0x9cU))) 
                                 << 0x18U) | __Vtemp_h53a2d94e__0[3U]);
    bufp->chgWData(oldp+868,(__Vtemp_h2d4cfaee__0),128);
    bufp->chgBit(oldp+872,(((0U == (IData)(vlSelf->QvuTop__DOT__resetCounter)) 
                            | (IData)(vlSelf->io_reset_window))));
    bufp->chgBit(oldp+873,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+874,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+875,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+876,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+877,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+878,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+879,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+880,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+881,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+882,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+883,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+884,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+885,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+886,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+887,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+888,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+889,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+890,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+891,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+892,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+893,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+894,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+895,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+896,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+897,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+898,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+899,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+900,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+901,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+902,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+903,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+904,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes),32);
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
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x20U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x21U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x22U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x23U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x24U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x25U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x26U] = 0U;
}
