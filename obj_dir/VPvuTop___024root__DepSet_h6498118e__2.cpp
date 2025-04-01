// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__53(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__53\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h0f7b6d09__0;
    VlWide<3>/*95:0*/ __Vtemp_hc0bfd9a0__0;
    // Body
    __Vtemp_h0f7b6d09__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h0f7b6d09__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hc0bfd9a0__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h0f7b6d09__0[0U];
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h0f7b6d09__0[1U];
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hc0bfd9a0__0[2U])))));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    vlSelf->__VdfgTmp_h71c5bb7f__0 = ((0x40000000U 
                                       & vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6)
                                       ? (0x1fU & (
                                                   vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   - (IData)(1U)))
                                       : (0x20U | (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ 
                                                       vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])))));
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6));
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac 
        = (((IData)((0U != vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6)) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
                                       >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__54(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__54\n"); );
    // Body
    vlSelf->io_float_o_3 = ((IData)(vlSelf->PvuTop__DOT___GEN_106)
                             ? vlSelf->PvuTop__DOT___GEN_56
                             : ((IData)(vlSelf->io_Outposit)
                                 ? (((IData)(vlSelf->PvuTop__DOT___GEN_104) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_50))
                                     ? 0ULL : vlSelf->PvuTop__DOT____VdfgTmp_h098a558a__0)
                                 : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                     ? (QData)((IData)(
                                                       ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9b56b116__0) 
                                                          & (IData)(vlSelf->PvuTop__DOT___GEN_67)) 
                                                         << 0x1fU) 
                                                        | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f17ab6__0))
                                                               ? 0xffU
                                                               : 
                                                              ((0x182U 
                                                                == 
                                                                ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                                  ? 
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_94)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_99))
                                                                  : 0U))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(0x7fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                                     ? (IData)(vlSelf->PvuTop__DOT___GEN_99)
                                                                     : 0U)))))) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0))
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f17ab6__0)
                                                                ? 
                                                               ((0U 
                                                                 == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0)
                                                                 ? 1U
                                                                 : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0)
                                                                : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0))))))
                                     : vlSelf->PvuTop__DOT___GEN_56)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__55(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__55\n"); );
    // Init
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h50de4656__0;
    PvuTop__DOT____VdfgTmp_h50de4656__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    IData/*30:0*/ PvuTop__DOT__result_encoder__DOT___value_after_round_3_T;
    PvuTop__DOT__result_encoder__DOT___value_after_round_3_T = 0;
    CData/*0:0*/ PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h4198450f__0;
    VlWide<3>/*95:0*/ __Vtemp_hbaed5fc8__0;
    VlWide<3>/*95:0*/ __Vtemp_h31e7c189__0;
    VlWide<3>/*95:0*/ __Vtemp_h76170c50__0;
    VlWide<3>/*95:0*/ __Vtemp_h07cf3bb9__0;
    VlWide<3>/*95:0*/ __Vtemp_hf77145ca__0;
    VlWide<3>/*95:0*/ __Vtemp_hde60eb38__0;
    VlWide<3>/*95:0*/ __Vtemp_h11dd11f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h54489405__0;
    VlWide<3>/*95:0*/ __Vtemp_h82d71ac0__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h9c170374__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->__VdfgTmp_h5ed01957__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__VdfgTmp_h9c170374__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->__VdfgTmp_h5ed01957__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
           & ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0) 
              & (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4198450f__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h4198450f__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h4198450f__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4198450f__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                      ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                          ? 0U : (IData)(vlSelf->__VdfgTmp_h9c170374__0))
                                      : 0U))) << 0x39U) 
                   | ((QData)((IData)(((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                        ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                            ? 0U : vlSelf->__VdfgTmp_h5ed01957__0)
                                        : 0U))) << 0x1eU)));
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                                           ? 
                                                                          ((0U 
                                                                            == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                                            ? 0U
                                                                            : (IData)(vlSelf->__VdfgTmp_h9c170374__0))
                                                                           : 0U))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                                             ? 
                                                                            ((0U 
                                                                              == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                                              ? 0U
                                                                              : vlSelf->__VdfgTmp_h5ed01957__0)
                                                                             : 0U))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                         ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                             ? 0x1fU
                                             : (IData)(vlSelf->__VdfgTmp_hc275bf88__0))
                                         : 0x1fU)) : 
                     ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                      ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                          ? 0U : (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1cf3a611__0))
                                      : 0U))) - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hbaed5fc8__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hbaed5fc8__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hbaed5fc8__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hbaed5fc8__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h31e7c189__0, vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h31e7c189__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h31e7c189__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h31e7c189__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h76170c50__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h76170c50__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h76170c50__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h76170c50__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h07cf3bb9__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h07cf3bb9__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h07cf3bb9__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h07cf3bb9__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf77145ca__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hf77145ca__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hf77145ca__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf77145ca__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hde60eb38__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hde60eb38__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hde60eb38__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hde60eb38__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h11dd11f5__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h11dd11f5__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h11dd11f5__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h11dd11f5__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h54489405__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h54489405__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h54489405__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h54489405__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U])))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h82d71ac0__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h82d71ac0__0[0U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h82d71ac0__0[1U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h82d71ac0__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__result_encoder__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT____VdfgTmp_h9859deca__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                    & ((0U 
                                                        != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0) 
                                                       & (IData)(vlSelf->__VdfgTmp_hfd1694e0__0)))
                                                    ? 
                                                   (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                     & (IData)(vlSelf->__VdfgTmp_h9cd43c3e__0))
                                                     ? 
                                                    (0x80000000U 
                                                     | (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ PvuTop__DOT__result_encoder__DOT___value_after_round_3_T))))
                                                     : PvuTop__DOT__result_encoder__DOT___value_after_round_3_T)
                                                    : 0U);
    PvuTop__DOT____VdfgTmp_h50de4656__0 = ((0x1fU >= 
                                            (0x3fU 
                                             & ((IData)(0x20U) 
                                                - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            ? (vlSelf->PvuTop__DOT____VdfgTmp_h9859deca__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            : 0U);
    vlSelf->io_posit_o_3 = ((5U == (IData)(vlSelf->io_op))
                             ? vlSelf->PvuTop__DOT___GEN_79
                             : ((6U == (IData)(vlSelf->io_op))
                                 ? ((IData)(vlSelf->PvuTop__DOT___GEN_41)
                                     ? vlSelf->PvuTop__DOT____VdfgTmp_h430c3929__0
                                     : ((0x1fU >= (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                         ? (vlSelf->PvuTop__DOT____VdfgTmp_h5909e0af__0 
                                            << (0x3fU 
                                                & ((IData)(0x20U) 
                                                   - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                         : 0U)) : ((IData)(vlSelf->PvuTop__DOT___GEN_105)
                                                    ? vlSelf->PvuTop__DOT___GEN_79
                                                    : 
                                                   ((IData)(vlSelf->io_Outposit)
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                      ? 
                                                     ((0x20U 
                                                       == (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgTmp_hfd1694e0__0)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgTmp_h9cd43c3e__0)
                                                         ? 
                                                        (0x80000000U 
                                                         | (0x7fffffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                                         : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelf->PvuTop__DOT___GEN_41)
                                                        ? vlSelf->PvuTop__DOT____VdfgTmp_h9859deca__0
                                                        : 
                                                       ((0x1fU 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(0x20U) 
                                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                         ? 
                                                        (PvuTop__DOT____VdfgTmp_h50de4656__0 
                                                         << 
                                                         (0x3fU 
                                                          & ((IData)(0x20U) 
                                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                         : 0U)))
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT___GEN_51)
                                                       ? 0U
                                                       : vlSelf->PvuTop__DOT___GEN_78))
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT___GEN_104)
                                                      ? 0U
                                                      : vlSelf->PvuTop__DOT___GEN_78)))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__56(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__56\n"); );
    // Body
    vlSelf->io_float_o_2 = ((IData)(vlSelf->PvuTop__DOT___GEN_106)
                             ? vlSelf->PvuTop__DOT___GEN_55
                             : ((IData)(vlSelf->io_Outposit)
                                 ? (((IData)(vlSelf->PvuTop__DOT___GEN_103) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_50))
                                     ? 0ULL : vlSelf->PvuTop__DOT____VdfgTmp_h3d760f20__0)
                                 : ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                     ? (QData)((IData)(
                                                       ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h4d703b6d__0) 
                                                          & (IData)(vlSelf->PvuTop__DOT___GEN_66)) 
                                                         << 0x1fU) 
                                                        | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f6aa23__0))
                                                               ? 0xffU
                                                               : 
                                                              ((0x182U 
                                                                == 
                                                                ((2U 
                                                                  < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                  ? 
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_94)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_98))
                                                                  : 0U))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(0x7fU) 
                                                                   + 
                                                                   ((2U 
                                                                     < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                     ? (IData)(vlSelf->PvuTop__DOT___GEN_98)
                                                                     : 0U)))))) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0))
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f6aa23__0)
                                                                ? 
                                                               ((0U 
                                                                 == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0)
                                                                 ? 1U
                                                                 : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0)
                                                                : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0))))))
                                     : vlSelf->PvuTop__DOT___GEN_55)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__57(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__57\n"); );
    // Init
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_hb623af30__0;
    PvuTop__DOT____VdfgTmp_hb623af30__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    IData/*30:0*/ PvuTop__DOT__result_encoder__DOT___value_after_round_2_T;
    PvuTop__DOT__result_encoder__DOT___value_after_round_2_T = 0;
    CData/*0:0*/ PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c07425a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_he4810790__0;
    VlWide<3>/*95:0*/ __Vtemp_h5b5250d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h7306d128__0;
    VlWide<3>/*95:0*/ __Vtemp_hacd47c81__0;
    VlWide<3>/*95:0*/ __Vtemp_hf91a0331__0;
    VlWide<3>/*95:0*/ __Vtemp_h7ba44c4d__0;
    VlWide<3>/*95:0*/ __Vtemp_hf8675633__0;
    VlWide<3>/*95:0*/ __Vtemp_h17039e94__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf22ba93__0;
    VlWide<3>/*95:0*/ __Vtemp_h577be6d7__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h9fb053b2__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->__VdfgTmp_h5bc1cbb9__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__VdfgTmp_h9fb053b2__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->__VdfgTmp_h5bc1cbb9__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c07425a__0 
        = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
           & ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0) 
              & (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he4810790__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_he4810790__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_he4810790__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_he4810790__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                      ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                          ? 0U : (IData)(vlSelf->__VdfgTmp_h9fb053b2__0))
                                      : 0U))) << 0x39U) 
                   | ((QData)((IData)(((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                        ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                            ? 0U : vlSelf->__VdfgTmp_h5bc1cbb9__0)
                                        : 0U))) << 0x1eU)));
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((2U 
                                                                           < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                           ? 
                                                                          ((0U 
                                                                            == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                                            ? 0U
                                                                            : (IData)(vlSelf->__VdfgTmp_h9fb053b2__0))
                                                                           : 0U))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((2U 
                                                                             < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                             ? 
                                                                            ((0U 
                                                                              == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                                              ? 0U
                                                                              : vlSelf->__VdfgTmp_h5bc1cbb9__0)
                                                                             : 0U))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                         ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                             ? 0x1fU
                                             : (IData)(vlSelf->__VdfgTmp_h48db5cd0__0))
                                         : 0x1fU)) : 
                     ((IData)(2U) + ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                      ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                          ? 0U : (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce83255__0))
                                      : 0U))) - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5b5250d1__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h5b5250d1__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h5b5250d1__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5b5250d1__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h7306d128__0, vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h7306d128__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h7306d128__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h7306d128__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hacd47c81__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hacd47c81__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hacd47c81__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hacd47c81__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf91a0331__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hf91a0331__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hf91a0331__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf91a0331__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h7ba44c4d__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h7ba44c4d__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h7ba44c4d__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h7ba44c4d__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf8675633__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hf8675633__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hf8675633__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf8675633__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h17039e94__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h17039e94__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h17039e94__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h17039e94__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hdf22ba93__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hdf22ba93__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hdf22ba93__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hdf22ba93__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U])))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h577be6d7__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h577be6d7__0[0U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h577be6d7__0[1U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h577be6d7__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__result_encoder__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT____VdfgTmp_h9faf7d5c__0 = (
                                                   ((2U 
                                                     < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                    & ((0U 
                                                        != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0) 
                                                       & (IData)(vlSelf->__VdfgTmp_h65f8c3e6__0)))
                                                    ? 
                                                   (((2U 
                                                      < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                     & (IData)(vlSelf->__VdfgTmp_h6b87cb94__0))
                                                     ? 
                                                    (0x80000000U 
                                                     | (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ PvuTop__DOT__result_encoder__DOT___value_after_round_2_T))))
                                                     : PvuTop__DOT__result_encoder__DOT___value_after_round_2_T)
                                                    : 0U);
    PvuTop__DOT____VdfgTmp_hb623af30__0 = ((0x1fU >= 
                                            (0x3fU 
                                             & ((IData)(0x20U) 
                                                - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            ? (vlSelf->PvuTop__DOT____VdfgTmp_h9faf7d5c__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            : 0U);
    vlSelf->io_posit_o_2 = ((5U == (IData)(vlSelf->io_op))
                             ? vlSelf->PvuTop__DOT___GEN_76
                             : ((6U == (IData)(vlSelf->io_op))
                                 ? ((IData)(vlSelf->PvuTop__DOT___GEN_41)
                                     ? vlSelf->PvuTop__DOT____VdfgTmp_h4699d5bf__0
                                     : ((0x1fU >= (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                         ? (vlSelf->PvuTop__DOT____VdfgTmp_hbd281acc__0 
                                            << (0x3fU 
                                                & ((IData)(0x20U) 
                                                   - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                         : 0U)) : ((IData)(vlSelf->PvuTop__DOT___GEN_105)
                                                    ? vlSelf->PvuTop__DOT___GEN_76
                                                    : 
                                                   ((IData)(vlSelf->io_Outposit)
                                                     ? 
                                                    ((2U 
                                                      < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                      ? 
                                                     ((0x20U 
                                                       == (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgTmp_h65f8c3e6__0)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgTmp_h6b87cb94__0)
                                                         ? 
                                                        (0x80000000U 
                                                         | (0x7fffffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                                         : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelf->PvuTop__DOT___GEN_41)
                                                        ? vlSelf->PvuTop__DOT____VdfgTmp_h9faf7d5c__0
                                                        : 
                                                       ((0x1fU 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(0x20U) 
                                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                         ? 
                                                        (PvuTop__DOT____VdfgTmp_hb623af30__0 
                                                         << 
                                                         (0x3fU 
                                                          & ((IData)(0x20U) 
                                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                         : 0U)))
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT___GEN_51)
                                                       ? 0U
                                                       : vlSelf->PvuTop__DOT___GEN_75))
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT___GEN_103)
                                                      ? 0U
                                                      : vlSelf->PvuTop__DOT___GEN_75)))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__58(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__58\n"); );
    // Body
    vlSelf->io_float_o_1 = ((IData)(vlSelf->PvuTop__DOT___GEN_106)
                             ? vlSelf->PvuTop__DOT___GEN_54
                             : ((IData)(vlSelf->io_Outposit)
                                 ? (((IData)(vlSelf->PvuTop__DOT___GEN_102) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_50))
                                     ? 0ULL : vlSelf->PvuTop__DOT____VdfgTmp_h12086d12__0)
                                 : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                     ? (QData)((IData)(
                                                       ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfe6df398__0) 
                                                          & (IData)(vlSelf->PvuTop__DOT___GEN_65)) 
                                                         << 0x1fU) 
                                                        | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0))
                                                               ? 0xffU
                                                               : 
                                                              ((0x182U 
                                                                == 
                                                                ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                  ? 
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_94)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_97))
                                                                  : 0U))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(0x7fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                     ? (IData)(vlSelf->PvuTop__DOT___GEN_97)
                                                                     : 0U)))))) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0)
                                                                ? 
                                                               ((0U 
                                                                 == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                                 ? 1U
                                                                 : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                                : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0))))))
                                     : vlSelf->PvuTop__DOT___GEN_54)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__59(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__59\n"); );
    // Init
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h8dce9f04__0;
    PvuTop__DOT____VdfgTmp_h8dce9f04__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    IData/*30:0*/ PvuTop__DOT__result_encoder__DOT___value_after_round_1_T;
    PvuTop__DOT__result_encoder__DOT___value_after_round_1_T = 0;
    CData/*0:0*/ PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c547640__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h05350155__0;
    VlWide<3>/*95:0*/ __Vtemp_h467d8c7f__0;
    VlWide<3>/*95:0*/ __Vtemp_hd3d219b5__0;
    VlWide<3>/*95:0*/ __Vtemp_h282321a8__0;
    VlWide<3>/*95:0*/ __Vtemp_h8ecc82d6__0;
    VlWide<3>/*95:0*/ __Vtemp_h492b9b86__0;
    VlWide<3>/*95:0*/ __Vtemp_h08f0bf01__0;
    VlWide<3>/*95:0*/ __Vtemp_habcf0191__0;
    VlWide<3>/*95:0*/ __Vtemp_hf08d437b__0;
    VlWide<3>/*95:0*/ __Vtemp_h94c31933__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_he65a645a__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->__VdfgTmp_h635dacf6__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__VdfgTmp_he65a645a__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->__VdfgTmp_h635dacf6__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c547640__0 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
           & ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0) 
              & (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h05350155__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h05350155__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h05350155__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h05350155__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                      ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                          ? 0U : (IData)(vlSelf->__VdfgTmp_he65a645a__0))
                                      : 0U))) << 0x39U) 
                   | ((QData)((IData)(((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                        ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                            ? 0U : vlSelf->__VdfgTmp_h635dacf6__0)
                                        : 0U))) << 0x1eU)));
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                           ? 
                                                                          ((0U 
                                                                            == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                                            ? 0U
                                                                            : (IData)(vlSelf->__VdfgTmp_he65a645a__0))
                                                                           : 0U))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                             ? 
                                                                            ((0U 
                                                                              == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                                              ? 0U
                                                                              : vlSelf->__VdfgTmp_h635dacf6__0)
                                                                             : 0U))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                         ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                             ? 0x1fU
                                             : (IData)(vlSelf->__VdfgTmp_h1818f6b9__0))
                                         : 0x1fU)) : 
                     ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                      ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                          ? 0U : (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c495847__0))
                                      : 0U))) - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h467d8c7f__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h467d8c7f__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h467d8c7f__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h467d8c7f__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd3d219b5__0, vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hd3d219b5__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hd3d219b5__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd3d219b5__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h282321a8__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h282321a8__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h282321a8__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h282321a8__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h8ecc82d6__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h8ecc82d6__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h8ecc82d6__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h8ecc82d6__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h492b9b86__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h492b9b86__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h492b9b86__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h492b9b86__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h08f0bf01__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h08f0bf01__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h08f0bf01__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h08f0bf01__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_habcf0191__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_habcf0191__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_habcf0191__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_habcf0191__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf08d437b__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hf08d437b__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hf08d437b__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf08d437b__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U])))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h94c31933__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h94c31933__0[0U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h94c31933__0[1U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h94c31933__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__result_encoder__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT____VdfgTmp_h9f50fb9f__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                    & ((0U 
                                                        != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0) 
                                                       & (IData)(vlSelf->__VdfgTmp_h09896694__0)))
                                                    ? 
                                                   (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                     & (IData)(vlSelf->__VdfgTmp_h9a7ea324__0))
                                                     ? 
                                                    (0x80000000U 
                                                     | (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ PvuTop__DOT__result_encoder__DOT___value_after_round_1_T))))
                                                     : PvuTop__DOT__result_encoder__DOT___value_after_round_1_T)
                                                    : 0U);
    PvuTop__DOT____VdfgTmp_h8dce9f04__0 = ((0x1fU >= 
                                            (0x3fU 
                                             & ((IData)(0x20U) 
                                                - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            ? (vlSelf->PvuTop__DOT____VdfgTmp_h9f50fb9f__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            : 0U);
    vlSelf->io_posit_o_1 = ((5U == (IData)(vlSelf->io_op))
                             ? vlSelf->PvuTop__DOT___GEN_73
                             : ((6U == (IData)(vlSelf->io_op))
                                 ? ((IData)(vlSelf->PvuTop__DOT___GEN_41)
                                     ? vlSelf->PvuTop__DOT____VdfgTmp_h461f427a__0
                                     : ((0x1fU >= (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                         ? (vlSelf->PvuTop__DOT____VdfgTmp_h8628893a__0 
                                            << (0x3fU 
                                                & ((IData)(0x20U) 
                                                   - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                         : 0U)) : ((IData)(vlSelf->PvuTop__DOT___GEN_105)
                                                    ? vlSelf->PvuTop__DOT___GEN_73
                                                    : 
                                                   ((IData)(vlSelf->io_Outposit)
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                      ? 
                                                     ((0x20U 
                                                       == (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgTmp_h09896694__0)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgTmp_h9a7ea324__0)
                                                         ? 
                                                        (0x80000000U 
                                                         | (0x7fffffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))))
                                                         : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelf->PvuTop__DOT___GEN_41)
                                                        ? vlSelf->PvuTop__DOT____VdfgTmp_h9f50fb9f__0
                                                        : 
                                                       ((0x1fU 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(0x20U) 
                                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                         ? 
                                                        (PvuTop__DOT____VdfgTmp_h8dce9f04__0 
                                                         << 
                                                         (0x3fU 
                                                          & ((IData)(0x20U) 
                                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                         : 0U)))
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT___GEN_51)
                                                       ? 0U
                                                       : vlSelf->PvuTop__DOT___GEN_72))
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT___GEN_102)
                                                      ? 0U
                                                      : vlSelf->PvuTop__DOT___GEN_72)))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__60(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__60\n"); );
    // Body
    vlSelf->io_float_o_0 = ((IData)(vlSelf->PvuTop__DOT___GEN_106)
                             ? vlSelf->PvuTop__DOT___GEN_53
                             : ((IData)(vlSelf->io_Outposit)
                                 ? (((IData)(vlSelf->PvuTop__DOT___GEN_101) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_50))
                                     ? 0ULL : vlSelf->PvuTop__DOT____VdfgTmp_hd471070e__0)
                                 : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                     ? (QData)((IData)(
                                                       ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h48f6830c__0) 
                                                          & (IData)(vlSelf->PvuTop__DOT___GEN_64)) 
                                                         << 0x1fU) 
                                                        | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13a8a89__0))
                                                               ? 0xffU
                                                               : 
                                                              ((0x182U 
                                                                == 
                                                                ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                  ? 
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_94)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_95))
                                                                  : 0U))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(0x7fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                     ? (IData)(vlSelf->PvuTop__DOT___GEN_95)
                                                                     : 0U)))))) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13a8a89__0)
                                                                ? 
                                                               ((0U 
                                                                 == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                                 ? 1U
                                                                 : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                                : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0))))))
                                     : vlSelf->PvuTop__DOT___GEN_53)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__61(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__61\n"); );
    // Init
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_hda9cb879__0;
    PvuTop__DOT____VdfgTmp_hda9cb879__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    IData/*30:0*/ PvuTop__DOT__result_encoder__DOT___value_after_round_0_T;
    PvuTop__DOT__result_encoder__DOT___value_after_round_0_T = 0;
    CData/*0:0*/ PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c349387__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h5869e245__0;
    VlWide<3>/*95:0*/ __Vtemp_h570bbeb8__0;
    VlWide<3>/*95:0*/ __Vtemp_h24426f80__0;
    VlWide<3>/*95:0*/ __Vtemp_hd818819f__0;
    VlWide<3>/*95:0*/ __Vtemp_h028e512d__0;
    VlWide<3>/*95:0*/ __Vtemp_h91617439__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc955d64__0;
    VlWide<3>/*95:0*/ __Vtemp_hbbffd6e7__0;
    VlWide<3>/*95:0*/ __Vtemp_h1853c060__0;
    VlWide<3>/*95:0*/ __Vtemp_he2890aea__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h6f4ef81c__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->__VdfgTmp_hc3754ef5__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__VdfgTmp_h6f4ef81c__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->__VdfgTmp_hc3754ef5__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c349387__0 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
           & ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0) 
              & (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5869e245__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h5869e245__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h5869e245__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5869e245__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                      ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                          ? 0U : (IData)(vlSelf->__VdfgTmp_h6f4ef81c__0))
                                      : 0U))) << 0x39U) 
                   | ((QData)((IData)(((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                        ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                            ? 0U : vlSelf->__VdfgTmp_hc3754ef5__0)
                                        : 0U))) << 0x1eU)));
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                           ? 
                                                                          ((0U 
                                                                            == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                                            ? 0U
                                                                            : (IData)(vlSelf->__VdfgTmp_h6f4ef81c__0))
                                                                           : 0U))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                             ? 
                                                                            ((0U 
                                                                              == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                                              ? 0U
                                                                              : vlSelf->__VdfgTmp_hc3754ef5__0)
                                                                             : 0U))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__result_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                         ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                             ? 0x1fU
                                             : (IData)(vlSelf->__VdfgTmp_h41c0d62f__0))
                                         : 0x1fU)) : 
                     ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                      ? ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                          ? 0U : (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c28779a__0))
                                      : 0U))) - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h570bbeb8__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h570bbeb8__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h570bbeb8__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h570bbeb8__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h24426f80__0, vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h24426f80__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h24426f80__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h24426f80__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd818819f__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hd818819f__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hd818819f__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd818819f__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h028e512d__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h028e512d__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h028e512d__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h028e512d__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h91617439__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h91617439__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h91617439__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h91617439__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hfc955d64__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hfc955d64__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hfc955d64__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hfc955d64__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hbbffd6e7__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hbbffd6e7__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hbbffd6e7__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hbbffd6e7__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h1853c060__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h1853c060__0[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h1853c060__0[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h1853c060__0[2U]);
    } else {
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U])))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he2890aea__0, PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_he2890aea__0[0U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_he2890aea__0[1U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_he2890aea__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__result_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT____VdfgTmp_h9ede8a21__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                    & ((0U 
                                                        != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0) 
                                                       & (IData)(vlSelf->__VdfgTmp_h0d51cdd3__0)))
                                                    ? 
                                                   (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                     & (IData)(vlSelf->__VdfgTmp_hbe7af731__0))
                                                     ? 
                                                    (0x80000000U 
                                                     | (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ PvuTop__DOT__result_encoder__DOT___value_after_round_0_T))))
                                                     : PvuTop__DOT__result_encoder__DOT___value_after_round_0_T)
                                                    : 0U);
    PvuTop__DOT____VdfgTmp_hda9cb879__0 = ((0x1fU >= 
                                            (0x3fU 
                                             & ((IData)(0x20U) 
                                                - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            ? (vlSelf->PvuTop__DOT____VdfgTmp_h9ede8a21__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            : 0U);
    vlSelf->io_posit_o_0 = ((5U == (IData)(vlSelf->io_op))
                             ? vlSelf->PvuTop__DOT___GEN_70
                             : ((6U == (IData)(vlSelf->io_op))
                                 ? ((IData)(vlSelf->PvuTop__DOT___GEN_41)
                                     ? vlSelf->PvuTop__DOT____VdfgTmp_h418052cc__0
                                     : ((0x1fU >= (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                         ? (vlSelf->PvuTop__DOT____VdfgTmp_he55579d4__0 
                                            << (0x3fU 
                                                & ((IData)(0x20U) 
                                                   - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                         : 0U)) : ((IData)(vlSelf->PvuTop__DOT___GEN_105)
                                                    ? vlSelf->PvuTop__DOT___GEN_70
                                                    : 
                                                   ((IData)(vlSelf->io_Outposit)
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                      ? 
                                                     ((0x20U 
                                                       == (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))
                                                       ? 
                                                      ((IData)(vlSelf->__VdfgTmp_h0d51cdd3__0)
                                                        ? 
                                                       ((IData)(vlSelf->__VdfgTmp_hbe7af731__0)
                                                         ? 
                                                        (0x80000000U 
                                                         | (0x7fffffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))))
                                                         : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelf->PvuTop__DOT___GEN_41)
                                                        ? vlSelf->PvuTop__DOT____VdfgTmp_h9ede8a21__0
                                                        : 
                                                       ((0x1fU 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(0x20U) 
                                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                         ? 
                                                        (PvuTop__DOT____VdfgTmp_hda9cb879__0 
                                                         << 
                                                         (0x3fU 
                                                          & ((IData)(0x20U) 
                                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                         : 0U)))
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT___GEN_51)
                                                       ? 0U
                                                       : vlSelf->PvuTop__DOT___GEN_69))
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT___GEN_101)
                                                      ? 0U
                                                      : vlSelf->PvuTop__DOT___GEN_69)))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__62(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__62\n"); );
    // Init
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h700eaa50__0;
    PvuTop__DOT____VdfgTmp_h700eaa50__0 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T;
    PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T = 0;
    CData/*0:0*/ PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_hd5170e32__0;
    VlWide<3>/*95:0*/ __Vtemp_hab9252c1__0;
    VlWide<3>/*95:0*/ __Vtemp_h962ced69__0;
    VlWide<3>/*95:0*/ __Vtemp_hfb984936__0;
    VlWide<3>/*95:0*/ __Vtemp_h0bfcd180__0;
    // Body
    PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0 
        = ((0U != vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac) 
           & (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
              & ((IData)(vlSelf->__VdfgTmp_h71c5bb7f__0) 
                 >> 5U)));
    vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((0U == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                      ? 0U : ((1U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
                                                     >> 0x1dU))
                                               : 0U)))) 
                    << 0x39U) | ((QData)((IData)(((0U 
                                                   == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                                   ? 0U
                                                   : 
                                                  (0x7ffffffU 
                                                   & (vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
                                                      >> 2U))))) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((0U 
                                                                           == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                                                           ? 0U
                                                                           : 
                                                                          ((1U 
                                                                            & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                            ? 
                                                                           (3U 
                                                                            & (vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
                                                                               >> 0x1dU))
                                                                            : 0U)))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((0U 
                                                                             == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                                                             ? 0U
                                                                             : 
                                                                            (0x7ffffffU 
                                                                             & (vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
                                                                                >> 2U))))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                         ? 0x1fU : 
                                        ((1U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                          ? (~ (IData)(vlSelf->__VdfgTmp_h71c5bb7f__0))
                                          : 0x1fU)))
                      : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                         ? 0U : ((1U 
                                                  & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                  ? (IData)(vlSelf->__VdfgTmp_h71c5bb7f__0)
                                                  : 0U)))) 
                    - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd5170e32__0, vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hd5170e32__0[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hd5170e32__0[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd5170e32__0[2U]);
    } else {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hab9252c1__0, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hab9252c1__0[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hab9252c1__0[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hab9252c1__0[2U]);
    } else {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h962ced69__0, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h962ced69__0[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h962ced69__0[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h962ced69__0[2U]);
    } else {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hfb984936__0, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hfb984936__0[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hfb984936__0[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hfb984936__0[2U]);
    } else {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h0bfcd180__0, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_h0bfcd180__0[0U];
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h0bfcd180__0[1U];
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h0bfcd180__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT____Vcellout__dot_encoder__io_posit 
        = (((0U != vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac) 
            & (0U != vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6))
            ? ((IData)(vlSelf->PvuTop__DOT___dot_converter_io_pir_sign_o)
                ? (0x80000000U | (0x7fffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T))))
                : PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T)
            : 0U);
    PvuTop__DOT____VdfgTmp_h700eaa50__0 = ((0x1fU >= 
                                            (0x3fU 
                                             & ((IData)(0x20U) 
                                                - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            ? (vlSelf->PvuTop__DOT____Vcellout__dot_encoder__io_posit 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                            : 0U);
    vlSelf->io_posit_dot_o = (((5U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->io_Outposit))
                               ? ((IData)(vlSelf->PvuTop__DOT___GEN_41)
                                   ? vlSelf->PvuTop__DOT____Vcellout__dot_encoder__io_posit
                                   : ((0x1fU >= (0x3fU 
                                                 & ((IData)(0x20U) 
                                                    - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                       ? (PvuTop__DOT____VdfgTmp_h700eaa50__0 
                                          << (0x3fU 
                                              & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                       : 0U)) : 0U);
}

void VPvuTop___024root___eval_nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_nba\n"); );
}

void VPvuTop___024root___eval_triggers__ico(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__ico(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VPvuTop___024root___eval_ico(VPvuTop___024root* vlSelf);
void VPvuTop___024root___eval_triggers__act(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__act(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VPvuTop___024root___eval_act(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__nba(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VPvuTop___024root___eval(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<103> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VPvuTop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VPvuTop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 10064, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VPvuTop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPvuTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPvuTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 10064, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPvuTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPvuTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 10064, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPvuTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPvuTop___024root___eval_debug_assertions(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_op & 0xf0U))) {
        Verilated::overWidthError("io_op");}
    if (VL_UNLIKELY((vlSelf->io_Isposit & 0xfeU))) {
        Verilated::overWidthError("io_Isposit");}
    if (VL_UNLIKELY((vlSelf->io_Outposit & 0xfeU))) {
        Verilated::overWidthError("io_Outposit");}
    if (VL_UNLIKELY((vlSelf->io_float_mode & 0xf8U))) {
        Verilated::overWidthError("io_float_mode");}
    if (VL_UNLIKELY((vlSelf->io_float_posit & 0xfeU))) {
        Verilated::overWidthError("io_float_posit");}
    if (VL_UNLIKELY((vlSelf->io_src_posit_width & 0xc0U))) {
        Verilated::overWidthError("io_src_posit_width");}
    if (VL_UNLIKELY((vlSelf->io_vector_size & 0xf8U))) {
        Verilated::overWidthError("io_vector_size");}
    if (VL_UNLIKELY((vlSelf->io_dst_posit_width & 0xc0U))) {
        Verilated::overWidthError("io_dst_posit_width");}
}
#endif  // VL_DEBUG
