// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQvuTop.h for the primary calling header

#include "verilated.h"

#include "VQvuTop___024root.h"

VL_ATTR_COLD void VQvuTop___024root___eval_static(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VQvuTop___024root___eval_initial__TOP(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_posit_o_0 = 0U;
    vlSelf->io_posit_o_1 = 0U;
    vlSelf->io_posit_o_2 = 0U;
    vlSelf->io_posit_o_3 = 0U;
    vlSelf->io_posit_o_4 = 0U;
    vlSelf->io_posit_o_5 = 0U;
    vlSelf->io_posit_o_6 = 0U;
    vlSelf->io_posit_o_7 = 0U;
    vlSelf->io_posit_o_8 = 0U;
    vlSelf->io_posit_o_9 = 0U;
    vlSelf->io_posit_o_10 = 0U;
    vlSelf->io_posit_o_11 = 0U;
    vlSelf->io_posit_o_12 = 0U;
    vlSelf->io_posit_o_13 = 0U;
    vlSelf->io_posit_o_14 = 0U;
    vlSelf->io_posit_o_15 = 0U;
}

VL_ATTR_COLD void VQvuTop___024root___eval_final(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_final\n"); );
}

VL_ATTR_COLD void VQvuTop___024root___eval_triggers__stl(VQvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__stl(VQvuTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___eval_stl(VQvuTop___024root* vlSelf);

VL_ATTR_COLD void VQvuTop___024root___eval_settle(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VQvuTop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VQvuTop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/QVU/vsrc/QvuTop.sv", 4409, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VQvuTop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__stl(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] QvuTop.decode.lzcModule_15.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_15.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] QvuTop.decode.lzcModule_15.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(3U)) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] QvuTop.decode.lzcModule_14.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_14.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(4U)) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] QvuTop.decode.lzcModule_14.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(5U)) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] QvuTop.decode.lzcModule_13.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_13.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(6U)) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] QvuTop.decode.lzcModule_13.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(7U)) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] QvuTop.decode.lzcModule_12.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_12.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(8U)) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] QvuTop.decode.lzcModule_12.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(9U)) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] QvuTop.decode.lzcModule_11.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_11.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] QvuTop.decode.lzcModule_11.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] QvuTop.decode.lzcModule_10.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_10.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] QvuTop.decode.lzcModule_10.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] QvuTop.decode.lzcModule_9.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_9.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] QvuTop.decode.lzcModule_9.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] QvuTop.decode.lzcModule_8.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_8.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] QvuTop.decode.lzcModule_8.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] QvuTop.decode.lzcModule_7.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_7.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] QvuTop.decode.lzcModule_7.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] QvuTop.decode.lzcModule_6.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_6.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] QvuTop.decode.lzcModule_6.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] QvuTop.decode.lzcModule_5.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_5.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] QvuTop.decode.lzcModule_5.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] QvuTop.decode.lzcModule_4.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_4.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] QvuTop.decode.lzcModule_4.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] QvuTop.decode.lzcModule_3.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] QvuTop.decode.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] QvuTop.decode.lzcModule_2.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 28 is active: @([hybrid] QvuTop.decode.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 29 is active: @([hybrid] QvuTop.decode.lzcModule_1.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 30 is active: @([hybrid] QvuTop.decode.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 31 is active: @([hybrid] QvuTop.decode.lzcModule.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'stl' region trigger index 32 is active: @([hybrid] QvuTop.decode.lzcModule.gen_lzc.sel_nodes)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VQvuTop___024root___stl_sequent__TOP__0(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___stl_sequent__TOP__0\n"); );
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

#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__ico(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] QvuTop.decode.lzcModule_15.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_15.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(2U)) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] QvuTop.decode.lzcModule_15.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(3U)) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] QvuTop.decode.lzcModule_14.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_14.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(4U)) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] QvuTop.decode.lzcModule_14.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(5U)) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] QvuTop.decode.lzcModule_13.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_13.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(6U)) {
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] QvuTop.decode.lzcModule_13.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(7U)) {
        VL_DBG_MSGF("         'ico' region trigger index 7 is active: @([hybrid] QvuTop.decode.lzcModule_12.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_12.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(8U)) {
        VL_DBG_MSGF("         'ico' region trigger index 8 is active: @([hybrid] QvuTop.decode.lzcModule_12.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(9U)) {
        VL_DBG_MSGF("         'ico' region trigger index 9 is active: @([hybrid] QvuTop.decode.lzcModule_11.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_11.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'ico' region trigger index 10 is active: @([hybrid] QvuTop.decode.lzcModule_11.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'ico' region trigger index 11 is active: @([hybrid] QvuTop.decode.lzcModule_10.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_10.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'ico' region trigger index 12 is active: @([hybrid] QvuTop.decode.lzcModule_10.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'ico' region trigger index 13 is active: @([hybrid] QvuTop.decode.lzcModule_9.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_9.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'ico' region trigger index 14 is active: @([hybrid] QvuTop.decode.lzcModule_9.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'ico' region trigger index 15 is active: @([hybrid] QvuTop.decode.lzcModule_8.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_8.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'ico' region trigger index 16 is active: @([hybrid] QvuTop.decode.lzcModule_8.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'ico' region trigger index 17 is active: @([hybrid] QvuTop.decode.lzcModule_7.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_7.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'ico' region trigger index 18 is active: @([hybrid] QvuTop.decode.lzcModule_7.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'ico' region trigger index 19 is active: @([hybrid] QvuTop.decode.lzcModule_6.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_6.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'ico' region trigger index 20 is active: @([hybrid] QvuTop.decode.lzcModule_6.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'ico' region trigger index 21 is active: @([hybrid] QvuTop.decode.lzcModule_5.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_5.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'ico' region trigger index 22 is active: @([hybrid] QvuTop.decode.lzcModule_5.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'ico' region trigger index 23 is active: @([hybrid] QvuTop.decode.lzcModule_4.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_4.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'ico' region trigger index 24 is active: @([hybrid] QvuTop.decode.lzcModule_4.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'ico' region trigger index 25 is active: @([hybrid] QvuTop.decode.lzcModule_3.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 26 is active: @([hybrid] QvuTop.decode.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 27 is active: @([hybrid] QvuTop.decode.lzcModule_2.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 28 is active: @([hybrid] QvuTop.decode.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 29 is active: @([hybrid] QvuTop.decode.lzcModule_1.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 30 is active: @([hybrid] QvuTop.decode.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 31 is active: @([hybrid] QvuTop.decode.lzcModule.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'ico' region trigger index 32 is active: @([hybrid] QvuTop.decode.lzcModule.gen_lzc.sel_nodes)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__act(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] QvuTop.decode.lzcModule_15.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_15.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] QvuTop.decode.lzcModule_15.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] QvuTop.decode.lzcModule_14.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_14.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] QvuTop.decode.lzcModule_14.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] QvuTop.decode.lzcModule_13.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_13.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] QvuTop.decode.lzcModule_13.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] QvuTop.decode.lzcModule_12.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_12.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] QvuTop.decode.lzcModule_12.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] QvuTop.decode.lzcModule_11.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_11.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] QvuTop.decode.lzcModule_11.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] QvuTop.decode.lzcModule_10.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_10.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] QvuTop.decode.lzcModule_10.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] QvuTop.decode.lzcModule_9.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_9.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] QvuTop.decode.lzcModule_9.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] QvuTop.decode.lzcModule_8.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_8.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] QvuTop.decode.lzcModule_8.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] QvuTop.decode.lzcModule_7.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_7.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] QvuTop.decode.lzcModule_7.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] QvuTop.decode.lzcModule_6.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_6.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] QvuTop.decode.lzcModule_6.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] QvuTop.decode.lzcModule_5.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_5.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] QvuTop.decode.lzcModule_5.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] QvuTop.decode.lzcModule_4.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_4.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] QvuTop.decode.lzcModule_4.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] QvuTop.decode.lzcModule_3.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] QvuTop.decode.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] QvuTop.decode.lzcModule_2.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] QvuTop.decode.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] QvuTop.decode.lzcModule_1.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] QvuTop.decode.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([hybrid] QvuTop.decode.lzcModule.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([hybrid] QvuTop.decode.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__nba(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] QvuTop.decode.lzcModule_15.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_15.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] QvuTop.decode.lzcModule_15.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] QvuTop.decode.lzcModule_14.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_14.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] QvuTop.decode.lzcModule_14.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] QvuTop.decode.lzcModule_13.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_13.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] QvuTop.decode.lzcModule_13.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] QvuTop.decode.lzcModule_12.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_12.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] QvuTop.decode.lzcModule_12.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] QvuTop.decode.lzcModule_11.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_11.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] QvuTop.decode.lzcModule_11.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] QvuTop.decode.lzcModule_10.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_10.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] QvuTop.decode.lzcModule_10.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] QvuTop.decode.lzcModule_9.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_9.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] QvuTop.decode.lzcModule_9.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] QvuTop.decode.lzcModule_8.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_8.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] QvuTop.decode.lzcModule_8.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] QvuTop.decode.lzcModule_7.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_7.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] QvuTop.decode.lzcModule_7.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] QvuTop.decode.lzcModule_6.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_6.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] QvuTop.decode.lzcModule_6.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] QvuTop.decode.lzcModule_5.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_5.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] QvuTop.decode.lzcModule_5.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] QvuTop.decode.lzcModule_4.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_4.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] QvuTop.decode.lzcModule_4.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] QvuTop.decode.lzcModule_3.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] QvuTop.decode.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] QvuTop.decode.lzcModule_2.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] QvuTop.decode.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] QvuTop.decode.lzcModule_1.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] QvuTop.decode.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([hybrid] QvuTop.decode.lzcModule.gen_lzc.sel_nodes or [hybrid] QvuTop.decode.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([hybrid] QvuTop.decode.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VQvuTop___024root___ctor_var_reset(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_posit_i_0 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_1 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_2 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_3 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_4 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_5 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_6 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_7 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_8 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_9 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_10 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_11 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_12 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_13 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_14 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i_15 = VL_RAND_RESET_I(32);
    vlSelf->io_op = VL_RAND_RESET_I(4);
    vlSelf->io_Isposit = VL_RAND_RESET_I(1);
    vlSelf->io_Outposit = VL_RAND_RESET_I(1);
    vlSelf->io_float_i_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_mode = VL_RAND_RESET_I(3);
    vlSelf->io_float_posit = VL_RAND_RESET_I(1);
    vlSelf->io_src_posit_width = VL_RAND_RESET_I(6);
    vlSelf->io_vector_size = VL_RAND_RESET_I(3);
    vlSelf->io_dst_posit_width = VL_RAND_RESET_I(6);
    vlSelf->io_float_o_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_posit_o_0 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_1 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_2 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_3 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_4 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_5 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_6 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_7 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_8 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_9 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_10 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_11 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_12 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_13 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_14 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_15 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_0 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_1 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_2 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_3 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_4 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_5 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_6 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_7 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_8 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_9 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_10 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_11 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_12 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_13 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_14 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_15 = VL_RAND_RESET_I(32);
    vlSelf->io_reset_window = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE = VL_RAND_RESET_I(5);
    vlSelf->QvuTop__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->QvuTop__DOT__resetCounter = VL_RAND_RESET_I(5);
    vlSelf->QvuTop__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT___GEN_7 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(384, vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac);
    VL_RAND_RESET_W(144, vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Exp);
    VL_RAND_RESET_W(528, vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i);
    VL_RAND_RESET_W(128, vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i);
    VL_RAND_RESET_W(256, vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o);
    VL_RAND_RESET_W(128, vlSelf->QvuTop__DOT____Vcellout__quantizeFP8__io_fp8_o);
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP4__io_fp4_o = VL_RAND_RESET_Q(64);
    vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h60d0e577__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_hd2b53c8a__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h3458467d__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_hd84f4eef__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_hdbc09056__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h657998f6__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h672aad8b__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h433f84f8__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h63b3fc32__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h5fdab54b__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h738293b2__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h5a247d4f__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_hef4171a5__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h0037cc42__0 = 0;
    vlSelf->QvuTop__DOT____VdfgTmp_h62563a14__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT__isNaR = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6 = VL_RAND_RESET_I(31);
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcfb253e9__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcf4be793__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcecc844e__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2a2a10e4__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25bc0d63__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25331089__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24af6ee8__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h281ce652__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2babc25d__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2b2d736f__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2aaec35a__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h263440d8__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h21c2c097__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h217d4d15__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24cba9c4__0 = 0;
    vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h244a7236__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT__io_isNaN = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__floatDecode__DOT___GEN = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__floatDecode__DOT___GEN_0 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h907e46d1__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h93fcca7b__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8fff338c__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f719326__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8effb80f__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e62d0a5__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8de56522__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d7f6188__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8cea4ac5__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c68d66f__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8beafdc8__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b7d4662__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a383c23__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h898ddcf9__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8933512e__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h88bc2594__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0 = 0;
    vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal = VL_RAND_RESET_I(20);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_1 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_2 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_3 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_4 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_5 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_6 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_7 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_8 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_9 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_10 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_11 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_12 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_13 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_14 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15 = VL_RAND_RESET_I(6);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_15 = VL_RAND_RESET_I(32);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50 = VL_RAND_RESET_Q(37);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_4 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_5 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_6 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_7 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_8 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_9 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_10 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_11 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_12 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_13 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_14 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15 = VL_RAND_RESET_Q(34);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_15 = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_53 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_54 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_56 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_57 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_58 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_59 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_60 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_61 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_62 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_63 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_64 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_65 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_66 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_68 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_69 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_1_T = VL_RAND_RESET_I(20);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_2_T = VL_RAND_RESET_I(20);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_3_T = VL_RAND_RESET_I(20);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_4_T = VL_RAND_RESET_I(20);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_5_T = VL_RAND_RESET_I(20);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_6_T = VL_RAND_RESET_I(20);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_70 = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_71 = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_72 = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_73 = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_74 = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_75 = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_76 = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_77 = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_78 = VL_RAND_RESET_I(23);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___dataRange_T = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_16 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_79 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_8 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_15 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_80 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_81 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_82 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_11 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_9 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_83 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_22 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_18 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_84 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_33 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_27 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_85 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_44 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_36 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_4 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_18 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_86 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_55 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_45 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_5 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_22 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_87 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_66 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_54 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_6 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_26 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_88 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_77 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_63 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_7 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_30 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_89 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_88 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_72 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_8 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_34 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_90 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_99 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_81 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_9 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_38 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_91 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_110 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_90 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_10 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_42 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_92 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_121 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_99 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_11 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_46 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_93 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_132 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_108 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_12 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_50 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_94 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_143 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_117 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_13 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_54 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_95 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_154 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_126 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_14 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_58 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_96 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_165 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_135 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_15 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_62 = VL_RAND_RESET_I(16);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a6fc__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf2b43__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8805__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8ec3__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61bde__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde5471e5__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde54723b__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded989a1__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc34698b0__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14e76__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036deeb__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02867__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210c4c__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210b92__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85dc2__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eba09__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eb5f8__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0e7e__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7da4__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d037__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0 = 0;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0 = 0;
    VL_RAND_RESET_W(264, vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax);
    VL_RAND_RESET_W(264, vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid = VL_RAND_RESET_I(8);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_0 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_1 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_2 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_3 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_4 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_5 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_6 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_7 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_8 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_9 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_10 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_11 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_12 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_13 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_14 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15 = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15 = VL_RAND_RESET_I(3);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_34 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_37 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_38 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_39 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_40 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_41 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_42 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_44 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_45 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_46 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_47 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT___GEN_48 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_49 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_leftMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_50 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_rightMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_leftMax_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_51 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_leftMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_52 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_rightMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_rightMax_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_leftMax_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_53 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_leftMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_54 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_rightMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_leftMax_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_leftMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_56 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_rightMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_rightMax_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_rightMax_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMax_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_57 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_leftMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_58 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_rightMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_leftMin_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_59 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_leftMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_60 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_rightMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_rightMin_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_leftMin_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_61 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_leftMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_62 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_rightMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_leftMin_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_63 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_leftMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_64 = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_rightMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_rightMin_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_rightMin_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___effectiveMin_T = VL_RAND_RESET_I(1);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dataRange = VL_RAND_RESET_Q(33);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT___windowPtr_T_2 = VL_RAND_RESET_I(4);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3016326__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3bf0dae__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h34eabf7b__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd91def4b__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3af5d97e__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3b636de0__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37f6fbe9__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37932ea5__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd80e3daa__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd03ac44__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdee4f6f7__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdbc354e5__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc3001b5__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc8dcd07__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd93d690c__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd9b73fc0__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde2b96ae__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdeb92de4__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc326fab3__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc380ef73__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc017bafb__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc08300e3__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd270b9c__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hddabf1ae__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc2281910__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc29e61ec__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he78bd7e7__0 = 0;
    vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he40a7e5d__0 = 0;
    vlSelf->__VdfgTmp_hc6e18ff1__0 = 0;
    vlSelf->__VdfgTmp_hece37c2e__0 = 0;
    vlSelf->__VdfgTmp_hd12e3618__0 = 0;
    vlSelf->__VdfgTmp_h45a06809__0 = 0;
    vlSelf->__VdfgTmp_h15c5203c__0 = 0;
    vlSelf->__VdfgTmp_h54d188b7__0 = 0;
    vlSelf->__VdfgTmp_h1e6be8f2__0 = 0;
    vlSelf->__VdfgTmp_h8a2eaf1f__0 = 0;
    vlSelf->__VdfgTmp_h29201396__0 = 0;
    vlSelf->__VdfgTmp_h95bf39bd__0 = 0;
    vlSelf->__VdfgTmp_h1fa020bc__0 = 0;
    vlSelf->__VdfgTmp_he5b81198__0 = 0;
    vlSelf->__VdfgTmp_h3f6e3113__0 = 0;
    vlSelf->__VdfgTmp_h66c1db1c__0 = 0;
    vlSelf->__VdfgTmp_h3f732c73__0 = 0;
    vlSelf->__VdfgTmp_h47b9a3d0__0 = 0;
    vlSelf->__VdfgTmp_hbb02c542__0 = 0;
    vlSelf->__VdfgTmp_hbc36f83b__0 = 0;
    vlSelf->__VdfgTmp_hab31a8ed__0 = 0;
    vlSelf->__VdfgTmp_hfbb06ac0__0 = 0;
    vlSelf->__VdfgTmp_h90cf73ba__0 = 0;
    vlSelf->__VdfgTmp_hfbcbb255__0 = 0;
    vlSelf->__VdfgTmp_ha24b52a4__0 = 0;
    vlSelf->__VdfgTmp_h0609fa5a__0 = 0;
    vlSelf->__VdfgTmp_h31cfcd1e__0 = 0;
    vlSelf->__VdfgTmp_h3dfd7295__0 = 0;
    vlSelf->__VdfgTmp_hd07f1d61__0 = 0;
    vlSelf->__VdfgTmp_h55c635c7__0 = 0;
    vlSelf->__VdfgTmp_h4ecb4224__0 = 0;
    vlSelf->__VdfgTmp_h6b3a5eab__0 = 0;
    vlSelf->__VdfgTmp_h34744805__0 = 0;
    vlSelf->__VdfgTmp_hdaffa71e__0 = 0;
    vlSelf->__VdfgTmp_h03f676fd__0 = 0;
    vlSelf->__VdfgTmp_he1263253__0 = 0;
    vlSelf->__VdfgTmp_h93c7e7df__0 = 0;
    vlSelf->__VdfgTmp_h3180c58e__0 = 0;
    vlSelf->__VdfgTmp_hc3fa4165__0 = 0;
    vlSelf->__VdfgTmp_h3aa8e614__0 = 0;
    vlSelf->__VdfgTmp_hdbad544b__0 = 0;
    vlSelf->__VdfgTmp_h33db8eb5__0 = 0;
    vlSelf->__VdfgTmp_h2a607f05__0 = 0;
    vlSelf->__VdfgTmp_h63efa7e5__0 = 0;
    vlSelf->__VdfgTmp_h447ba768__0 = 0;
    vlSelf->__VdfgTmp_hc1d7047f__0 = 0;
    vlSelf->__VdfgTmp_h5acc59ba__0 = 0;
    vlSelf->__VdfgTmp_he5a8b1b2__0 = 0;
    vlSelf->__VdfgTmp_h28105e05__0 = 0;
    vlSelf->__VdfgTmp_h82595622__0 = 0;
    vlSelf->__VdfgTmp_hf483a44e__0 = 0;
    vlSelf->__VdfgTmp_h5939b817__0 = 0;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
