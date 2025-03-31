// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Compressor4to2.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0\n"); );
    // Init
    CData/*0:0*/ __PVT__counter__DOT___carryWire_T_4;
    __PVT__counter__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_1__DOT___carryWire_T_4;
    __PVT__counter_1__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_2__DOT___carryWire_T_4;
    __PVT__counter_2__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_3__DOT___carryWire_T_4;
    __PVT__counter_3__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_4__DOT___carryWire_T_4;
    __PVT__counter_4__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_5__DOT___carryWire_T_4;
    __PVT__counter_5__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_6__DOT___carryWire_T_4;
    __PVT__counter_6__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_7__DOT___carryWire_T_4;
    __PVT__counter_7__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_8__DOT___carryWire_T_4;
    __PVT__counter_8__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_9__DOT___carryWire_T_4;
    __PVT__counter_9__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_10__DOT___carryWire_T_4;
    __PVT__counter_10__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_11__DOT___carryWire_T_4;
    __PVT__counter_11__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_12__DOT___carryWire_T_4;
    __PVT__counter_12__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_13__DOT___carryWire_T_4;
    __PVT__counter_13__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_14__DOT___carryWire_T_4;
    __PVT__counter_14__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_15__DOT___carryWire_T_4;
    __PVT__counter_15__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_16__DOT___carryWire_T_4;
    __PVT__counter_16__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_17__DOT___carryWire_T_4;
    __PVT__counter_17__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_18__DOT___carryWire_T_4;
    __PVT__counter_18__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_19__DOT___carryWire_T_4;
    __PVT__counter_19__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_20__DOT___carryWire_T_4;
    __PVT__counter_20__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_21__DOT___carryWire_T_4;
    __PVT__counter_21__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_22__DOT___carryWire_T_4;
    __PVT__counter_22__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_23__DOT___carryWire_T_4;
    __PVT__counter_23__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_24__DOT___carryWire_T_4;
    __PVT__counter_24__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_25__DOT___carryWire_T_4;
    __PVT__counter_25__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_26__DOT___carryWire_T_4;
    __PVT__counter_26__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_27__DOT___carryWire_T_4;
    __PVT__counter_27__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_28__DOT___carryWire_T_4;
    __PVT__counter_28__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_29__DOT___carryWire_T_4;
    __PVT__counter_29__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_30__DOT___carryWire_T_4;
    __PVT__counter_30__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_31__DOT___carryWire_T_4;
    __PVT__counter_31__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_32__DOT___carryWire_T_4;
    __PVT__counter_32__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_33__DOT___carryWire_T_4;
    __PVT__counter_33__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_34__DOT___carryWire_T_4;
    __PVT__counter_34__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_35__DOT___carryWire_T_4;
    __PVT__counter_35__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_36__DOT___carryWire_T_4;
    __PVT__counter_36__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_37__DOT___carryWire_T_4;
    __PVT__counter_37__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_38__DOT___carryWire_T_4;
    __PVT__counter_38__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_39__DOT___carryWire_T_4;
    __PVT__counter_39__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_40__DOT___carryWire_T_4;
    __PVT__counter_40__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_41__DOT___carryWire_T_4;
    __PVT__counter_41__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_42__DOT___carryWire_T_4;
    __PVT__counter_42__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_43__DOT___carryWire_T_4;
    __PVT__counter_43__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_44__DOT___carryWire_T_4;
    __PVT__counter_44__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_45__DOT___carryWire_T_4;
    __PVT__counter_45__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_46__DOT___carryWire_T_4;
    __PVT__counter_46__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_47__DOT___carryWire_T_4;
    __PVT__counter_47__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_48__DOT___carryWire_T_4;
    __PVT__counter_48__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_49__DOT___carryWire_T_4;
    __PVT__counter_49__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_50__DOT___carryWire_T_4;
    __PVT__counter_50__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_51__DOT___carryWire_T_4;
    __PVT__counter_51__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_52__DOT___carryWire_T_4;
    __PVT__counter_52__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_53__DOT___carryWire_T_4;
    __PVT__counter_53__DOT___carryWire_T_4 = 0;
    // Body
    __PVT__counter__DOT___carryWire_T_4 = (1U & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                 ^ 
                                                 (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                  >> 0x18U)));
    vlSelf->__PVT__counter_54__DOT___carryWire_T_4 
        = (1U & ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                  >> 0x16U) ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                               >> 0xeU)));
    __PVT__counter_1__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 1U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x19U)));
    __PVT__counter_2__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 2U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1aU)));
    __PVT__counter_3__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1bU)));
    __PVT__counter_4__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1cU)));
    __PVT__counter_5__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1dU)));
    __PVT__counter_6__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1eU)));
    __PVT__counter_7__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1fU)));
    __PVT__counter_8__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 8U) 
                                                   ^ 
                                                   vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U]));
    __PVT__counter_9__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                    >> 1U)));
    __PVT__counter_10__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xaU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 2U)));
    __PVT__counter_11__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xbU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 3U)));
    __PVT__counter_12__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xcU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 4U)));
    __PVT__counter_13__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xdU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 5U)));
    __PVT__counter_14__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xeU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 6U)));
    __PVT__counter_15__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xfU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 7U)));
    __PVT__counter_16__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x10U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 8U)));
    __PVT__counter_17__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x11U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 9U)));
    __PVT__counter_18__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x12U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xaU)));
    __PVT__counter_19__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x13U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xbU)));
    __PVT__counter_20__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x14U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xcU)));
    __PVT__counter_21__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x15U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xdU)));
    __PVT__counter_22__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x16U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xeU)));
    __PVT__counter_23__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x17U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xfU)));
    __PVT__counter_24__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x18U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x10U)));
    __PVT__counter_25__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x19U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x11U)));
    __PVT__counter_26__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1aU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x12U)));
    __PVT__counter_27__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1bU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x13U)));
    __PVT__counter_28__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1cU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x14U)));
    __PVT__counter_29__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1dU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x15U)));
    __PVT__counter_30__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1eU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x16U)));
    __PVT__counter_31__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1fU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x17U)));
    __PVT__counter_32__DOT___carryWire_T_4 = (1U & 
                                              (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x18U)));
    __PVT__counter_33__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 1U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x19U)));
    __PVT__counter_34__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 2U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1aU)));
    __PVT__counter_35__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 3U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1bU)));
    __PVT__counter_36__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 4U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1cU)));
    __PVT__counter_37__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 5U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1dU)));
    __PVT__counter_38__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 6U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1eU)));
    __PVT__counter_39__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 7U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1fU)));
    __PVT__counter_40__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 8U) 
                                               ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U]));
    __PVT__counter_41__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 9U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 1U)));
    __PVT__counter_42__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xaU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 2U)));
    __PVT__counter_43__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xbU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 3U)));
    __PVT__counter_44__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xcU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 4U)));
    __PVT__counter_45__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xdU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 5U)));
    __PVT__counter_46__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xeU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 6U)));
    __PVT__counter_47__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xfU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 7U)));
    __PVT__counter_48__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x10U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 8U)));
    __PVT__counter_49__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x11U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 9U)));
    __PVT__counter_50__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x12U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xaU)));
    __PVT__counter_51__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x13U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xbU)));
    __PVT__counter_52__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x14U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xcU)));
    __PVT__counter_53__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x15U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xdU)));
    vlSelf->__PVT___counter_io_cout = (1U & (((IData)(__PVT__counter__DOT___carryWire_T_4) 
                                              & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                 >> 0x10U)) 
                                             | ((~ (IData)(__PVT__counter__DOT___carryWire_T_4)) 
                                                & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U])));
    vlSelf->counter__DOT____VdfgTmp_h31758f64__0 = 
        (1U & ((IData)(__PVT__counter__DOT___carryWire_T_4) 
               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                  >> 0x10U)));
    vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 6U)));
    vlSelf->__PVT___counter_1_io_cout = (1U & (((IData)(__PVT__counter_1__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x11U)) 
                                               | ((~ (IData)(__PVT__counter_1__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 1U))));
    vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_1__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x11U)));
    vlSelf->__PVT___counter_2_io_cout = (1U & (((IData)(__PVT__counter_2__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x12U)) 
                                               | ((~ (IData)(__PVT__counter_2__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 2U))));
    vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_2__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x12U)));
    vlSelf->__PVT___counter_3_io_cout = (1U & (((IData)(__PVT__counter_3__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x13U)) 
                                               | ((~ (IData)(__PVT__counter_3__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 3U))));
    vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_3__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x13U)));
    vlSelf->__PVT___counter_4_io_cout = (1U & (((IData)(__PVT__counter_4__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x14U)) 
                                               | ((~ (IData)(__PVT__counter_4__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 4U))));
    vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_4__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x14U)));
    vlSelf->__PVT___counter_5_io_cout = (1U & (((IData)(__PVT__counter_5__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x15U)) 
                                               | ((~ (IData)(__PVT__counter_5__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 5U))));
    vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_5__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x15U)));
    vlSelf->__PVT___counter_6_io_cout = (1U & (((IData)(__PVT__counter_6__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x16U)) 
                                               | ((~ (IData)(__PVT__counter_6__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 6U))));
    vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_6__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x16U)));
    vlSelf->__PVT___counter_7_io_cout = (1U & (((IData)(__PVT__counter_7__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x17U)) 
                                               | ((~ (IData)(__PVT__counter_7__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 7U))));
    vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_7__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x17U)));
    vlSelf->__PVT___counter_8_io_cout = (1U & (((IData)(__PVT__counter_8__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x18U)) 
                                               | ((~ (IData)(__PVT__counter_8__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 8U))));
    vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_8__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x18U)));
    vlSelf->__PVT___counter_9_io_cout = (1U & (((IData)(__PVT__counter_9__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x19U)) 
                                               | ((~ (IData)(__PVT__counter_9__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 9U))));
    vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_9__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x19U)));
    vlSelf->__PVT___counter_10_io_cout = (1U & (((IData)(__PVT__counter_10__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1aU)) 
                                                | ((~ (IData)(__PVT__counter_10__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xaU))));
    vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_10__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1aU)));
    vlSelf->__PVT___counter_11_io_cout = (1U & (((IData)(__PVT__counter_11__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1bU)) 
                                                | ((~ (IData)(__PVT__counter_11__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xbU))));
    vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_11__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1bU)));
    vlSelf->__PVT___counter_12_io_cout = (1U & (((IData)(__PVT__counter_12__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1cU)) 
                                                | ((~ (IData)(__PVT__counter_12__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xcU))));
    vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_12__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1cU)));
    vlSelf->__PVT___counter_13_io_cout = (1U & (((IData)(__PVT__counter_13__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1dU)) 
                                                | ((~ (IData)(__PVT__counter_13__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xdU))));
    vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_13__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1dU)));
    vlSelf->__PVT___counter_14_io_cout = (1U & (((IData)(__PVT__counter_14__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1eU)) 
                                                | ((~ (IData)(__PVT__counter_14__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xeU))));
    vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_14__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1eU)));
    vlSelf->__PVT___counter_15_io_cout = (1U & (((IData)(__PVT__counter_15__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1fU)) 
                                                | ((~ (IData)(__PVT__counter_15__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xfU))));
    vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0 
        = ((IData)(__PVT__counter_15__DOT___carryWire_T_4) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
              >> 0x1fU));
    vlSelf->__PVT___counter_16_io_cout = (1U & (((IData)(__PVT__counter_16__DOT___carryWire_T_4) 
                                                 & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U]) 
                                                | ((~ (IData)(__PVT__counter_16__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x10U))));
    vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_16__DOT___carryWire_T_4) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U]));
    vlSelf->__PVT___counter_17_io_cout = (1U & (((IData)(__PVT__counter_17__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 1U)) 
                                                | ((~ (IData)(__PVT__counter_17__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x11U))));
    vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_17__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 1U)));
    vlSelf->__PVT___counter_18_io_cout = (1U & (((IData)(__PVT__counter_18__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 2U)) 
                                                | ((~ (IData)(__PVT__counter_18__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x12U))));
    vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_18__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 2U)));
    vlSelf->__PVT___counter_19_io_cout = (1U & (((IData)(__PVT__counter_19__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 3U)) 
                                                | ((~ (IData)(__PVT__counter_19__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x13U))));
    vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_19__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 3U)));
    vlSelf->__PVT___counter_20_io_cout = (1U & (((IData)(__PVT__counter_20__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 4U)) 
                                                | ((~ (IData)(__PVT__counter_20__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x14U))));
    vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_20__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 4U)));
    vlSelf->__PVT___counter_21_io_cout = (1U & (((IData)(__PVT__counter_21__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 5U)) 
                                                | ((~ (IData)(__PVT__counter_21__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x15U))));
    vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_21__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 5U)));
    vlSelf->__PVT___counter_22_io_cout = (1U & (((IData)(__PVT__counter_22__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 6U)) 
                                                | ((~ (IData)(__PVT__counter_22__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x16U))));
    vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_22__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 6U)));
    vlSelf->__PVT___counter_23_io_cout = (1U & (((IData)(__PVT__counter_23__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 7U)) 
                                                | ((~ (IData)(__PVT__counter_23__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x17U))));
    vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_23__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 7U)));
    vlSelf->__PVT___counter_24_io_cout = (1U & (((IData)(__PVT__counter_24__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 8U)) 
                                                | ((~ (IData)(__PVT__counter_24__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x18U))));
    vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_24__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 8U)));
    vlSelf->__PVT___counter_25_io_cout = (1U & (((IData)(__PVT__counter_25__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 9U)) 
                                                | ((~ (IData)(__PVT__counter_25__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x19U))));
    vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_25__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 9U)));
    vlSelf->__PVT___counter_26_io_cout = (1U & (((IData)(__PVT__counter_26__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xaU)) 
                                                | ((~ (IData)(__PVT__counter_26__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1aU))));
    vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_26__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xaU)));
    vlSelf->__PVT___counter_27_io_cout = (1U & (((IData)(__PVT__counter_27__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xbU)) 
                                                | ((~ (IData)(__PVT__counter_27__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1bU))));
    vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_27__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xbU)));
    vlSelf->__PVT___counter_28_io_cout = (1U & (((IData)(__PVT__counter_28__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xcU)) 
                                                | ((~ (IData)(__PVT__counter_28__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1cU))));
    vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_28__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xcU)));
    vlSelf->__PVT___counter_29_io_cout = (1U & (((IData)(__PVT__counter_29__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xdU)) 
                                                | ((~ (IData)(__PVT__counter_29__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1dU))));
    vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_29__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xdU)));
    vlSelf->__PVT___counter_30_io_cout = (1U & (((IData)(__PVT__counter_30__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xeU)) 
                                                | ((~ (IData)(__PVT__counter_30__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1eU))));
    vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_30__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xeU)));
    vlSelf->__PVT___counter_31_io_cout = (1U & (((IData)(__PVT__counter_31__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xfU)) 
                                                | ((~ (IData)(__PVT__counter_31__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1fU))));
    vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_31__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xfU)));
    vlSelf->__PVT___counter_32_io_cout = (1U & (((IData)(__PVT__counter_32__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x10U)) 
                                                | ((~ (IData)(__PVT__counter_32__DOT___carryWire_T_4)) 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U])));
    vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_32__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x10U)));
    vlSelf->__PVT___counter_33_io_cout = (1U & (((IData)(__PVT__counter_33__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x11U)) 
                                                | ((~ (IData)(__PVT__counter_33__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 1U))));
    vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_33__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x11U)));
    vlSelf->__PVT___counter_34_io_cout = (1U & (((IData)(__PVT__counter_34__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x12U)) 
                                                | ((~ (IData)(__PVT__counter_34__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 2U))));
    vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_34__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x12U)));
    vlSelf->__PVT___counter_35_io_cout = (1U & (((IData)(__PVT__counter_35__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x13U)) 
                                                | ((~ (IData)(__PVT__counter_35__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 3U))));
    vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_35__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x13U)));
    vlSelf->__PVT___counter_36_io_cout = (1U & (((IData)(__PVT__counter_36__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x14U)) 
                                                | ((~ (IData)(__PVT__counter_36__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 4U))));
    vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_36__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x14U)));
    vlSelf->__PVT___counter_37_io_cout = (1U & (((IData)(__PVT__counter_37__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x15U)) 
                                                | ((~ (IData)(__PVT__counter_37__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 5U))));
    vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_37__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x15U)));
    vlSelf->__PVT___counter_38_io_cout = (1U & (((IData)(__PVT__counter_38__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x16U)) 
                                                | ((~ (IData)(__PVT__counter_38__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 6U))));
    vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_38__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x16U)));
    vlSelf->__PVT___counter_39_io_cout = (1U & (((IData)(__PVT__counter_39__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x17U)) 
                                                | ((~ (IData)(__PVT__counter_39__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 7U))));
    vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_39__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x17U)));
    vlSelf->__PVT___counter_40_io_cout = (1U & (((IData)(__PVT__counter_40__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x18U)) 
                                                | ((~ (IData)(__PVT__counter_40__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 8U))));
    vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_40__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x18U)));
    vlSelf->__PVT___counter_41_io_cout = (1U & (((IData)(__PVT__counter_41__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x19U)) 
                                                | ((~ (IData)(__PVT__counter_41__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 9U))));
    vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_41__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x19U)));
    vlSelf->__PVT___counter_42_io_cout = (1U & (((IData)(__PVT__counter_42__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1aU)) 
                                                | ((~ (IData)(__PVT__counter_42__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xaU))));
    vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_42__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1aU)));
    vlSelf->__PVT___counter_43_io_cout = (1U & (((IData)(__PVT__counter_43__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1bU)) 
                                                | ((~ (IData)(__PVT__counter_43__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xbU))));
    vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_43__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1bU)));
    vlSelf->__PVT___counter_44_io_cout = (1U & (((IData)(__PVT__counter_44__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1cU)) 
                                                | ((~ (IData)(__PVT__counter_44__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xcU))));
    vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_44__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1cU)));
    vlSelf->__PVT___counter_45_io_cout = (1U & (((IData)(__PVT__counter_45__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1dU)) 
                                                | ((~ (IData)(__PVT__counter_45__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xdU))));
    vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_45__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1dU)));
    vlSelf->__PVT___counter_46_io_cout = (1U & (((IData)(__PVT__counter_46__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1eU)) 
                                                | ((~ (IData)(__PVT__counter_46__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xeU))));
    vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_46__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1eU)));
    vlSelf->__PVT___counter_47_io_cout = (1U & (((IData)(__PVT__counter_47__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1fU)) 
                                                | ((~ (IData)(__PVT__counter_47__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xfU))));
    vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0 
        = ((IData)(__PVT__counter_47__DOT___carryWire_T_4) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
              >> 0x1fU));
    vlSelf->__PVT___counter_48_io_cout = (1U & (((IData)(__PVT__counter_48__DOT___carryWire_T_4) 
                                                 & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U]) 
                                                | ((~ (IData)(__PVT__counter_48__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x10U))));
    vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_48__DOT___carryWire_T_4) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U]));
    vlSelf->__PVT___counter_49_io_cout = (1U & (((IData)(__PVT__counter_49__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 1U)) 
                                                | ((~ (IData)(__PVT__counter_49__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x11U))));
    vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_49__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 1U)));
    vlSelf->__PVT___counter_50_io_cout = (1U & (((IData)(__PVT__counter_50__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 2U)) 
                                                | ((~ (IData)(__PVT__counter_50__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x12U))));
    vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_50__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 2U)));
    vlSelf->__PVT___counter_51_io_cout = (1U & (((IData)(__PVT__counter_51__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 3U)) 
                                                | ((~ (IData)(__PVT__counter_51__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x13U))));
    vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_51__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 3U)));
    vlSelf->__PVT___counter_52_io_cout = (1U & (((IData)(__PVT__counter_52__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 4U)) 
                                                | ((~ (IData)(__PVT__counter_52__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x14U))));
    vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_52__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 4U)));
    vlSelf->__PVT___counter_53_io_cout = (1U & (((IData)(__PVT__counter_53__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 5U)) 
                                                | ((~ (IData)(__PVT__counter_53__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x15U))));
    vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_53__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 5U)));
    vlSelf->counter_54__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1eU)));
    vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 9U)));
    vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xaU)));
    vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xbU)));
    vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xcU)));
    vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xdU)));
    vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xeU)));
    vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xfU)));
    vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x10U)));
    vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x11U)));
    vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x12U)));
    vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x13U)));
    vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x14U)));
    vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x15U)));
    vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x16U)));
    vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x17U)));
    vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x18U)));
    vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x19U)));
    vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1aU)));
    vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1bU)));
    vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1cU)));
    vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1dU)));
    vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1eU)));
    vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0 
        = ((IData)(vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
              >> 0x1fU));
    vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U]));
    vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 1U)));
    vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 2U)));
    vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 3U)));
    vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 4U)));
    vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 5U)));
    vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 6U)));
    vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 7U)));
    vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 8U)));
    vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 9U)));
    vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xaU)));
    vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xbU)));
    vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xcU)));
    vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xdU)));
    vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xeU)));
    vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xfU)));
    vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x10U)));
    vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x11U)));
    vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x12U)));
    vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x13U)));
    vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x14U)));
    vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x15U)));
    vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x16U)));
    vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x17U)));
    vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x18U)));
    vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x19U)));
    vlSelf->counter_50__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1aU)));
    vlSelf->counter_51__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1bU)));
    vlSelf->counter_52__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1cU)));
    vlSelf->counter_53__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1dU)));
    vlSelf->__PVT__io_sum_o = (((QData)((IData)((1U 
                                                 & (((((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                        >> 0x17U) 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                        >> 0xfU)) 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                       >> 7U)) 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                      >> 0x1fU)) 
                                                    ^ 
                                                    (((IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4) 
                                                      & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                         >> 6U)) 
                                                     | ((~ (IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4)) 
                                                        & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                           >> 0x16U))))))) 
                                << 0x37U) | (((QData)((IData)(
                                                              ((IData)(vlSelf->counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                                               ^ (IData)(vlSelf->__PVT___counter_53_io_cout)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                  ^ (IData)(vlSelf->__PVT___counter_52_io_cout)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                     ^ (IData)(vlSelf->__PVT___counter_51_io_cout)))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelf->counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                        ^ (IData)(vlSelf->__PVT___counter_50_io_cout)))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlSelf->counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                           ^ (IData)(vlSelf->__PVT___counter_49_io_cout)))) 
                                                          << 0x32U) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                              ^ (IData)(vlSelf->__PVT___counter_48_io_cout)))) 
                                                             << 0x31U) 
                                                            | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_47_io_cout)))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_46_io_cout)))) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_45_io_cout)))) 
                                                                      << 0x2eU) 
                                                                     | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_44_io_cout)))) 
                                                                         << 0x2dU) 
                                                                        | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_43_io_cout)))) 
                                                                            << 0x2cU) 
                                                                           | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_42_io_cout)))) 
                                                                               << 0x2bU) 
                                                                              | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_41_io_cout)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_40_io_cout)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_39_io_cout)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_38_io_cout)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_37_io_cout)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_36_io_cout)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_35_io_cout)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_34_io_cout)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_33_io_cout)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_32_io_cout)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_31_io_cout)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_30_io_cout)) 
                                                                                << 0x1fU) 
                                                                                | ((((IData)(vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_29_io_cout)) 
                                                                                << 0x1eU) 
                                                                                | ((((IData)(vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_28_io_cout)) 
                                                                                << 0x1dU) 
                                                                                | ((((IData)(vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_27_io_cout)) 
                                                                                << 0x1cU) 
                                                                                | ((((IData)(vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_26_io_cout)) 
                                                                                << 0x1bU) 
                                                                                | ((((IData)(vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_25_io_cout)) 
                                                                                << 0x1aU) 
                                                                                | ((((IData)(vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_24_io_cout)) 
                                                                                << 0x19U) 
                                                                                | ((((IData)(vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_23_io_cout)) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_22_io_cout)) 
                                                                                << 0x17U) 
                                                                                | ((((IData)(vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_21_io_cout)) 
                                                                                << 0x16U) 
                                                                                | ((((IData)(vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_20_io_cout)) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_19_io_cout)) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_18_io_cout)) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_17_io_cout)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_16_io_cout)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_15_io_cout)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_14_io_cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_13_io_cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_12_io_cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_11_io_cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_10_io_cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_9_io_cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_8_io_cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_7_io_cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_6_io_cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_5_io_cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_4_io_cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_3_io_cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_2_io_cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_1_io_cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_io_cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->counter__DOT____VdfgTmp_h31758f64__0) 
                                                                                ^ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 8U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__io_carry_o = (((QData)((IData)((1U 
                                                   & (((IData)(vlSelf->counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                                       & (IData)(vlSelf->__PVT___counter_53_io_cout)) 
                                                      | (((~ 
                                                           (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                            >> 0x1eU)) 
                                                          ^ (IData)(vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                                         & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                            >> 0x1eU)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (((IData)(vlSelf->counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                     & (IData)(vlSelf->__PVT___counter_52_io_cout)) 
                                                                    | (((~ 
                                                                         (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                          >> 0x1dU)) 
                                                                        ^ (IData)(vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                                                       & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                          >> 0x1dU)))))) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (((IData)(vlSelf->counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                        & (IData)(vlSelf->__PVT___counter_51_io_cout)) 
                                                                       | (((~ 
                                                                            (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                             >> 0x1cU)) 
                                                                           ^ (IData)(vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                                                          & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                             >> 0x1cU)))))) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (((IData)(vlSelf->counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                           & (IData)(vlSelf->__PVT___counter_50_io_cout)) 
                                                                          | (((~ 
                                                                               (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1bU)) 
                                                                              ^ (IData)(vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1bU)))))) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                              & (IData)(vlSelf->__PVT___counter_49_io_cout)) 
                                                                             | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1aU)) 
                                                                                ^ (IData)(vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1aU)))))) 
                                                         << 0x33U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((IData)(vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_48_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x19U)))))) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (((IData)(vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_47_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x18U)) 
                                                                                ^ (IData)(vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x18U)))))) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_46_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x17U)))))) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_45_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x16U)))))) 
                                                                     << 0x2fU) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_44_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x15U)))))) 
                                                                        << 0x2eU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_43_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x14U)))))) 
                                                                           << 0x2dU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_42_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x13U)))))) 
                                                                              << 0x2cU) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_41_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x12U)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_40_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x11U)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_39_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x10U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_38_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xfU)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_37_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xeU)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_36_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xdU)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_35_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xcU)))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_34_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xbU)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_33_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xaU)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_32_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 9U)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_31_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 8U)) 
                                                                                ^ (IData)(vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 8U)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_30_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 7U)) 
                                                                                ^ (IData)(vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 7U)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((((IData)(vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_29_io_cout)) 
                                                                                << 0x1fU) 
                                                                                | (0x80000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 6U)) 
                                                                                ^ (IData)(vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1fU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x40000000U 
                                                                                & ((((IData)(vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_28_io_cout)) 
                                                                                << 0x1eU) 
                                                                                | (0xc0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 5U)) 
                                                                                ^ (IData)(vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1eU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x20000000U 
                                                                                & ((((IData)(vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_27_io_cout)) 
                                                                                << 0x1dU) 
                                                                                | (0xe0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 4U)) 
                                                                                ^ (IData)(vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1dU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x10000000U 
                                                                                & ((((IData)(vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_26_io_cout)) 
                                                                                << 0x1cU) 
                                                                                | (0xf0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 3U)) 
                                                                                ^ (IData)(vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1cU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x8000000U 
                                                                                & ((((IData)(vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_25_io_cout)) 
                                                                                << 0x1bU) 
                                                                                | (0xf8000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 2U)) 
                                                                                ^ (IData)(vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1bU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_24_io_cout)) 
                                                                                << 0x1aU) 
                                                                                | (0xfc000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 1U)) 
                                                                                ^ (IData)(vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1aU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_23_io_cout)) 
                                                                                | (((~ 
                                                                                vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U]) 
                                                                                ^ (IData)(vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U])) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_22_io_cout)) 
                                                                                << 0x18U) 
                                                                                | (0x1000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1fU)) 
                                                                                ^ (IData)(vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x18U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_21_io_cout)) 
                                                                                << 0x17U) 
                                                                                | (0x1800000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1eU)) 
                                                                                ^ (IData)(vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x17U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_20_io_cout)) 
                                                                                << 0x16U) 
                                                                                | (0x1c00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1dU)) 
                                                                                ^ (IData)(vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x16U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_19_io_cout)) 
                                                                                << 0x15U) 
                                                                                | (0x1e00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1cU)) 
                                                                                ^ (IData)(vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x15U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_18_io_cout)) 
                                                                                << 0x14U) 
                                                                                | (0x1f00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1bU)) 
                                                                                ^ (IData)(vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x14U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_17_io_cout)) 
                                                                                << 0x13U) 
                                                                                | (0x1f80000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1aU)) 
                                                                                ^ (IData)(vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x13U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_16_io_cout)) 
                                                                                << 0x12U) 
                                                                                | (0x1fc0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x12U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_15_io_cout)) 
                                                                                << 0x11U) 
                                                                                | (0x1fe0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x18U)) 
                                                                                ^ (IData)(vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x11U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_14_io_cout)) 
                                                                                << 0x10U) 
                                                                                | (0x1ff0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x10U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_13_io_cout)) 
                                                                                << 0xfU) 
                                                                                | (0x1ff8000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xfU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_12_io_cout)) 
                                                                                << 0xeU) 
                                                                                | (0x1ffc000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xeU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_11_io_cout)) 
                                                                                << 0xdU) 
                                                                                | (0x1ffe000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xdU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_10_io_cout)) 
                                                                                << 0xcU) 
                                                                                | (0x1fff000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xcU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_9_io_cout)) 
                                                                                << 0xbU) 
                                                                                | (0x1fff800U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_8_io_cout)) 
                                                                                << 0xaU) 
                                                                                | (0x1fffc00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_7_io_cout)) 
                                                                                << 9U) 
                                                                                | (0x1fffe00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_6_io_cout)) 
                                                                                << 8U) 
                                                                                | (0x1ffff00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 8U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_5_io_cout)) 
                                                                                << 7U) 
                                                                                | (0x1ffff80U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 7U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_4_io_cout)) 
                                                                                << 6U) 
                                                                                | (0x1ffffc0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 6U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_3_io_cout)) 
                                                                                << 5U) 
                                                                                | (0x1ffffe0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 5U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_2_io_cout)) 
                                                                                << 4U) 
                                                                                | (0x1fffff0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 4U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_1_io_cout)) 
                                                                                << 3U) 
                                                                                | (0x1fffff8U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_io_cout)) 
                                                                                << 2U) 
                                                                                | (0x1fffffcU 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 2U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | (2U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 8U)) 
                                                                                ^ (IData)(vlSelf->counter__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 1U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor__0\n"); );
    // Init
    CData/*0:0*/ __PVT__counter__DOT___carryWire_T_4;
    __PVT__counter__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_1__DOT___carryWire_T_4;
    __PVT__counter_1__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_2__DOT___carryWire_T_4;
    __PVT__counter_2__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_3__DOT___carryWire_T_4;
    __PVT__counter_3__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_4__DOT___carryWire_T_4;
    __PVT__counter_4__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_5__DOT___carryWire_T_4;
    __PVT__counter_5__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_6__DOT___carryWire_T_4;
    __PVT__counter_6__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_7__DOT___carryWire_T_4;
    __PVT__counter_7__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_8__DOT___carryWire_T_4;
    __PVT__counter_8__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_9__DOT___carryWire_T_4;
    __PVT__counter_9__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_10__DOT___carryWire_T_4;
    __PVT__counter_10__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_11__DOT___carryWire_T_4;
    __PVT__counter_11__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_12__DOT___carryWire_T_4;
    __PVT__counter_12__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_13__DOT___carryWire_T_4;
    __PVT__counter_13__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_14__DOT___carryWire_T_4;
    __PVT__counter_14__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_15__DOT___carryWire_T_4;
    __PVT__counter_15__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_16__DOT___carryWire_T_4;
    __PVT__counter_16__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_17__DOT___carryWire_T_4;
    __PVT__counter_17__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_18__DOT___carryWire_T_4;
    __PVT__counter_18__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_19__DOT___carryWire_T_4;
    __PVT__counter_19__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_20__DOT___carryWire_T_4;
    __PVT__counter_20__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_21__DOT___carryWire_T_4;
    __PVT__counter_21__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_22__DOT___carryWire_T_4;
    __PVT__counter_22__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_23__DOT___carryWire_T_4;
    __PVT__counter_23__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_24__DOT___carryWire_T_4;
    __PVT__counter_24__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_25__DOT___carryWire_T_4;
    __PVT__counter_25__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_26__DOT___carryWire_T_4;
    __PVT__counter_26__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_27__DOT___carryWire_T_4;
    __PVT__counter_27__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_28__DOT___carryWire_T_4;
    __PVT__counter_28__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_29__DOT___carryWire_T_4;
    __PVT__counter_29__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_30__DOT___carryWire_T_4;
    __PVT__counter_30__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_31__DOT___carryWire_T_4;
    __PVT__counter_31__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_32__DOT___carryWire_T_4;
    __PVT__counter_32__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_33__DOT___carryWire_T_4;
    __PVT__counter_33__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_34__DOT___carryWire_T_4;
    __PVT__counter_34__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_35__DOT___carryWire_T_4;
    __PVT__counter_35__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_36__DOT___carryWire_T_4;
    __PVT__counter_36__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_37__DOT___carryWire_T_4;
    __PVT__counter_37__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_38__DOT___carryWire_T_4;
    __PVT__counter_38__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_39__DOT___carryWire_T_4;
    __PVT__counter_39__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_40__DOT___carryWire_T_4;
    __PVT__counter_40__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_41__DOT___carryWire_T_4;
    __PVT__counter_41__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_42__DOT___carryWire_T_4;
    __PVT__counter_42__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_43__DOT___carryWire_T_4;
    __PVT__counter_43__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_44__DOT___carryWire_T_4;
    __PVT__counter_44__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_45__DOT___carryWire_T_4;
    __PVT__counter_45__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_46__DOT___carryWire_T_4;
    __PVT__counter_46__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_47__DOT___carryWire_T_4;
    __PVT__counter_47__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_48__DOT___carryWire_T_4;
    __PVT__counter_48__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_49__DOT___carryWire_T_4;
    __PVT__counter_49__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_50__DOT___carryWire_T_4;
    __PVT__counter_50__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_51__DOT___carryWire_T_4;
    __PVT__counter_51__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_52__DOT___carryWire_T_4;
    __PVT__counter_52__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_53__DOT___carryWire_T_4;
    __PVT__counter_53__DOT___carryWire_T_4 = 0;
    // Body
    __PVT__counter__DOT___carryWire_T_4 = (1U & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                 ^ 
                                                 (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                  >> 0x18U)));
    vlSelf->__PVT__counter_54__DOT___carryWire_T_4 
        = (1U & ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                  >> 0x16U) ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                               >> 0xeU)));
    __PVT__counter_1__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 1U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x19U)));
    __PVT__counter_2__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 2U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1aU)));
    __PVT__counter_3__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1bU)));
    __PVT__counter_4__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1cU)));
    __PVT__counter_5__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1dU)));
    __PVT__counter_6__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1eU)));
    __PVT__counter_7__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1fU)));
    __PVT__counter_8__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 8U) 
                                                   ^ 
                                                   vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U]));
    __PVT__counter_9__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                    >> 1U)));
    __PVT__counter_10__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xaU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 2U)));
    __PVT__counter_11__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xbU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 3U)));
    __PVT__counter_12__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xcU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 4U)));
    __PVT__counter_13__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xdU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 5U)));
    __PVT__counter_14__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xeU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 6U)));
    __PVT__counter_15__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xfU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 7U)));
    __PVT__counter_16__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x10U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 8U)));
    __PVT__counter_17__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x11U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 9U)));
    __PVT__counter_18__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x12U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xaU)));
    __PVT__counter_19__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x13U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xbU)));
    __PVT__counter_20__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x14U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xcU)));
    __PVT__counter_21__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x15U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xdU)));
    __PVT__counter_22__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x16U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xeU)));
    __PVT__counter_23__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x17U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xfU)));
    __PVT__counter_24__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x18U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x10U)));
    __PVT__counter_25__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x19U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x11U)));
    __PVT__counter_26__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1aU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x12U)));
    __PVT__counter_27__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1bU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x13U)));
    __PVT__counter_28__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1cU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x14U)));
    __PVT__counter_29__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1dU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x15U)));
    __PVT__counter_30__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1eU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x16U)));
    __PVT__counter_31__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1fU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x17U)));
    __PVT__counter_32__DOT___carryWire_T_4 = (1U & 
                                              (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x18U)));
    __PVT__counter_33__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 1U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x19U)));
    __PVT__counter_34__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 2U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1aU)));
    __PVT__counter_35__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 3U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1bU)));
    __PVT__counter_36__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 4U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1cU)));
    __PVT__counter_37__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 5U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1dU)));
    __PVT__counter_38__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 6U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1eU)));
    __PVT__counter_39__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 7U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1fU)));
    __PVT__counter_40__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 8U) 
                                               ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U]));
    __PVT__counter_41__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 9U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 1U)));
    __PVT__counter_42__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xaU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 2U)));
    __PVT__counter_43__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xbU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 3U)));
    __PVT__counter_44__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xcU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 4U)));
    __PVT__counter_45__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xdU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 5U)));
    __PVT__counter_46__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xeU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 6U)));
    __PVT__counter_47__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xfU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 7U)));
    __PVT__counter_48__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x10U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 8U)));
    __PVT__counter_49__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x11U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 9U)));
    __PVT__counter_50__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x12U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xaU)));
    __PVT__counter_51__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x13U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xbU)));
    __PVT__counter_52__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x14U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xcU)));
    __PVT__counter_53__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x15U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xdU)));
    vlSelf->__PVT___counter_io_cout = (1U & (((IData)(__PVT__counter__DOT___carryWire_T_4) 
                                              & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                 >> 0x10U)) 
                                             | ((~ (IData)(__PVT__counter__DOT___carryWire_T_4)) 
                                                & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U])));
    vlSelf->counter__DOT____VdfgTmp_h31758f64__0 = 
        (1U & ((IData)(__PVT__counter__DOT___carryWire_T_4) 
               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                  >> 0x10U)));
    vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 6U)));
    vlSelf->__PVT___counter_1_io_cout = (1U & (((IData)(__PVT__counter_1__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x11U)) 
                                               | ((~ (IData)(__PVT__counter_1__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 1U))));
    vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_1__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x11U)));
    vlSelf->__PVT___counter_2_io_cout = (1U & (((IData)(__PVT__counter_2__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x12U)) 
                                               | ((~ (IData)(__PVT__counter_2__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 2U))));
    vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_2__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x12U)));
    vlSelf->__PVT___counter_3_io_cout = (1U & (((IData)(__PVT__counter_3__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x13U)) 
                                               | ((~ (IData)(__PVT__counter_3__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 3U))));
    vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_3__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x13U)));
    vlSelf->__PVT___counter_4_io_cout = (1U & (((IData)(__PVT__counter_4__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x14U)) 
                                               | ((~ (IData)(__PVT__counter_4__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 4U))));
    vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_4__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x14U)));
    vlSelf->__PVT___counter_5_io_cout = (1U & (((IData)(__PVT__counter_5__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x15U)) 
                                               | ((~ (IData)(__PVT__counter_5__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 5U))));
    vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_5__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x15U)));
    vlSelf->__PVT___counter_6_io_cout = (1U & (((IData)(__PVT__counter_6__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x16U)) 
                                               | ((~ (IData)(__PVT__counter_6__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 6U))));
    vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_6__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x16U)));
    vlSelf->__PVT___counter_7_io_cout = (1U & (((IData)(__PVT__counter_7__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x17U)) 
                                               | ((~ (IData)(__PVT__counter_7__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 7U))));
    vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_7__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x17U)));
    vlSelf->__PVT___counter_8_io_cout = (1U & (((IData)(__PVT__counter_8__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x18U)) 
                                               | ((~ (IData)(__PVT__counter_8__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 8U))));
    vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_8__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x18U)));
    vlSelf->__PVT___counter_9_io_cout = (1U & (((IData)(__PVT__counter_9__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x19U)) 
                                               | ((~ (IData)(__PVT__counter_9__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 9U))));
    vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_9__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x19U)));
    vlSelf->__PVT___counter_10_io_cout = (1U & (((IData)(__PVT__counter_10__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1aU)) 
                                                | ((~ (IData)(__PVT__counter_10__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xaU))));
    vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_10__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1aU)));
    vlSelf->__PVT___counter_11_io_cout = (1U & (((IData)(__PVT__counter_11__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1bU)) 
                                                | ((~ (IData)(__PVT__counter_11__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xbU))));
    vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_11__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1bU)));
    vlSelf->__PVT___counter_12_io_cout = (1U & (((IData)(__PVT__counter_12__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1cU)) 
                                                | ((~ (IData)(__PVT__counter_12__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xcU))));
    vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_12__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1cU)));
    vlSelf->__PVT___counter_13_io_cout = (1U & (((IData)(__PVT__counter_13__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1dU)) 
                                                | ((~ (IData)(__PVT__counter_13__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xdU))));
    vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_13__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1dU)));
    vlSelf->__PVT___counter_14_io_cout = (1U & (((IData)(__PVT__counter_14__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1eU)) 
                                                | ((~ (IData)(__PVT__counter_14__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xeU))));
    vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_14__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1eU)));
    vlSelf->__PVT___counter_15_io_cout = (1U & (((IData)(__PVT__counter_15__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1fU)) 
                                                | ((~ (IData)(__PVT__counter_15__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xfU))));
    vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0 
        = ((IData)(__PVT__counter_15__DOT___carryWire_T_4) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
              >> 0x1fU));
    vlSelf->__PVT___counter_16_io_cout = (1U & (((IData)(__PVT__counter_16__DOT___carryWire_T_4) 
                                                 & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U]) 
                                                | ((~ (IData)(__PVT__counter_16__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x10U))));
    vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_16__DOT___carryWire_T_4) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U]));
    vlSelf->__PVT___counter_17_io_cout = (1U & (((IData)(__PVT__counter_17__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 1U)) 
                                                | ((~ (IData)(__PVT__counter_17__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x11U))));
    vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_17__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 1U)));
    vlSelf->__PVT___counter_18_io_cout = (1U & (((IData)(__PVT__counter_18__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 2U)) 
                                                | ((~ (IData)(__PVT__counter_18__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x12U))));
    vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_18__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 2U)));
    vlSelf->__PVT___counter_19_io_cout = (1U & (((IData)(__PVT__counter_19__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 3U)) 
                                                | ((~ (IData)(__PVT__counter_19__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x13U))));
    vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_19__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 3U)));
    vlSelf->__PVT___counter_20_io_cout = (1U & (((IData)(__PVT__counter_20__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 4U)) 
                                                | ((~ (IData)(__PVT__counter_20__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x14U))));
    vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_20__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 4U)));
    vlSelf->__PVT___counter_21_io_cout = (1U & (((IData)(__PVT__counter_21__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 5U)) 
                                                | ((~ (IData)(__PVT__counter_21__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x15U))));
    vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_21__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 5U)));
    vlSelf->__PVT___counter_22_io_cout = (1U & (((IData)(__PVT__counter_22__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 6U)) 
                                                | ((~ (IData)(__PVT__counter_22__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x16U))));
    vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_22__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 6U)));
    vlSelf->__PVT___counter_23_io_cout = (1U & (((IData)(__PVT__counter_23__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 7U)) 
                                                | ((~ (IData)(__PVT__counter_23__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x17U))));
    vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_23__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 7U)));
    vlSelf->__PVT___counter_24_io_cout = (1U & (((IData)(__PVT__counter_24__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 8U)) 
                                                | ((~ (IData)(__PVT__counter_24__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x18U))));
    vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_24__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 8U)));
    vlSelf->__PVT___counter_25_io_cout = (1U & (((IData)(__PVT__counter_25__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 9U)) 
                                                | ((~ (IData)(__PVT__counter_25__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x19U))));
    vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_25__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 9U)));
    vlSelf->__PVT___counter_26_io_cout = (1U & (((IData)(__PVT__counter_26__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xaU)) 
                                                | ((~ (IData)(__PVT__counter_26__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1aU))));
    vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_26__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xaU)));
    vlSelf->__PVT___counter_27_io_cout = (1U & (((IData)(__PVT__counter_27__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xbU)) 
                                                | ((~ (IData)(__PVT__counter_27__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1bU))));
    vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_27__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xbU)));
    vlSelf->__PVT___counter_28_io_cout = (1U & (((IData)(__PVT__counter_28__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xcU)) 
                                                | ((~ (IData)(__PVT__counter_28__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1cU))));
    vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_28__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xcU)));
    vlSelf->__PVT___counter_29_io_cout = (1U & (((IData)(__PVT__counter_29__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xdU)) 
                                                | ((~ (IData)(__PVT__counter_29__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1dU))));
    vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_29__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xdU)));
    vlSelf->__PVT___counter_30_io_cout = (1U & (((IData)(__PVT__counter_30__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xeU)) 
                                                | ((~ (IData)(__PVT__counter_30__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1eU))));
    vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_30__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xeU)));
    vlSelf->__PVT___counter_31_io_cout = (1U & (((IData)(__PVT__counter_31__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xfU)) 
                                                | ((~ (IData)(__PVT__counter_31__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1fU))));
    vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_31__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xfU)));
    vlSelf->__PVT___counter_32_io_cout = (1U & (((IData)(__PVT__counter_32__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x10U)) 
                                                | ((~ (IData)(__PVT__counter_32__DOT___carryWire_T_4)) 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U])));
    vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_32__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x10U)));
    vlSelf->__PVT___counter_33_io_cout = (1U & (((IData)(__PVT__counter_33__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x11U)) 
                                                | ((~ (IData)(__PVT__counter_33__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 1U))));
    vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_33__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x11U)));
    vlSelf->__PVT___counter_34_io_cout = (1U & (((IData)(__PVT__counter_34__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x12U)) 
                                                | ((~ (IData)(__PVT__counter_34__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 2U))));
    vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_34__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x12U)));
    vlSelf->__PVT___counter_35_io_cout = (1U & (((IData)(__PVT__counter_35__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x13U)) 
                                                | ((~ (IData)(__PVT__counter_35__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 3U))));
    vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_35__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x13U)));
    vlSelf->__PVT___counter_36_io_cout = (1U & (((IData)(__PVT__counter_36__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x14U)) 
                                                | ((~ (IData)(__PVT__counter_36__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 4U))));
    vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_36__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x14U)));
    vlSelf->__PVT___counter_37_io_cout = (1U & (((IData)(__PVT__counter_37__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x15U)) 
                                                | ((~ (IData)(__PVT__counter_37__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 5U))));
    vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_37__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x15U)));
    vlSelf->__PVT___counter_38_io_cout = (1U & (((IData)(__PVT__counter_38__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x16U)) 
                                                | ((~ (IData)(__PVT__counter_38__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 6U))));
    vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_38__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x16U)));
    vlSelf->__PVT___counter_39_io_cout = (1U & (((IData)(__PVT__counter_39__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x17U)) 
                                                | ((~ (IData)(__PVT__counter_39__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 7U))));
    vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_39__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x17U)));
    vlSelf->__PVT___counter_40_io_cout = (1U & (((IData)(__PVT__counter_40__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x18U)) 
                                                | ((~ (IData)(__PVT__counter_40__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 8U))));
    vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_40__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x18U)));
    vlSelf->__PVT___counter_41_io_cout = (1U & (((IData)(__PVT__counter_41__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x19U)) 
                                                | ((~ (IData)(__PVT__counter_41__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 9U))));
    vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_41__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x19U)));
    vlSelf->__PVT___counter_42_io_cout = (1U & (((IData)(__PVT__counter_42__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1aU)) 
                                                | ((~ (IData)(__PVT__counter_42__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xaU))));
    vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_42__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1aU)));
    vlSelf->__PVT___counter_43_io_cout = (1U & (((IData)(__PVT__counter_43__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1bU)) 
                                                | ((~ (IData)(__PVT__counter_43__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xbU))));
    vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_43__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1bU)));
    vlSelf->__PVT___counter_44_io_cout = (1U & (((IData)(__PVT__counter_44__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1cU)) 
                                                | ((~ (IData)(__PVT__counter_44__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xcU))));
    vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_44__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1cU)));
    vlSelf->__PVT___counter_45_io_cout = (1U & (((IData)(__PVT__counter_45__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1dU)) 
                                                | ((~ (IData)(__PVT__counter_45__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xdU))));
    vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_45__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1dU)));
    vlSelf->__PVT___counter_46_io_cout = (1U & (((IData)(__PVT__counter_46__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1eU)) 
                                                | ((~ (IData)(__PVT__counter_46__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xeU))));
    vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_46__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1eU)));
    vlSelf->__PVT___counter_47_io_cout = (1U & (((IData)(__PVT__counter_47__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1fU)) 
                                                | ((~ (IData)(__PVT__counter_47__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xfU))));
    vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0 
        = ((IData)(__PVT__counter_47__DOT___carryWire_T_4) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
              >> 0x1fU));
    vlSelf->__PVT___counter_48_io_cout = (1U & (((IData)(__PVT__counter_48__DOT___carryWire_T_4) 
                                                 & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U]) 
                                                | ((~ (IData)(__PVT__counter_48__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x10U))));
    vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_48__DOT___carryWire_T_4) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U]));
    vlSelf->__PVT___counter_49_io_cout = (1U & (((IData)(__PVT__counter_49__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 1U)) 
                                                | ((~ (IData)(__PVT__counter_49__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x11U))));
    vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_49__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 1U)));
    vlSelf->__PVT___counter_50_io_cout = (1U & (((IData)(__PVT__counter_50__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 2U)) 
                                                | ((~ (IData)(__PVT__counter_50__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x12U))));
    vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_50__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 2U)));
    vlSelf->__PVT___counter_51_io_cout = (1U & (((IData)(__PVT__counter_51__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 3U)) 
                                                | ((~ (IData)(__PVT__counter_51__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x13U))));
    vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_51__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 3U)));
    vlSelf->__PVT___counter_52_io_cout = (1U & (((IData)(__PVT__counter_52__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 4U)) 
                                                | ((~ (IData)(__PVT__counter_52__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x14U))));
    vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_52__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 4U)));
    vlSelf->__PVT___counter_53_io_cout = (1U & (((IData)(__PVT__counter_53__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 5U)) 
                                                | ((~ (IData)(__PVT__counter_53__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x15U))));
    vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_53__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 5U)));
    vlSelf->counter_54__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1eU)));
    vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 9U)));
    vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xaU)));
    vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xbU)));
    vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xcU)));
    vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xdU)));
    vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xeU)));
    vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xfU)));
    vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x10U)));
    vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x11U)));
    vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x12U)));
    vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x13U)));
    vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x14U)));
    vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x15U)));
    vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x16U)));
    vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x17U)));
    vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x18U)));
    vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x19U)));
    vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1aU)));
    vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1bU)));
    vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1cU)));
    vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1dU)));
    vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1eU)));
    vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0 
        = ((IData)(vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
              >> 0x1fU));
    vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U]));
    vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 1U)));
    vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 2U)));
    vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 3U)));
    vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 4U)));
    vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 5U)));
    vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 6U)));
    vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 7U)));
    vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 8U)));
    vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 9U)));
    vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xaU)));
    vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xbU)));
    vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xcU)));
    vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xdU)));
    vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xeU)));
    vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xfU)));
    vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x10U)));
    vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x11U)));
    vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x12U)));
    vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x13U)));
    vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x14U)));
    vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x15U)));
    vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x16U)));
    vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x17U)));
    vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x18U)));
    vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x19U)));
    vlSelf->counter_50__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1aU)));
    vlSelf->counter_51__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1bU)));
    vlSelf->counter_52__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1cU)));
    vlSelf->counter_53__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1dU)));
    vlSelf->__PVT__io_sum_o = (((QData)((IData)((1U 
                                                 & (((((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                        >> 0x17U) 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                        >> 0xfU)) 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                       >> 7U)) 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                      >> 0x1fU)) 
                                                    ^ 
                                                    (((IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4) 
                                                      & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                         >> 6U)) 
                                                     | ((~ (IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4)) 
                                                        & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                           >> 0x16U))))))) 
                                << 0x37U) | (((QData)((IData)(
                                                              ((IData)(vlSelf->counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                                               ^ (IData)(vlSelf->__PVT___counter_53_io_cout)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                  ^ (IData)(vlSelf->__PVT___counter_52_io_cout)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                     ^ (IData)(vlSelf->__PVT___counter_51_io_cout)))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelf->counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                        ^ (IData)(vlSelf->__PVT___counter_50_io_cout)))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlSelf->counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                           ^ (IData)(vlSelf->__PVT___counter_49_io_cout)))) 
                                                          << 0x32U) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                              ^ (IData)(vlSelf->__PVT___counter_48_io_cout)))) 
                                                             << 0x31U) 
                                                            | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_47_io_cout)))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_46_io_cout)))) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_45_io_cout)))) 
                                                                      << 0x2eU) 
                                                                     | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_44_io_cout)))) 
                                                                         << 0x2dU) 
                                                                        | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_43_io_cout)))) 
                                                                            << 0x2cU) 
                                                                           | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_42_io_cout)))) 
                                                                               << 0x2bU) 
                                                                              | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_41_io_cout)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_40_io_cout)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_39_io_cout)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_38_io_cout)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_37_io_cout)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_36_io_cout)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_35_io_cout)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_34_io_cout)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_33_io_cout)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_32_io_cout)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_31_io_cout)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_30_io_cout)) 
                                                                                << 0x1fU) 
                                                                                | ((((IData)(vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_29_io_cout)) 
                                                                                << 0x1eU) 
                                                                                | ((((IData)(vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_28_io_cout)) 
                                                                                << 0x1dU) 
                                                                                | ((((IData)(vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_27_io_cout)) 
                                                                                << 0x1cU) 
                                                                                | ((((IData)(vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_26_io_cout)) 
                                                                                << 0x1bU) 
                                                                                | ((((IData)(vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_25_io_cout)) 
                                                                                << 0x1aU) 
                                                                                | ((((IData)(vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_24_io_cout)) 
                                                                                << 0x19U) 
                                                                                | ((((IData)(vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_23_io_cout)) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_22_io_cout)) 
                                                                                << 0x17U) 
                                                                                | ((((IData)(vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_21_io_cout)) 
                                                                                << 0x16U) 
                                                                                | ((((IData)(vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_20_io_cout)) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_19_io_cout)) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_18_io_cout)) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_17_io_cout)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_16_io_cout)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_15_io_cout)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_14_io_cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_13_io_cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_12_io_cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_11_io_cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_10_io_cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_9_io_cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_8_io_cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_7_io_cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_6_io_cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_5_io_cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_4_io_cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_3_io_cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_2_io_cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_1_io_cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_io_cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->counter__DOT____VdfgTmp_h31758f64__0) 
                                                                                ^ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 8U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__io_carry_o = (((QData)((IData)((1U 
                                                   & (((IData)(vlSelf->counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                                       & (IData)(vlSelf->__PVT___counter_53_io_cout)) 
                                                      | (((~ 
                                                           (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                            >> 0x1eU)) 
                                                          ^ (IData)(vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                                         & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                            >> 0x1eU)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (((IData)(vlSelf->counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                     & (IData)(vlSelf->__PVT___counter_52_io_cout)) 
                                                                    | (((~ 
                                                                         (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                          >> 0x1dU)) 
                                                                        ^ (IData)(vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                                                       & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                          >> 0x1dU)))))) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (((IData)(vlSelf->counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                        & (IData)(vlSelf->__PVT___counter_51_io_cout)) 
                                                                       | (((~ 
                                                                            (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                             >> 0x1cU)) 
                                                                           ^ (IData)(vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                                                          & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                             >> 0x1cU)))))) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (((IData)(vlSelf->counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                           & (IData)(vlSelf->__PVT___counter_50_io_cout)) 
                                                                          | (((~ 
                                                                               (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1bU)) 
                                                                              ^ (IData)(vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1bU)))))) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                              & (IData)(vlSelf->__PVT___counter_49_io_cout)) 
                                                                             | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1aU)) 
                                                                                ^ (IData)(vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1aU)))))) 
                                                         << 0x33U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((IData)(vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_48_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x19U)))))) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (((IData)(vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_47_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x18U)) 
                                                                                ^ (IData)(vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x18U)))))) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_46_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x17U)))))) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_45_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x16U)))))) 
                                                                     << 0x2fU) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_44_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x15U)))))) 
                                                                        << 0x2eU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_43_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x14U)))))) 
                                                                           << 0x2dU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_42_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x13U)))))) 
                                                                              << 0x2cU) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_41_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x12U)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_40_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x11U)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_39_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x10U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_38_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xfU)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_37_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xeU)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_36_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xdU)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_35_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xcU)))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_34_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xbU)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_33_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xaU)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_32_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 9U)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_31_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 8U)) 
                                                                                ^ (IData)(vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 8U)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_30_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 7U)) 
                                                                                ^ (IData)(vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 7U)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((((IData)(vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_29_io_cout)) 
                                                                                << 0x1fU) 
                                                                                | (0x80000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 6U)) 
                                                                                ^ (IData)(vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1fU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x40000000U 
                                                                                & ((((IData)(vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_28_io_cout)) 
                                                                                << 0x1eU) 
                                                                                | (0xc0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 5U)) 
                                                                                ^ (IData)(vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1eU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x20000000U 
                                                                                & ((((IData)(vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_27_io_cout)) 
                                                                                << 0x1dU) 
                                                                                | (0xe0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 4U)) 
                                                                                ^ (IData)(vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1dU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x10000000U 
                                                                                & ((((IData)(vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_26_io_cout)) 
                                                                                << 0x1cU) 
                                                                                | (0xf0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 3U)) 
                                                                                ^ (IData)(vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1cU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x8000000U 
                                                                                & ((((IData)(vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_25_io_cout)) 
                                                                                << 0x1bU) 
                                                                                | (0xf8000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 2U)) 
                                                                                ^ (IData)(vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1bU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_24_io_cout)) 
                                                                                << 0x1aU) 
                                                                                | (0xfc000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 1U)) 
                                                                                ^ (IData)(vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1aU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_23_io_cout)) 
                                                                                | (((~ 
                                                                                vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U]) 
                                                                                ^ (IData)(vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U])) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_22_io_cout)) 
                                                                                << 0x18U) 
                                                                                | (0x1000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1fU)) 
                                                                                ^ (IData)(vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x18U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_21_io_cout)) 
                                                                                << 0x17U) 
                                                                                | (0x1800000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1eU)) 
                                                                                ^ (IData)(vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x17U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_20_io_cout)) 
                                                                                << 0x16U) 
                                                                                | (0x1c00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1dU)) 
                                                                                ^ (IData)(vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x16U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_19_io_cout)) 
                                                                                << 0x15U) 
                                                                                | (0x1e00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1cU)) 
                                                                                ^ (IData)(vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x15U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_18_io_cout)) 
                                                                                << 0x14U) 
                                                                                | (0x1f00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1bU)) 
                                                                                ^ (IData)(vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x14U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_17_io_cout)) 
                                                                                << 0x13U) 
                                                                                | (0x1f80000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1aU)) 
                                                                                ^ (IData)(vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x13U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_16_io_cout)) 
                                                                                << 0x12U) 
                                                                                | (0x1fc0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x12U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_15_io_cout)) 
                                                                                << 0x11U) 
                                                                                | (0x1fe0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x18U)) 
                                                                                ^ (IData)(vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x11U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_14_io_cout)) 
                                                                                << 0x10U) 
                                                                                | (0x1ff0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x10U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_13_io_cout)) 
                                                                                << 0xfU) 
                                                                                | (0x1ff8000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xfU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_12_io_cout)) 
                                                                                << 0xeU) 
                                                                                | (0x1ffc000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xeU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_11_io_cout)) 
                                                                                << 0xdU) 
                                                                                | (0x1ffe000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xdU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_10_io_cout)) 
                                                                                << 0xcU) 
                                                                                | (0x1fff000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xcU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_9_io_cout)) 
                                                                                << 0xbU) 
                                                                                | (0x1fff800U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_8_io_cout)) 
                                                                                << 0xaU) 
                                                                                | (0x1fffc00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_7_io_cout)) 
                                                                                << 9U) 
                                                                                | (0x1fffe00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_6_io_cout)) 
                                                                                << 8U) 
                                                                                | (0x1ffff00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 8U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_5_io_cout)) 
                                                                                << 7U) 
                                                                                | (0x1ffff80U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 7U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_4_io_cout)) 
                                                                                << 6U) 
                                                                                | (0x1ffffc0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 6U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_3_io_cout)) 
                                                                                << 5U) 
                                                                                | (0x1ffffe0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 5U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_2_io_cout)) 
                                                                                << 4U) 
                                                                                | (0x1fffff0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 4U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_1_io_cout)) 
                                                                                << 3U) 
                                                                                | (0x1fffff8U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_io_cout)) 
                                                                                << 2U) 
                                                                                | (0x1fffffcU 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 2U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | (2U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 8U)) 
                                                                                ^ (IData)(vlSelf->counter__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 1U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0\n"); );
    // Init
    CData/*0:0*/ __PVT__counter__DOT___carryWire_T_4;
    __PVT__counter__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_1__DOT___carryWire_T_4;
    __PVT__counter_1__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_2__DOT___carryWire_T_4;
    __PVT__counter_2__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_3__DOT___carryWire_T_4;
    __PVT__counter_3__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_4__DOT___carryWire_T_4;
    __PVT__counter_4__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_5__DOT___carryWire_T_4;
    __PVT__counter_5__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_6__DOT___carryWire_T_4;
    __PVT__counter_6__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_7__DOT___carryWire_T_4;
    __PVT__counter_7__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_8__DOT___carryWire_T_4;
    __PVT__counter_8__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_9__DOT___carryWire_T_4;
    __PVT__counter_9__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_10__DOT___carryWire_T_4;
    __PVT__counter_10__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_11__DOT___carryWire_T_4;
    __PVT__counter_11__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_12__DOT___carryWire_T_4;
    __PVT__counter_12__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_13__DOT___carryWire_T_4;
    __PVT__counter_13__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_14__DOT___carryWire_T_4;
    __PVT__counter_14__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_15__DOT___carryWire_T_4;
    __PVT__counter_15__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_16__DOT___carryWire_T_4;
    __PVT__counter_16__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_17__DOT___carryWire_T_4;
    __PVT__counter_17__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_18__DOT___carryWire_T_4;
    __PVT__counter_18__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_19__DOT___carryWire_T_4;
    __PVT__counter_19__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_20__DOT___carryWire_T_4;
    __PVT__counter_20__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_21__DOT___carryWire_T_4;
    __PVT__counter_21__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_22__DOT___carryWire_T_4;
    __PVT__counter_22__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_23__DOT___carryWire_T_4;
    __PVT__counter_23__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_24__DOT___carryWire_T_4;
    __PVT__counter_24__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_25__DOT___carryWire_T_4;
    __PVT__counter_25__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_26__DOT___carryWire_T_4;
    __PVT__counter_26__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_27__DOT___carryWire_T_4;
    __PVT__counter_27__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_28__DOT___carryWire_T_4;
    __PVT__counter_28__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_29__DOT___carryWire_T_4;
    __PVT__counter_29__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_30__DOT___carryWire_T_4;
    __PVT__counter_30__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_31__DOT___carryWire_T_4;
    __PVT__counter_31__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_32__DOT___carryWire_T_4;
    __PVT__counter_32__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_33__DOT___carryWire_T_4;
    __PVT__counter_33__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_34__DOT___carryWire_T_4;
    __PVT__counter_34__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_35__DOT___carryWire_T_4;
    __PVT__counter_35__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_36__DOT___carryWire_T_4;
    __PVT__counter_36__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_37__DOT___carryWire_T_4;
    __PVT__counter_37__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_38__DOT___carryWire_T_4;
    __PVT__counter_38__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_39__DOT___carryWire_T_4;
    __PVT__counter_39__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_40__DOT___carryWire_T_4;
    __PVT__counter_40__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_41__DOT___carryWire_T_4;
    __PVT__counter_41__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_42__DOT___carryWire_T_4;
    __PVT__counter_42__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_43__DOT___carryWire_T_4;
    __PVT__counter_43__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_44__DOT___carryWire_T_4;
    __PVT__counter_44__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_45__DOT___carryWire_T_4;
    __PVT__counter_45__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_46__DOT___carryWire_T_4;
    __PVT__counter_46__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_47__DOT___carryWire_T_4;
    __PVT__counter_47__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_48__DOT___carryWire_T_4;
    __PVT__counter_48__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_49__DOT___carryWire_T_4;
    __PVT__counter_49__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_50__DOT___carryWire_T_4;
    __PVT__counter_50__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_51__DOT___carryWire_T_4;
    __PVT__counter_51__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_52__DOT___carryWire_T_4;
    __PVT__counter_52__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_53__DOT___carryWire_T_4;
    __PVT__counter_53__DOT___carryWire_T_4 = 0;
    // Body
    vlSelf->__PVT__counter_54__DOT___carryWire_T_4 
        = (1U & ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                  >> 0x16U) ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                               >> 0xeU)));
    __PVT__counter__DOT___carryWire_T_4 = (1U & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                 ^ 
                                                 (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                  >> 0x18U)));
    __PVT__counter_50__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0x12U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 0xaU)));
    __PVT__counter_51__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0x13U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 0xbU)));
    __PVT__counter_52__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0x14U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 0xcU)));
    __PVT__counter_53__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0x15U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 0xdU)));
    __PVT__counter_1__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                    >> 1U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                    >> 0x19U)));
    __PVT__counter_2__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                    >> 2U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                    >> 0x1aU)));
    __PVT__counter_3__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                    >> 0x1bU)));
    __PVT__counter_4__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                    >> 0x1cU)));
    __PVT__counter_5__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                    >> 0x1dU)));
    __PVT__counter_6__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                    >> 0x1eU)));
    __PVT__counter_7__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                    >> 0x1fU)));
    __PVT__counter_8__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                    >> 8U) 
                                                   ^ 
                                                   vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U]));
    __PVT__counter_9__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                    >> 1U)));
    __PVT__counter_10__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0xaU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 2U)));
    __PVT__counter_11__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0xbU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 3U)));
    __PVT__counter_12__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0xcU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 4U)));
    __PVT__counter_13__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0xdU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 5U)));
    __PVT__counter_14__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0xeU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 6U)));
    __PVT__counter_15__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0xfU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 7U)));
    __PVT__counter_16__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x10U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 8U)));
    __PVT__counter_17__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x11U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 9U)));
    __PVT__counter_18__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x12U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0xaU)));
    __PVT__counter_19__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x13U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0xbU)));
    __PVT__counter_20__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x14U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0xcU)));
    __PVT__counter_21__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x15U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0xdU)));
    __PVT__counter_22__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x16U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0xeU)));
    __PVT__counter_23__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x17U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0xfU)));
    __PVT__counter_24__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x18U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x10U)));
    __PVT__counter_25__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x19U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x11U)));
    __PVT__counter_26__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x1aU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x12U)));
    __PVT__counter_27__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x1bU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x13U)));
    __PVT__counter_28__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x1cU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x14U)));
    __PVT__counter_29__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x1dU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x15U)));
    __PVT__counter_30__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x1eU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x16U)));
    __PVT__counter_31__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                >> 0x1fU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x17U)));
    __PVT__counter_32__DOT___carryWire_T_4 = (1U & 
                                              (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x18U)));
    __PVT__counter_33__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 1U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x19U)));
    __PVT__counter_34__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 2U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x1aU)));
    __PVT__counter_35__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 3U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x1bU)));
    __PVT__counter_36__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 4U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x1cU)));
    __PVT__counter_37__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 5U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x1dU)));
    __PVT__counter_38__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 6U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x1eU)));
    __PVT__counter_39__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 7U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[2U] 
                                                  >> 0x1fU)));
    __PVT__counter_40__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 8U) 
                                               ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U]));
    __PVT__counter_41__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 9U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 1U)));
    __PVT__counter_42__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0xaU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 2U)));
    __PVT__counter_43__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0xbU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 3U)));
    __PVT__counter_44__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0xcU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 4U)));
    __PVT__counter_45__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0xdU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 5U)));
    __PVT__counter_46__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0xeU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 6U)));
    __PVT__counter_47__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0xfU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 7U)));
    __PVT__counter_48__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0x10U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 8U)));
    __PVT__counter_49__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                >> 0x11U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                  >> 9U)));
    vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 6U)));
    vlSelf->__PVT___counter_io_cout = (1U & (((IData)(__PVT__counter__DOT___carryWire_T_4) 
                                              & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                 >> 0x10U)) 
                                             | ((~ (IData)(__PVT__counter__DOT___carryWire_T_4)) 
                                                & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U])));
    vlSelf->counter__DOT____VdfgTmp_h31758f64__0 = 
        (1U & ((IData)(__PVT__counter__DOT___carryWire_T_4) 
               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                  >> 0x10U)));
    vlSelf->__PVT___counter_50_io_cout = (1U & (((IData)(__PVT__counter_50__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                    >> 2U)) 
                                                | ((~ (IData)(__PVT__counter_50__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0x12U))));
    vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_50__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 2U)));
    vlSelf->__PVT___counter_51_io_cout = (1U & (((IData)(__PVT__counter_51__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                    >> 3U)) 
                                                | ((~ (IData)(__PVT__counter_51__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0x13U))));
    vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_51__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 3U)));
    vlSelf->__PVT___counter_52_io_cout = (1U & (((IData)(__PVT__counter_52__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                    >> 4U)) 
                                                | ((~ (IData)(__PVT__counter_52__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0x14U))));
    vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_52__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 4U)));
    vlSelf->__PVT___counter_53_io_cout = (1U & (((IData)(__PVT__counter_53__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                    >> 5U)) 
                                                | ((~ (IData)(__PVT__counter_53__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0x15U))));
    vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_53__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 5U)));
    vlSelf->__PVT___counter_1_io_cout = (1U & (((IData)(__PVT__counter_1__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                   >> 0x11U)) 
                                               | ((~ (IData)(__PVT__counter_1__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                     >> 1U))));
    vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_1__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x11U)));
    vlSelf->__PVT___counter_2_io_cout = (1U & (((IData)(__PVT__counter_2__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                   >> 0x12U)) 
                                               | ((~ (IData)(__PVT__counter_2__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                     >> 2U))));
    vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_2__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x12U)));
    vlSelf->__PVT___counter_3_io_cout = (1U & (((IData)(__PVT__counter_3__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                   >> 0x13U)) 
                                               | ((~ (IData)(__PVT__counter_3__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                     >> 3U))));
    vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_3__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x13U)));
    vlSelf->__PVT___counter_4_io_cout = (1U & (((IData)(__PVT__counter_4__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                   >> 0x14U)) 
                                               | ((~ (IData)(__PVT__counter_4__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                     >> 4U))));
    vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_4__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x14U)));
    vlSelf->__PVT___counter_5_io_cout = (1U & (((IData)(__PVT__counter_5__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                   >> 0x15U)) 
                                               | ((~ (IData)(__PVT__counter_5__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                     >> 5U))));
    vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_5__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x15U)));
    vlSelf->__PVT___counter_6_io_cout = (1U & (((IData)(__PVT__counter_6__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                   >> 0x16U)) 
                                               | ((~ (IData)(__PVT__counter_6__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                     >> 6U))));
    vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_6__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x16U)));
    vlSelf->__PVT___counter_7_io_cout = (1U & (((IData)(__PVT__counter_7__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                   >> 0x17U)) 
                                               | ((~ (IData)(__PVT__counter_7__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                     >> 7U))));
    vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_7__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x17U)));
    vlSelf->__PVT___counter_8_io_cout = (1U & (((IData)(__PVT__counter_8__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                   >> 0x18U)) 
                                               | ((~ (IData)(__PVT__counter_8__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                     >> 8U))));
    vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_8__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x18U)));
    vlSelf->__PVT___counter_9_io_cout = (1U & (((IData)(__PVT__counter_9__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                   >> 0x19U)) 
                                               | ((~ (IData)(__PVT__counter_9__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                     >> 9U))));
    vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_9__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x19U)));
    vlSelf->__PVT___counter_10_io_cout = (1U & (((IData)(__PVT__counter_10__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                    >> 0x1aU)) 
                                                | ((~ (IData)(__PVT__counter_10__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0xaU))));
    vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_10__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x1aU)));
    vlSelf->__PVT___counter_11_io_cout = (1U & (((IData)(__PVT__counter_11__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                    >> 0x1bU)) 
                                                | ((~ (IData)(__PVT__counter_11__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0xbU))));
    vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_11__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x1bU)));
    vlSelf->__PVT___counter_12_io_cout = (1U & (((IData)(__PVT__counter_12__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                    >> 0x1cU)) 
                                                | ((~ (IData)(__PVT__counter_12__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0xcU))));
    vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_12__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x1cU)));
    vlSelf->__PVT___counter_13_io_cout = (1U & (((IData)(__PVT__counter_13__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                    >> 0x1dU)) 
                                                | ((~ (IData)(__PVT__counter_13__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0xdU))));
    vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_13__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x1dU)));
    vlSelf->__PVT___counter_14_io_cout = (1U & (((IData)(__PVT__counter_14__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                    >> 0x1eU)) 
                                                | ((~ (IData)(__PVT__counter_14__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0xeU))));
    vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_14__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                    >> 0x1eU)));
    vlSelf->__PVT___counter_15_io_cout = (1U & (((IData)(__PVT__counter_15__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                    >> 0x1fU)) 
                                                | ((~ (IData)(__PVT__counter_15__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0xfU))));
    vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0 
        = ((IData)(__PVT__counter_15__DOT___carryWire_T_4) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
              >> 0x1fU));
    vlSelf->__PVT___counter_16_io_cout = (1U & (((IData)(__PVT__counter_16__DOT___carryWire_T_4) 
                                                 & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U]) 
                                                | ((~ (IData)(__PVT__counter_16__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x10U))));
    vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_16__DOT___carryWire_T_4) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U]));
    vlSelf->__PVT___counter_17_io_cout = (1U & (((IData)(__PVT__counter_17__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 1U)) 
                                                | ((~ (IData)(__PVT__counter_17__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x11U))));
    vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_17__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 1U)));
    vlSelf->__PVT___counter_18_io_cout = (1U & (((IData)(__PVT__counter_18__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 2U)) 
                                                | ((~ (IData)(__PVT__counter_18__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x12U))));
    vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_18__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 2U)));
    vlSelf->__PVT___counter_19_io_cout = (1U & (((IData)(__PVT__counter_19__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 3U)) 
                                                | ((~ (IData)(__PVT__counter_19__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x13U))));
    vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_19__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 3U)));
    vlSelf->__PVT___counter_20_io_cout = (1U & (((IData)(__PVT__counter_20__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 4U)) 
                                                | ((~ (IData)(__PVT__counter_20__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x14U))));
    vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_20__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 4U)));
    vlSelf->__PVT___counter_21_io_cout = (1U & (((IData)(__PVT__counter_21__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 5U)) 
                                                | ((~ (IData)(__PVT__counter_21__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x15U))));
    vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_21__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 5U)));
    vlSelf->__PVT___counter_22_io_cout = (1U & (((IData)(__PVT__counter_22__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 6U)) 
                                                | ((~ (IData)(__PVT__counter_22__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x16U))));
    vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_22__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 6U)));
    vlSelf->__PVT___counter_23_io_cout = (1U & (((IData)(__PVT__counter_23__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 7U)) 
                                                | ((~ (IData)(__PVT__counter_23__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x17U))));
    vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_23__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 7U)));
    vlSelf->__PVT___counter_24_io_cout = (1U & (((IData)(__PVT__counter_24__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 8U)) 
                                                | ((~ (IData)(__PVT__counter_24__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x18U))));
    vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_24__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 8U)));
    vlSelf->__PVT___counter_25_io_cout = (1U & (((IData)(__PVT__counter_25__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 9U)) 
                                                | ((~ (IData)(__PVT__counter_25__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x19U))));
    vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_25__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 9U)));
    vlSelf->__PVT___counter_26_io_cout = (1U & (((IData)(__PVT__counter_26__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0xaU)) 
                                                | ((~ (IData)(__PVT__counter_26__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x1aU))));
    vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_26__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0xaU)));
    vlSelf->__PVT___counter_27_io_cout = (1U & (((IData)(__PVT__counter_27__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0xbU)) 
                                                | ((~ (IData)(__PVT__counter_27__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x1bU))));
    vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_27__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0xbU)));
    vlSelf->__PVT___counter_28_io_cout = (1U & (((IData)(__PVT__counter_28__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0xcU)) 
                                                | ((~ (IData)(__PVT__counter_28__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x1cU))));
    vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_28__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0xcU)));
    vlSelf->__PVT___counter_29_io_cout = (1U & (((IData)(__PVT__counter_29__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0xdU)) 
                                                | ((~ (IData)(__PVT__counter_29__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x1dU))));
    vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_29__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0xdU)));
    vlSelf->__PVT___counter_30_io_cout = (1U & (((IData)(__PVT__counter_30__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0xeU)) 
                                                | ((~ (IData)(__PVT__counter_30__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x1eU))));
    vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_30__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0xeU)));
    vlSelf->__PVT___counter_31_io_cout = (1U & (((IData)(__PVT__counter_31__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0xfU)) 
                                                | ((~ (IData)(__PVT__counter_31__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[0U] 
                                                      >> 0x1fU))));
    vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_31__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0xfU)));
    vlSelf->__PVT___counter_32_io_cout = (1U & (((IData)(__PVT__counter_32__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x10U)) 
                                                | ((~ (IData)(__PVT__counter_32__DOT___carryWire_T_4)) 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U])));
    vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_32__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x10U)));
    vlSelf->__PVT___counter_33_io_cout = (1U & (((IData)(__PVT__counter_33__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x11U)) 
                                                | ((~ (IData)(__PVT__counter_33__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 1U))));
    vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_33__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x11U)));
    vlSelf->__PVT___counter_34_io_cout = (1U & (((IData)(__PVT__counter_34__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x12U)) 
                                                | ((~ (IData)(__PVT__counter_34__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 2U))));
    vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_34__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x12U)));
    vlSelf->__PVT___counter_35_io_cout = (1U & (((IData)(__PVT__counter_35__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x13U)) 
                                                | ((~ (IData)(__PVT__counter_35__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 3U))));
    vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_35__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x13U)));
    vlSelf->__PVT___counter_36_io_cout = (1U & (((IData)(__PVT__counter_36__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x14U)) 
                                                | ((~ (IData)(__PVT__counter_36__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 4U))));
    vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_36__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x14U)));
    vlSelf->__PVT___counter_37_io_cout = (1U & (((IData)(__PVT__counter_37__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x15U)) 
                                                | ((~ (IData)(__PVT__counter_37__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 5U))));
    vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_37__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x15U)));
    vlSelf->__PVT___counter_38_io_cout = (1U & (((IData)(__PVT__counter_38__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x16U)) 
                                                | ((~ (IData)(__PVT__counter_38__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 6U))));
    vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_38__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x16U)));
    vlSelf->__PVT___counter_39_io_cout = (1U & (((IData)(__PVT__counter_39__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x17U)) 
                                                | ((~ (IData)(__PVT__counter_39__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 7U))));
    vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_39__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x17U)));
    vlSelf->__PVT___counter_40_io_cout = (1U & (((IData)(__PVT__counter_40__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x18U)) 
                                                | ((~ (IData)(__PVT__counter_40__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 8U))));
    vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_40__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x18U)));
    vlSelf->__PVT___counter_41_io_cout = (1U & (((IData)(__PVT__counter_41__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x19U)) 
                                                | ((~ (IData)(__PVT__counter_41__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 9U))));
    vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_41__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x19U)));
    vlSelf->__PVT___counter_42_io_cout = (1U & (((IData)(__PVT__counter_42__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x1aU)) 
                                                | ((~ (IData)(__PVT__counter_42__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0xaU))));
    vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_42__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x1aU)));
    vlSelf->__PVT___counter_43_io_cout = (1U & (((IData)(__PVT__counter_43__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x1bU)) 
                                                | ((~ (IData)(__PVT__counter_43__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0xbU))));
    vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_43__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x1bU)));
    vlSelf->__PVT___counter_44_io_cout = (1U & (((IData)(__PVT__counter_44__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x1cU)) 
                                                | ((~ (IData)(__PVT__counter_44__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0xcU))));
    vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_44__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x1cU)));
    vlSelf->__PVT___counter_45_io_cout = (1U & (((IData)(__PVT__counter_45__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x1dU)) 
                                                | ((~ (IData)(__PVT__counter_45__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0xdU))));
    vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_45__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x1dU)));
    vlSelf->__PVT___counter_46_io_cout = (1U & (((IData)(__PVT__counter_46__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x1eU)) 
                                                | ((~ (IData)(__PVT__counter_46__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0xeU))));
    vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_46__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                    >> 0x1eU)));
    vlSelf->__PVT___counter_47_io_cout = (1U & (((IData)(__PVT__counter_47__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
                                                    >> 0x1fU)) 
                                                | ((~ (IData)(__PVT__counter_47__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0xfU))));
    vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0 
        = ((IData)(__PVT__counter_47__DOT___carryWire_T_4) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[4U] 
              >> 0x1fU));
    vlSelf->__PVT___counter_48_io_cout = (1U & (((IData)(__PVT__counter_48__DOT___carryWire_T_4) 
                                                 & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U]) 
                                                | ((~ (IData)(__PVT__counter_48__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0x10U))));
    vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_48__DOT___carryWire_T_4) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U]));
    vlSelf->__PVT___counter_49_io_cout = (1U & (((IData)(__PVT__counter_49__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                    >> 1U)) 
                                                | ((~ (IData)(__PVT__counter_49__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                      >> 0x11U))));
    vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_49__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 1U)));
    vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 9U)));
    vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0xaU)));
    vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0xbU)));
    vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0xcU)));
    vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0xdU)));
    vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0xeU)));
    vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0xfU)));
    vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x10U)));
    vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x11U)));
    vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x12U)));
    vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x13U)));
    vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x14U)));
    vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x15U)));
    vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x16U)));
    vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x17U)));
    vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x18U)));
    vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x19U)));
    vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x1aU)));
    vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x1bU)));
    vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x1cU)));
    vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x1dU)));
    vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                    >> 0x1eU)));
    vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0 
        = ((IData)(vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
              >> 0x1fU));
    vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U]));
    vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 1U)));
    vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 2U)));
    vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 3U)));
    vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 4U)));
    vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 5U)));
    vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 6U)));
    vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 7U)));
    vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 8U)));
    vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 9U)));
    vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0xaU)));
    vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0xbU)));
    vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0xcU)));
    vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0xdU)));
    vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0xeU)));
    vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0xfU)));
    vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0x10U)));
    vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0x11U)));
    vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0x12U)));
    vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0x13U)));
    vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0x14U)));
    vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0x15U)));
    vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0x16U)));
    vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0x17U)));
    vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                    >> 0x18U)));
    vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0 
        = ((IData)(vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
              >> 0x19U));
    vlSelf->__PVT__io_sum_o = (((QData)((IData)((1U 
                                                 & ((((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                       >> 0x17U) 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[3U] 
                                                       >> 0xfU)) 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                      >> 7U)) 
                                                    ^ 
                                                    (((IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4) 
                                                      & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                         >> 6U)) 
                                                     | ((~ (IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4)) 
                                                        & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[1U] 
                                                           >> 0x16U))))))) 
                                << 0x37U) | (((QData)((IData)(
                                                              ((IData)(vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0) 
                                                               ^ (IData)(vlSelf->__PVT___counter_53_io_cout)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0) 
                                                                  ^ (IData)(vlSelf->__PVT___counter_52_io_cout)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0) 
                                                                     ^ (IData)(vlSelf->__PVT___counter_51_io_cout)))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0) 
                                                                        ^ (IData)(vlSelf->__PVT___counter_50_io_cout)))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           ^ 
                                                                           ((IData)(vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0) 
                                                                            ^ (IData)(vlSelf->__PVT___counter_49_io_cout))))) 
                                                          << 0x32U) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                              ^ (IData)(vlSelf->__PVT___counter_48_io_cout)))) 
                                                             << 0x31U) 
                                                            | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_47_io_cout)))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_46_io_cout)))) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_45_io_cout)))) 
                                                                      << 0x2eU) 
                                                                     | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_44_io_cout)))) 
                                                                         << 0x2dU) 
                                                                        | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_43_io_cout)))) 
                                                                            << 0x2cU) 
                                                                           | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_42_io_cout)))) 
                                                                               << 0x2bU) 
                                                                              | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_41_io_cout)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_40_io_cout)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_39_io_cout)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_38_io_cout)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_37_io_cout)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_36_io_cout)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_35_io_cout)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_34_io_cout)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_33_io_cout)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_32_io_cout)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_31_io_cout)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_30_io_cout)) 
                                                                                << 0x1fU) 
                                                                                | ((((IData)(vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_29_io_cout)) 
                                                                                << 0x1eU) 
                                                                                | ((((IData)(vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_28_io_cout)) 
                                                                                << 0x1dU) 
                                                                                | ((((IData)(vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_27_io_cout)) 
                                                                                << 0x1cU) 
                                                                                | ((((IData)(vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_26_io_cout)) 
                                                                                << 0x1bU) 
                                                                                | ((((IData)(vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_25_io_cout)) 
                                                                                << 0x1aU) 
                                                                                | ((((IData)(vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_24_io_cout)) 
                                                                                << 0x19U) 
                                                                                | ((((IData)(vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_23_io_cout)) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_22_io_cout)) 
                                                                                << 0x17U) 
                                                                                | ((((IData)(vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_21_io_cout)) 
                                                                                << 0x16U) 
                                                                                | ((((IData)(vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_20_io_cout)) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_19_io_cout)) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_18_io_cout)) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_17_io_cout)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_16_io_cout)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_15_io_cout)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_14_io_cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_13_io_cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_12_io_cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_11_io_cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_10_io_cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_9_io_cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_8_io_cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_7_io_cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_6_io_cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_5_io_cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_4_io_cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_3_io_cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_2_io_cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_1_io_cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_io_cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->counter__DOT____VdfgTmp_h31758f64__0) 
                                                                                ^ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 8U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__io_carry_o = (((QData)((IData)(((IData)(vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0) 
                                                   & (IData)(vlSelf->__PVT___counter_53_io_cout)))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                ((IData)(vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0) 
                                                                 & (IData)(vlSelf->__PVT___counter_52_io_cout)))) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0) 
                                                                    & (IData)(vlSelf->__PVT___counter_51_io_cout)))) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0) 
                                                                       & (IData)(vlSelf->__PVT___counter_50_io_cout)))) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         ((IData)(vlSelf->__PVT___counter_49_io_cout) 
                                                                          | (IData)(vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0)))) 
                                                         << 0x33U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((IData)(vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_48_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x19U)))))) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (((IData)(vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_47_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x18U)) 
                                                                                ^ (IData)(vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x18U)))))) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_46_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x17U)))))) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_45_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x16U)))))) 
                                                                     << 0x2fU) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_44_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x15U)))))) 
                                                                        << 0x2eU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_43_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x14U)))))) 
                                                                           << 0x2dU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_42_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x13U)))))) 
                                                                              << 0x2cU) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_41_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x12U)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_40_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x11U)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_39_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0x10U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_38_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xfU)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_37_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xeU)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_36_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xdU)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_35_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xcU)))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_34_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xbU)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_33_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 0xaU)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_32_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 9U)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_31_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 8U)) 
                                                                                ^ (IData)(vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 8U)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_30_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 7U)) 
                                                                                ^ (IData)(vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 7U)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((((IData)(vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_29_io_cout)) 
                                                                                << 0x1fU) 
                                                                                | (0x80000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 6U)) 
                                                                                ^ (IData)(vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1fU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x40000000U 
                                                                                & ((((IData)(vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_28_io_cout)) 
                                                                                << 0x1eU) 
                                                                                | (0xc0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 5U)) 
                                                                                ^ (IData)(vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1eU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x20000000U 
                                                                                & ((((IData)(vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_27_io_cout)) 
                                                                                << 0x1dU) 
                                                                                | (0xe0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 4U)) 
                                                                                ^ (IData)(vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1dU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x10000000U 
                                                                                & ((((IData)(vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_26_io_cout)) 
                                                                                << 0x1cU) 
                                                                                | (0xf0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 3U)) 
                                                                                ^ (IData)(vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1cU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x8000000U 
                                                                                & ((((IData)(vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_25_io_cout)) 
                                                                                << 0x1bU) 
                                                                                | (0xf8000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 2U)) 
                                                                                ^ (IData)(vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1bU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_24_io_cout)) 
                                                                                << 0x1aU) 
                                                                                | (0xfc000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                >> 1U)) 
                                                                                ^ (IData)(vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1aU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_23_io_cout)) 
                                                                                | (((~ 
                                                                                vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U]) 
                                                                                ^ (IData)(vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[6U])) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_22_io_cout)) 
                                                                                << 0x18U) 
                                                                                | (0x1000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x1fU)) 
                                                                                ^ (IData)(vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x18U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_21_io_cout)) 
                                                                                << 0x17U) 
                                                                                | (0x1800000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x1eU)) 
                                                                                ^ (IData)(vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x17U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_20_io_cout)) 
                                                                                << 0x16U) 
                                                                                | (0x1c00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x1dU)) 
                                                                                ^ (IData)(vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x16U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_19_io_cout)) 
                                                                                << 0x15U) 
                                                                                | (0x1e00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x1cU)) 
                                                                                ^ (IData)(vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x15U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_18_io_cout)) 
                                                                                << 0x14U) 
                                                                                | (0x1f00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x1bU)) 
                                                                                ^ (IData)(vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x14U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_17_io_cout)) 
                                                                                << 0x13U) 
                                                                                | (0x1f80000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x1aU)) 
                                                                                ^ (IData)(vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x13U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_16_io_cout)) 
                                                                                << 0x12U) 
                                                                                | (0x1fc0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x12U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_15_io_cout)) 
                                                                                << 0x11U) 
                                                                                | (0x1fe0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x18U)) 
                                                                                ^ (IData)(vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x11U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_14_io_cout)) 
                                                                                << 0x10U) 
                                                                                | (0x1ff0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x10U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_13_io_cout)) 
                                                                                << 0xfU) 
                                                                                | (0x1ff8000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xfU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_12_io_cout)) 
                                                                                << 0xeU) 
                                                                                | (0x1ffc000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xeU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_11_io_cout)) 
                                                                                << 0xdU) 
                                                                                | (0x1ffe000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xdU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_10_io_cout)) 
                                                                                << 0xcU) 
                                                                                | (0x1fff000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xcU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_9_io_cout)) 
                                                                                << 0xbU) 
                                                                                | (0x1fff800U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_8_io_cout)) 
                                                                                << 0xaU) 
                                                                                | (0x1fffc00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_7_io_cout)) 
                                                                                << 9U) 
                                                                                | (0x1fffe00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_6_io_cout)) 
                                                                                << 8U) 
                                                                                | (0x1ffff00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 8U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_5_io_cout)) 
                                                                                << 7U) 
                                                                                | (0x1ffff80U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 7U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_4_io_cout)) 
                                                                                << 6U) 
                                                                                | (0x1ffffc0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 6U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_3_io_cout)) 
                                                                                << 5U) 
                                                                                | (0x1ffffe0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 5U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_2_io_cout)) 
                                                                                << 4U) 
                                                                                | (0x1fffff0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 4U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_1_io_cout)) 
                                                                                << 3U) 
                                                                                | (0x1fffff8U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_io_cout)) 
                                                                                << 2U) 
                                                                                | (0x1fffffcU 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 2U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U))))) 
                                                                                | (2U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 8U)) 
                                                                                ^ (IData)(vlSelf->counter__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 1U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.__VdfgTmp_h290cb9ab__0[5U] 
                                                                                >> 7U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0\n"); );
    // Init
    CData/*0:0*/ __PVT__counter__DOT___carryWire_T_4;
    __PVT__counter__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_1__DOT___carryWire_T_4;
    __PVT__counter_1__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_2__DOT___carryWire_T_4;
    __PVT__counter_2__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_3__DOT___carryWire_T_4;
    __PVT__counter_3__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_4__DOT___carryWire_T_4;
    __PVT__counter_4__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_5__DOT___carryWire_T_4;
    __PVT__counter_5__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_6__DOT___carryWire_T_4;
    __PVT__counter_6__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_7__DOT___carryWire_T_4;
    __PVT__counter_7__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_8__DOT___carryWire_T_4;
    __PVT__counter_8__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_9__DOT___carryWire_T_4;
    __PVT__counter_9__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_10__DOT___carryWire_T_4;
    __PVT__counter_10__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_11__DOT___carryWire_T_4;
    __PVT__counter_11__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_12__DOT___carryWire_T_4;
    __PVT__counter_12__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_13__DOT___carryWire_T_4;
    __PVT__counter_13__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_14__DOT___carryWire_T_4;
    __PVT__counter_14__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_15__DOT___carryWire_T_4;
    __PVT__counter_15__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_16__DOT___carryWire_T_4;
    __PVT__counter_16__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_17__DOT___carryWire_T_4;
    __PVT__counter_17__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_18__DOT___carryWire_T_4;
    __PVT__counter_18__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_19__DOT___carryWire_T_4;
    __PVT__counter_19__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_20__DOT___carryWire_T_4;
    __PVT__counter_20__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_21__DOT___carryWire_T_4;
    __PVT__counter_21__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_22__DOT___carryWire_T_4;
    __PVT__counter_22__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_23__DOT___carryWire_T_4;
    __PVT__counter_23__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_24__DOT___carryWire_T_4;
    __PVT__counter_24__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_25__DOT___carryWire_T_4;
    __PVT__counter_25__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_26__DOT___carryWire_T_4;
    __PVT__counter_26__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_27__DOT___carryWire_T_4;
    __PVT__counter_27__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_28__DOT___carryWire_T_4;
    __PVT__counter_28__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_29__DOT___carryWire_T_4;
    __PVT__counter_29__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_30__DOT___carryWire_T_4;
    __PVT__counter_30__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_31__DOT___carryWire_T_4;
    __PVT__counter_31__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_32__DOT___carryWire_T_4;
    __PVT__counter_32__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_33__DOT___carryWire_T_4;
    __PVT__counter_33__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_34__DOT___carryWire_T_4;
    __PVT__counter_34__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_35__DOT___carryWire_T_4;
    __PVT__counter_35__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_36__DOT___carryWire_T_4;
    __PVT__counter_36__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_37__DOT___carryWire_T_4;
    __PVT__counter_37__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_38__DOT___carryWire_T_4;
    __PVT__counter_38__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_39__DOT___carryWire_T_4;
    __PVT__counter_39__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_40__DOT___carryWire_T_4;
    __PVT__counter_40__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_41__DOT___carryWire_T_4;
    __PVT__counter_41__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_42__DOT___carryWire_T_4;
    __PVT__counter_42__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_43__DOT___carryWire_T_4;
    __PVT__counter_43__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_44__DOT___carryWire_T_4;
    __PVT__counter_44__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_45__DOT___carryWire_T_4;
    __PVT__counter_45__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_46__DOT___carryWire_T_4;
    __PVT__counter_46__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_47__DOT___carryWire_T_4;
    __PVT__counter_47__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_48__DOT___carryWire_T_4;
    __PVT__counter_48__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_49__DOT___carryWire_T_4;
    __PVT__counter_49__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_50__DOT___carryWire_T_4;
    __PVT__counter_50__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_51__DOT___carryWire_T_4;
    __PVT__counter_51__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_52__DOT___carryWire_T_4;
    __PVT__counter_52__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ __PVT__counter_53__DOT___carryWire_T_4;
    __PVT__counter_53__DOT___carryWire_T_4 = 0;
    // Body
    __PVT__counter__DOT___carryWire_T_4 = (1U & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                 ^ 
                                                 (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                  >> 0x18U)));
    vlSelf->__PVT__counter_54__DOT___carryWire_T_4 
        = (1U & ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                  >> 0x16U) ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                               >> 0xeU)));
    __PVT__counter_1__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 1U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x19U)));
    __PVT__counter_2__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 2U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1aU)));
    __PVT__counter_3__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1bU)));
    __PVT__counter_4__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 4U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1cU)));
    __PVT__counter_5__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1dU)));
    __PVT__counter_6__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 6U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1eU)));
    __PVT__counter_7__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 7U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                    >> 0x1fU)));
    __PVT__counter_8__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 8U) 
                                                   ^ 
                                                   vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U]));
    __PVT__counter_9__DOT___carryWire_T_4 = (1U & (
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                    >> 9U) 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                    >> 1U)));
    __PVT__counter_10__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xaU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 2U)));
    __PVT__counter_11__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xbU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 3U)));
    __PVT__counter_12__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xcU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 4U)));
    __PVT__counter_13__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xdU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 5U)));
    __PVT__counter_14__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xeU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 6U)));
    __PVT__counter_15__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0xfU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 7U)));
    __PVT__counter_16__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x10U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 8U)));
    __PVT__counter_17__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x11U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 9U)));
    __PVT__counter_18__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x12U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xaU)));
    __PVT__counter_19__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x13U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xbU)));
    __PVT__counter_20__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x14U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xcU)));
    __PVT__counter_21__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x15U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xdU)));
    __PVT__counter_22__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x16U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xeU)));
    __PVT__counter_23__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x17U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0xfU)));
    __PVT__counter_24__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x18U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x10U)));
    __PVT__counter_25__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x19U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x11U)));
    __PVT__counter_26__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1aU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x12U)));
    __PVT__counter_27__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1bU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x13U)));
    __PVT__counter_28__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1cU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x14U)));
    __PVT__counter_29__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1dU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x15U)));
    __PVT__counter_30__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1eU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x16U)));
    __PVT__counter_31__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                >> 0x1fU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x17U)));
    __PVT__counter_32__DOT___carryWire_T_4 = (1U & 
                                              (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x18U)));
    __PVT__counter_33__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 1U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x19U)));
    __PVT__counter_34__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 2U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1aU)));
    __PVT__counter_35__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 3U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1bU)));
    __PVT__counter_36__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 4U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1cU)));
    __PVT__counter_37__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 5U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1dU)));
    __PVT__counter_38__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 6U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1eU)));
    __PVT__counter_39__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 7U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
                                                  >> 0x1fU)));
    __PVT__counter_40__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 8U) 
                                               ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U]));
    __PVT__counter_41__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 9U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 1U)));
    __PVT__counter_42__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xaU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 2U)));
    __PVT__counter_43__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xbU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 3U)));
    __PVT__counter_44__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xcU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 4U)));
    __PVT__counter_45__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xdU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 5U)));
    __PVT__counter_46__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xeU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 6U)));
    __PVT__counter_47__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0xfU) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 7U)));
    __PVT__counter_48__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x10U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 8U)));
    __PVT__counter_49__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x11U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 9U)));
    __PVT__counter_50__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x12U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xaU)));
    __PVT__counter_51__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x13U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xbU)));
    __PVT__counter_52__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x14U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xcU)));
    __PVT__counter_53__DOT___carryWire_T_4 = (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                >> 0x15U) 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                  >> 0xdU)));
    vlSelf->__PVT___counter_io_cout = (1U & (((IData)(__PVT__counter__DOT___carryWire_T_4) 
                                              & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                 >> 0x10U)) 
                                             | ((~ (IData)(__PVT__counter__DOT___carryWire_T_4)) 
                                                & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U])));
    vlSelf->counter__DOT____VdfgTmp_h31758f64__0 = 
        (1U & ((IData)(__PVT__counter__DOT___carryWire_T_4) 
               ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                  >> 0x10U)));
    vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 6U)));
    vlSelf->__PVT___counter_1_io_cout = (1U & (((IData)(__PVT__counter_1__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x11U)) 
                                               | ((~ (IData)(__PVT__counter_1__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 1U))));
    vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_1__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x11U)));
    vlSelf->__PVT___counter_2_io_cout = (1U & (((IData)(__PVT__counter_2__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x12U)) 
                                               | ((~ (IData)(__PVT__counter_2__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 2U))));
    vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_2__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x12U)));
    vlSelf->__PVT___counter_3_io_cout = (1U & (((IData)(__PVT__counter_3__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x13U)) 
                                               | ((~ (IData)(__PVT__counter_3__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 3U))));
    vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_3__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x13U)));
    vlSelf->__PVT___counter_4_io_cout = (1U & (((IData)(__PVT__counter_4__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x14U)) 
                                               | ((~ (IData)(__PVT__counter_4__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 4U))));
    vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_4__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x14U)));
    vlSelf->__PVT___counter_5_io_cout = (1U & (((IData)(__PVT__counter_5__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x15U)) 
                                               | ((~ (IData)(__PVT__counter_5__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 5U))));
    vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_5__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x15U)));
    vlSelf->__PVT___counter_6_io_cout = (1U & (((IData)(__PVT__counter_6__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x16U)) 
                                               | ((~ (IData)(__PVT__counter_6__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 6U))));
    vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_6__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x16U)));
    vlSelf->__PVT___counter_7_io_cout = (1U & (((IData)(__PVT__counter_7__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x17U)) 
                                               | ((~ (IData)(__PVT__counter_7__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 7U))));
    vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_7__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x17U)));
    vlSelf->__PVT___counter_8_io_cout = (1U & (((IData)(__PVT__counter_8__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x18U)) 
                                               | ((~ (IData)(__PVT__counter_8__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 8U))));
    vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_8__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x18U)));
    vlSelf->__PVT___counter_9_io_cout = (1U & (((IData)(__PVT__counter_9__DOT___carryWire_T_4) 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                   >> 0x19U)) 
                                               | ((~ (IData)(__PVT__counter_9__DOT___carryWire_T_4)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                     >> 9U))));
    vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_9__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x19U)));
    vlSelf->__PVT___counter_10_io_cout = (1U & (((IData)(__PVT__counter_10__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1aU)) 
                                                | ((~ (IData)(__PVT__counter_10__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xaU))));
    vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_10__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1aU)));
    vlSelf->__PVT___counter_11_io_cout = (1U & (((IData)(__PVT__counter_11__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1bU)) 
                                                | ((~ (IData)(__PVT__counter_11__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xbU))));
    vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_11__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1bU)));
    vlSelf->__PVT___counter_12_io_cout = (1U & (((IData)(__PVT__counter_12__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1cU)) 
                                                | ((~ (IData)(__PVT__counter_12__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xcU))));
    vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_12__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1cU)));
    vlSelf->__PVT___counter_13_io_cout = (1U & (((IData)(__PVT__counter_13__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1dU)) 
                                                | ((~ (IData)(__PVT__counter_13__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xdU))));
    vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_13__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1dU)));
    vlSelf->__PVT___counter_14_io_cout = (1U & (((IData)(__PVT__counter_14__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1eU)) 
                                                | ((~ (IData)(__PVT__counter_14__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xeU))));
    vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_14__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                    >> 0x1eU)));
    vlSelf->__PVT___counter_15_io_cout = (1U & (((IData)(__PVT__counter_15__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                    >> 0x1fU)) 
                                                | ((~ (IData)(__PVT__counter_15__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0xfU))));
    vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0 
        = ((IData)(__PVT__counter_15__DOT___carryWire_T_4) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
              >> 0x1fU));
    vlSelf->__PVT___counter_16_io_cout = (1U & (((IData)(__PVT__counter_16__DOT___carryWire_T_4) 
                                                 & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U]) 
                                                | ((~ (IData)(__PVT__counter_16__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x10U))));
    vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_16__DOT___carryWire_T_4) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U]));
    vlSelf->__PVT___counter_17_io_cout = (1U & (((IData)(__PVT__counter_17__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 1U)) 
                                                | ((~ (IData)(__PVT__counter_17__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x11U))));
    vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_17__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 1U)));
    vlSelf->__PVT___counter_18_io_cout = (1U & (((IData)(__PVT__counter_18__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 2U)) 
                                                | ((~ (IData)(__PVT__counter_18__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x12U))));
    vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_18__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 2U)));
    vlSelf->__PVT___counter_19_io_cout = (1U & (((IData)(__PVT__counter_19__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 3U)) 
                                                | ((~ (IData)(__PVT__counter_19__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x13U))));
    vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_19__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 3U)));
    vlSelf->__PVT___counter_20_io_cout = (1U & (((IData)(__PVT__counter_20__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 4U)) 
                                                | ((~ (IData)(__PVT__counter_20__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x14U))));
    vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_20__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 4U)));
    vlSelf->__PVT___counter_21_io_cout = (1U & (((IData)(__PVT__counter_21__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 5U)) 
                                                | ((~ (IData)(__PVT__counter_21__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x15U))));
    vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_21__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 5U)));
    vlSelf->__PVT___counter_22_io_cout = (1U & (((IData)(__PVT__counter_22__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 6U)) 
                                                | ((~ (IData)(__PVT__counter_22__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x16U))));
    vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_22__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 6U)));
    vlSelf->__PVT___counter_23_io_cout = (1U & (((IData)(__PVT__counter_23__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 7U)) 
                                                | ((~ (IData)(__PVT__counter_23__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x17U))));
    vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_23__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 7U)));
    vlSelf->__PVT___counter_24_io_cout = (1U & (((IData)(__PVT__counter_24__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 8U)) 
                                                | ((~ (IData)(__PVT__counter_24__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x18U))));
    vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_24__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 8U)));
    vlSelf->__PVT___counter_25_io_cout = (1U & (((IData)(__PVT__counter_25__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 9U)) 
                                                | ((~ (IData)(__PVT__counter_25__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x19U))));
    vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_25__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 9U)));
    vlSelf->__PVT___counter_26_io_cout = (1U & (((IData)(__PVT__counter_26__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xaU)) 
                                                | ((~ (IData)(__PVT__counter_26__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1aU))));
    vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_26__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xaU)));
    vlSelf->__PVT___counter_27_io_cout = (1U & (((IData)(__PVT__counter_27__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xbU)) 
                                                | ((~ (IData)(__PVT__counter_27__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1bU))));
    vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_27__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xbU)));
    vlSelf->__PVT___counter_28_io_cout = (1U & (((IData)(__PVT__counter_28__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xcU)) 
                                                | ((~ (IData)(__PVT__counter_28__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1cU))));
    vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_28__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xcU)));
    vlSelf->__PVT___counter_29_io_cout = (1U & (((IData)(__PVT__counter_29__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xdU)) 
                                                | ((~ (IData)(__PVT__counter_29__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1dU))));
    vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_29__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xdU)));
    vlSelf->__PVT___counter_30_io_cout = (1U & (((IData)(__PVT__counter_30__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xeU)) 
                                                | ((~ (IData)(__PVT__counter_30__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1eU))));
    vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_30__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xeU)));
    vlSelf->__PVT___counter_31_io_cout = (1U & (((IData)(__PVT__counter_31__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0xfU)) 
                                                | ((~ (IData)(__PVT__counter_31__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
                                                      >> 0x1fU))));
    vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_31__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0xfU)));
    vlSelf->__PVT___counter_32_io_cout = (1U & (((IData)(__PVT__counter_32__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x10U)) 
                                                | ((~ (IData)(__PVT__counter_32__DOT___carryWire_T_4)) 
                                                   & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U])));
    vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_32__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x10U)));
    vlSelf->__PVT___counter_33_io_cout = (1U & (((IData)(__PVT__counter_33__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x11U)) 
                                                | ((~ (IData)(__PVT__counter_33__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 1U))));
    vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_33__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x11U)));
    vlSelf->__PVT___counter_34_io_cout = (1U & (((IData)(__PVT__counter_34__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x12U)) 
                                                | ((~ (IData)(__PVT__counter_34__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 2U))));
    vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_34__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x12U)));
    vlSelf->__PVT___counter_35_io_cout = (1U & (((IData)(__PVT__counter_35__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x13U)) 
                                                | ((~ (IData)(__PVT__counter_35__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 3U))));
    vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_35__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x13U)));
    vlSelf->__PVT___counter_36_io_cout = (1U & (((IData)(__PVT__counter_36__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x14U)) 
                                                | ((~ (IData)(__PVT__counter_36__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 4U))));
    vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_36__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x14U)));
    vlSelf->__PVT___counter_37_io_cout = (1U & (((IData)(__PVT__counter_37__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x15U)) 
                                                | ((~ (IData)(__PVT__counter_37__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 5U))));
    vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_37__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x15U)));
    vlSelf->__PVT___counter_38_io_cout = (1U & (((IData)(__PVT__counter_38__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x16U)) 
                                                | ((~ (IData)(__PVT__counter_38__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 6U))));
    vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_38__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x16U)));
    vlSelf->__PVT___counter_39_io_cout = (1U & (((IData)(__PVT__counter_39__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x17U)) 
                                                | ((~ (IData)(__PVT__counter_39__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 7U))));
    vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_39__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x17U)));
    vlSelf->__PVT___counter_40_io_cout = (1U & (((IData)(__PVT__counter_40__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x18U)) 
                                                | ((~ (IData)(__PVT__counter_40__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 8U))));
    vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_40__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x18U)));
    vlSelf->__PVT___counter_41_io_cout = (1U & (((IData)(__PVT__counter_41__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x19U)) 
                                                | ((~ (IData)(__PVT__counter_41__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 9U))));
    vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_41__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x19U)));
    vlSelf->__PVT___counter_42_io_cout = (1U & (((IData)(__PVT__counter_42__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1aU)) 
                                                | ((~ (IData)(__PVT__counter_42__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xaU))));
    vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_42__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1aU)));
    vlSelf->__PVT___counter_43_io_cout = (1U & (((IData)(__PVT__counter_43__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1bU)) 
                                                | ((~ (IData)(__PVT__counter_43__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xbU))));
    vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_43__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1bU)));
    vlSelf->__PVT___counter_44_io_cout = (1U & (((IData)(__PVT__counter_44__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1cU)) 
                                                | ((~ (IData)(__PVT__counter_44__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xcU))));
    vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_44__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1cU)));
    vlSelf->__PVT___counter_45_io_cout = (1U & (((IData)(__PVT__counter_45__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1dU)) 
                                                | ((~ (IData)(__PVT__counter_45__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xdU))));
    vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_45__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1dU)));
    vlSelf->__PVT___counter_46_io_cout = (1U & (((IData)(__PVT__counter_46__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1eU)) 
                                                | ((~ (IData)(__PVT__counter_46__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xeU))));
    vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_46__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                    >> 0x1eU)));
    vlSelf->__PVT___counter_47_io_cout = (1U & (((IData)(__PVT__counter_47__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
                                                    >> 0x1fU)) 
                                                | ((~ (IData)(__PVT__counter_47__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0xfU))));
    vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0 
        = ((IData)(__PVT__counter_47__DOT___carryWire_T_4) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
              >> 0x1fU));
    vlSelf->__PVT___counter_48_io_cout = (1U & (((IData)(__PVT__counter_48__DOT___carryWire_T_4) 
                                                 & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U]) 
                                                | ((~ (IData)(__PVT__counter_48__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x10U))));
    vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_48__DOT___carryWire_T_4) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U]));
    vlSelf->__PVT___counter_49_io_cout = (1U & (((IData)(__PVT__counter_49__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 1U)) 
                                                | ((~ (IData)(__PVT__counter_49__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x11U))));
    vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_49__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 1U)));
    vlSelf->__PVT___counter_50_io_cout = (1U & (((IData)(__PVT__counter_50__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 2U)) 
                                                | ((~ (IData)(__PVT__counter_50__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x12U))));
    vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_50__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 2U)));
    vlSelf->__PVT___counter_51_io_cout = (1U & (((IData)(__PVT__counter_51__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 3U)) 
                                                | ((~ (IData)(__PVT__counter_51__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x13U))));
    vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_51__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 3U)));
    vlSelf->__PVT___counter_52_io_cout = (1U & (((IData)(__PVT__counter_52__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 4U)) 
                                                | ((~ (IData)(__PVT__counter_52__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x14U))));
    vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_52__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 4U)));
    vlSelf->__PVT___counter_53_io_cout = (1U & (((IData)(__PVT__counter_53__DOT___carryWire_T_4) 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                    >> 5U)) 
                                                | ((~ (IData)(__PVT__counter_53__DOT___carryWire_T_4)) 
                                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                      >> 0x15U))));
    vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(__PVT__counter_53__DOT___carryWire_T_4) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 5U)));
    vlSelf->counter_54__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1eU)));
    vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 9U)));
    vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xaU)));
    vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xbU)));
    vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xcU)));
    vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xdU)));
    vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xeU)));
    vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0xfU)));
    vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x10U)));
    vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x11U)));
    vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x12U)));
    vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x13U)));
    vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x14U)));
    vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x15U)));
    vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x16U)));
    vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x17U)));
    vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x18U)));
    vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x19U)));
    vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1aU)));
    vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1bU)));
    vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1cU)));
    vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1dU)));
    vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                    >> 0x1eU)));
    vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0 
        = ((IData)(vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0) 
           ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
              >> 0x1fU));
    vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0) 
                 ^ vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U]));
    vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 1U)));
    vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 2U)));
    vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 3U)));
    vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 4U)));
    vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 5U)));
    vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 6U)));
    vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 7U)));
    vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 8U)));
    vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 9U)));
    vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xaU)));
    vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xbU)));
    vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xcU)));
    vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xdU)));
    vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xeU)));
    vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0xfU)));
    vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x10U)));
    vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x11U)));
    vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x12U)));
    vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x13U)));
    vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x14U)));
    vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x15U)));
    vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x16U)));
    vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x17U)));
    vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x18U)));
    vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x19U)));
    vlSelf->counter_50__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1aU)));
    vlSelf->counter_51__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1bU)));
    vlSelf->counter_52__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1cU)));
    vlSelf->counter_53__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0) 
                 ^ (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                    >> 0x1dU)));
    vlSelf->__PVT__io_sum_o = (((QData)((IData)((1U 
                                                 & (((((vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                        >> 0x17U) 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
                                                        >> 0xfU)) 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                       >> 7U)) 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                      >> 0x1fU)) 
                                                    ^ 
                                                    (((IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4) 
                                                      & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                         >> 6U)) 
                                                     | ((~ (IData)(vlSelf->__PVT__counter_54__DOT___carryWire_T_4)) 
                                                        & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
                                                           >> 0x16U))))))) 
                                << 0x37U) | (((QData)((IData)(
                                                              ((IData)(vlSelf->counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                                               ^ (IData)(vlSelf->__PVT___counter_53_io_cout)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                  ^ (IData)(vlSelf->__PVT___counter_52_io_cout)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                     ^ (IData)(vlSelf->__PVT___counter_51_io_cout)))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelf->counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                        ^ (IData)(vlSelf->__PVT___counter_50_io_cout)))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlSelf->counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                           ^ (IData)(vlSelf->__PVT___counter_49_io_cout)))) 
                                                          << 0x32U) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                              ^ (IData)(vlSelf->__PVT___counter_48_io_cout)))) 
                                                             << 0x31U) 
                                                            | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_47_io_cout)))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_46_io_cout)))) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_45_io_cout)))) 
                                                                      << 0x2eU) 
                                                                     | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_44_io_cout)))) 
                                                                         << 0x2dU) 
                                                                        | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_43_io_cout)))) 
                                                                            << 0x2cU) 
                                                                           | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_42_io_cout)))) 
                                                                               << 0x2bU) 
                                                                              | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_41_io_cout)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_40_io_cout)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_39_io_cout)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_38_io_cout)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_37_io_cout)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_36_io_cout)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_35_io_cout)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_34_io_cout)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_33_io_cout)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_32_io_cout)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_31_io_cout)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_30_io_cout)) 
                                                                                << 0x1fU) 
                                                                                | ((((IData)(vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_29_io_cout)) 
                                                                                << 0x1eU) 
                                                                                | ((((IData)(vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_28_io_cout)) 
                                                                                << 0x1dU) 
                                                                                | ((((IData)(vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_27_io_cout)) 
                                                                                << 0x1cU) 
                                                                                | ((((IData)(vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_26_io_cout)) 
                                                                                << 0x1bU) 
                                                                                | ((((IData)(vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_25_io_cout)) 
                                                                                << 0x1aU) 
                                                                                | ((((IData)(vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_24_io_cout)) 
                                                                                << 0x19U) 
                                                                                | ((((IData)(vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_23_io_cout)) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_22_io_cout)) 
                                                                                << 0x17U) 
                                                                                | ((((IData)(vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_21_io_cout)) 
                                                                                << 0x16U) 
                                                                                | ((((IData)(vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_20_io_cout)) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_19_io_cout)) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_18_io_cout)) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_17_io_cout)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_16_io_cout)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_15_io_cout)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_14_io_cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_13_io_cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_12_io_cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_11_io_cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_10_io_cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_9_io_cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_8_io_cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_7_io_cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_6_io_cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_5_io_cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_4_io_cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_3_io_cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_2_io_cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_1_io_cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->__PVT___counter_io_cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->counter__DOT____VdfgTmp_h31758f64__0) 
                                                                                ^ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 8U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__io_carry_o = (((QData)((IData)((1U 
                                                   & (((IData)(vlSelf->counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                                       & (IData)(vlSelf->__PVT___counter_53_io_cout)) 
                                                      | (((~ 
                                                           (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                            >> 0x1eU)) 
                                                          ^ (IData)(vlSelf->counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                                         & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                            >> 0x1eU)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (((IData)(vlSelf->counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                     & (IData)(vlSelf->__PVT___counter_52_io_cout)) 
                                                                    | (((~ 
                                                                         (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                          >> 0x1dU)) 
                                                                        ^ (IData)(vlSelf->counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                                                       & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                          >> 0x1dU)))))) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (((IData)(vlSelf->counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                        & (IData)(vlSelf->__PVT___counter_51_io_cout)) 
                                                                       | (((~ 
                                                                            (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                             >> 0x1cU)) 
                                                                           ^ (IData)(vlSelf->counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                                                          & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                             >> 0x1cU)))))) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (((IData)(vlSelf->counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                           & (IData)(vlSelf->__PVT___counter_50_io_cout)) 
                                                                          | (((~ 
                                                                               (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1bU)) 
                                                                              ^ (IData)(vlSelf->counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1bU)))))) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                              & (IData)(vlSelf->__PVT___counter_49_io_cout)) 
                                                                             | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1aU)) 
                                                                                ^ (IData)(vlSelf->counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x1aU)))))) 
                                                         << 0x33U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((IData)(vlSelf->counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_48_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSelf->counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x19U)))))) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (((IData)(vlSelf->counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_47_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x18U)) 
                                                                                ^ (IData)(vlSelf->counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x18U)))))) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_46_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSelf->counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x17U)))))) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_45_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSelf->counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x16U)))))) 
                                                                     << 0x2fU) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_44_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSelf->counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x15U)))))) 
                                                                        << 0x2eU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_43_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSelf->counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x14U)))))) 
                                                                           << 0x2dU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_42_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSelf->counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x13U)))))) 
                                                                              << 0x2cU) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_41_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSelf->counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x12U)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_40_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSelf->counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x11U)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_39_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(vlSelf->counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0x10U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_38_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSelf->counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xfU)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_37_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSelf->counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xeU)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_36_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSelf->counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xdU)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_35_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSelf->counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xcU)))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_34_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSelf->counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xbU)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_33_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSelf->counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 0xaU)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_32_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSelf->counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 9U)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_31_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 8U)) 
                                                                                ^ (IData)(vlSelf->counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 8U)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_30_io_cout)) 
                                                                                | (((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 7U)) 
                                                                                ^ (IData)(vlSelf->counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 7U)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((((IData)(vlSelf->counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_29_io_cout)) 
                                                                                << 0x1fU) 
                                                                                | (0x80000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 6U)) 
                                                                                ^ (IData)(vlSelf->counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1fU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x40000000U 
                                                                                & ((((IData)(vlSelf->counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_28_io_cout)) 
                                                                                << 0x1eU) 
                                                                                | (0xc0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 5U)) 
                                                                                ^ (IData)(vlSelf->counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1eU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x20000000U 
                                                                                & ((((IData)(vlSelf->counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_27_io_cout)) 
                                                                                << 0x1dU) 
                                                                                | (0xe0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 4U)) 
                                                                                ^ (IData)(vlSelf->counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1dU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x10000000U 
                                                                                & ((((IData)(vlSelf->counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_26_io_cout)) 
                                                                                << 0x1cU) 
                                                                                | (0xf0000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 3U)) 
                                                                                ^ (IData)(vlSelf->counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1cU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x8000000U 
                                                                                & ((((IData)(vlSelf->counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_25_io_cout)) 
                                                                                << 0x1bU) 
                                                                                | (0xf8000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 2U)) 
                                                                                ^ (IData)(vlSelf->counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1bU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_24_io_cout)) 
                                                                                << 0x1aU) 
                                                                                | (0xfc000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                >> 1U)) 
                                                                                ^ (IData)(vlSelf->counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x1aU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
                                                                                << 0x19U))))) 
                                                                                | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_23_io_cout)) 
                                                                                | (((~ 
                                                                                vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U]) 
                                                                                ^ (IData)(vlSelf->counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U])) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_22_io_cout)) 
                                                                                << 0x18U) 
                                                                                | (0x1000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1fU)) 
                                                                                ^ (IData)(vlSelf->counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x18U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_21_io_cout)) 
                                                                                << 0x17U) 
                                                                                | (0x1800000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1eU)) 
                                                                                ^ (IData)(vlSelf->counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x17U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_20_io_cout)) 
                                                                                << 0x16U) 
                                                                                | (0x1c00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1dU)) 
                                                                                ^ (IData)(vlSelf->counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x16U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_19_io_cout)) 
                                                                                << 0x15U) 
                                                                                | (0x1e00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1cU)) 
                                                                                ^ (IData)(vlSelf->counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x15U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_18_io_cout)) 
                                                                                << 0x14U) 
                                                                                | (0x1f00000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1bU)) 
                                                                                ^ (IData)(vlSelf->counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x14U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_17_io_cout)) 
                                                                                << 0x13U) 
                                                                                | (0x1f80000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x1aU)) 
                                                                                ^ (IData)(vlSelf->counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x13U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_16_io_cout)) 
                                                                                << 0x12U) 
                                                                                | (0x1fc0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x19U)) 
                                                                                ^ (IData)(vlSelf->counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x12U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_15_io_cout)) 
                                                                                << 0x11U) 
                                                                                | (0x1fe0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x18U)) 
                                                                                ^ (IData)(vlSelf->counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x11U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_14_io_cout)) 
                                                                                << 0x10U) 
                                                                                | (0x1ff0000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x17U)) 
                                                                                ^ (IData)(vlSelf->counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0x10U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_13_io_cout)) 
                                                                                << 0xfU) 
                                                                                | (0x1ff8000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x16U)) 
                                                                                ^ (IData)(vlSelf->counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xfU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_12_io_cout)) 
                                                                                << 0xeU) 
                                                                                | (0x1ffc000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x15U)) 
                                                                                ^ (IData)(vlSelf->counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xeU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_11_io_cout)) 
                                                                                << 0xdU) 
                                                                                | (0x1ffe000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x14U)) 
                                                                                ^ (IData)(vlSelf->counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xdU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_10_io_cout)) 
                                                                                << 0xcU) 
                                                                                | (0x1fff000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x13U)) 
                                                                                ^ (IData)(vlSelf->counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xcU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_9_io_cout)) 
                                                                                << 0xbU) 
                                                                                | (0x1fff800U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(vlSelf->counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_8_io_cout)) 
                                                                                << 0xaU) 
                                                                                | (0x1fffc00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(vlSelf->counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_7_io_cout)) 
                                                                                << 9U) 
                                                                                | (0x1fffe00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(vlSelf->counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_6_io_cout)) 
                                                                                << 8U) 
                                                                                | (0x1ffff00U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(vlSelf->counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 8U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_5_io_cout)) 
                                                                                << 7U) 
                                                                                | (0x1ffff80U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(vlSelf->counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 7U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_4_io_cout)) 
                                                                                << 6U) 
                                                                                | (0x1ffffc0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(vlSelf->counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 6U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_3_io_cout)) 
                                                                                << 5U) 
                                                                                | (0x1ffffe0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(vlSelf->counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 5U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_2_io_cout)) 
                                                                                << 4U) 
                                                                                | (0x1fffff0U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(vlSelf->counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 4U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_1_io_cout)) 
                                                                                << 3U) 
                                                                                | (0x1fffff8U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(vlSelf->counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->__PVT___counter_io_cout)) 
                                                                                << 2U) 
                                                                                | (0x1fffffcU 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSelf->counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 2U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U))))) 
                                                                                | (2U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 8U)) 
                                                                                ^ (IData)(vlSelf->counter__DOT____VdfgTmp_h31758f64__0)) 
                                                                                << 1U) 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3.csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
                                                                                >> 7U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}
