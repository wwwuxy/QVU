// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQvuTop.h for the primary calling header

#include "verilated.h"

#include "VQvuTop_LZC__M1_W1f.h"
#include "VQvuTop__Syms.h"

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_0_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_1__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_1__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_1_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_2__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_2__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_2_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_3__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_3__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_3_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_4__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_4__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_4_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_5__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_5__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_5_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_6__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_6__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_6_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_7__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_7__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_7_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_8__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_8__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_8_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_9__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_9__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_9_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_10__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_10__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_10_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_11__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_11__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_11_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_12__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_12__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_12_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_13__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_13__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_13_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_14__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_14__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_14_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}

VL_INLINE_OPT void VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_15__0(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ico_sequent__TOP__QvuTop__DOT__decode__DOT__lzcModule_15__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_hefa3c05c__0;
    __Vlvbound_hefa3c05c__0 = 0;
    // Body
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x1eU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffeU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | (IData)(__Vlvbound_hefa3c05c__0));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x1dU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffdU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 1U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x1cU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffffbU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 2U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x1bU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffff7U 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 3U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x1aU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffefU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 4U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x19U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffdfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 5U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x18U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffffbfU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 6U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x17U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffff7fU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 7U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x16U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffeffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 8U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x15U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffdffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 9U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x14U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffffbffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xaU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x13U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffff7ffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xbU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x12U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffefffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xcU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x11U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffdfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xdU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0x10U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fffbfffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xeU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0xfU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fff7fffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0xfU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0xeU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffeffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x10U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0xdU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffdffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x11U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0xcU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ffbffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x12U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0xbU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7ff7ffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x13U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 0xaU));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fefffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x14U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 9U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fdfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x15U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 8U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7fbfffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x16U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 7U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7f7fffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x17U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 6U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7effffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x18U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 5U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7dffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x19U));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 4U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x7bffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1aU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 3U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x77ffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1bU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 2U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x6fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1cU));
    __Vlvbound_hefa3c05c__0 = (1U & (((- (IData)((1U 
                                                  & (vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                     >> 0x1eU)))) 
                                      ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6) 
                                     >> 1U));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x5fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1dU));
    __Vlvbound_hefa3c05c__0 = (1U & ((vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6 
                                      >> 0x1eU) ^ vlSymsp->TOP.QvuTop__DOT__decode__DOT___operand_15_T_6));
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = ((0x3fffffffU 
                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp) 
                                           | ((IData)(__Vlvbound_hefa3c05c__0) 
                                              << 0x1eU));
}
