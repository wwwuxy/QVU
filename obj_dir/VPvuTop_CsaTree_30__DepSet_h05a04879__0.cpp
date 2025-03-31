// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Compressor4to2_24.h"
#include "VPvuTop_CsaTree_30.h"

VL_INLINE_OPT void VPvuTop_CsaTree_30___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1(VPvuTop_CsaTree_30* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VPvuTop_CsaTree_30___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__1\n"); );
    // Body
    vlSelf->__Vcellinp__compressor__io_operands_i[0U] 
        = vlSelf->__PVT___csa_tree_A_io_sum_o[0U];
    vlSelf->__Vcellinp__compressor__io_operands_i[1U] 
        = vlSelf->__PVT___csa_tree_A_io_sum_o[1U];
    vlSelf->__Vcellinp__compressor__io_operands_i[2U] 
        = vlSelf->__PVT___csa_tree_A_io_sum_o[2U];
    vlSelf->__Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSelf->__PVT___csa_tree_A_io_carry_o[0U] 
            << 0x10U) | vlSelf->__PVT___csa_tree_A_io_sum_o[3U]);
    vlSelf->__Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSelf->__PVT___csa_tree_A_io_carry_o[0U] 
            >> 0x10U) | (vlSelf->__PVT___csa_tree_A_io_carry_o[1U] 
                         << 0x10U));
    vlSelf->__Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSelf->__PVT___csa_tree_A_io_carry_o[1U] 
            >> 0x10U) | (vlSelf->__PVT___csa_tree_A_io_carry_o[2U] 
                         << 0x10U));
    vlSelf->__Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSelf->__PVT___csa_tree_A_io_carry_o[2U] 
            >> 0x10U) | (vlSelf->__PVT___csa_tree_A_io_carry_o[3U] 
                         << 0x10U));
    vlSelf->__Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]) 
            | (vlSelf->__PVT___csa_tree_A_io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]));
    vlSelf->__Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]) 
           | (0xffff0000U & vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]));
    vlSelf->__Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]) 
           | (0xffff0000U & vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]));
    vlSelf->__Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[3U]));
    vlSelf->__Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->__Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->__Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSelf->__PVT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[3U] 
                         << 0x10U));
}
