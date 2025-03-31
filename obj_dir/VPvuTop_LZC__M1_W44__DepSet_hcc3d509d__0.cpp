// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_LZC__M1_W44.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__0(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__0\n"); );
    // Body
    vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x44U > vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vlvbound_h91a9c36e__0 = ((0x43U >= 
                                            (0x7fU 
                                             & ((IData)(0x43U) 
                                                - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                                           & (vlSymsp->TOP.PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i[
                                              (3U & 
                                               (((IData)(0x43U) 
                                                 - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        if (VL_LIKELY((0x43U >= (0x7fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->__PVT__gen_lzc__DOT__in_tmp[(3U 
                                                 & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                                                    >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[
                    (3U & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->__Vlvbound_h91a9c36e__0) 
                                        << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
}

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__0(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__0\n"); );
    // Body
    vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x44U > vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vlvbound_h91a9c36e__0 = ((0x43U >= 
                                            (0x7fU 
                                             & ((IData)(0x43U) 
                                                - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                                           & (vlSymsp->TOP.PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i[
                                              (3U & 
                                               (((IData)(0x43U) 
                                                 - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        if (VL_LIKELY((0x43U >= (0x7fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->__PVT__gen_lzc__DOT__in_tmp[(3U 
                                                 & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                                                    >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[
                    (3U & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->__Vlvbound_h91a9c36e__0) 
                                        << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
}

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__0(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__0\n"); );
    // Body
    vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x44U > vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vlvbound_h91a9c36e__0 = ((0x43U >= 
                                            (0x7fU 
                                             & ((IData)(0x43U) 
                                                - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                                           & (vlSymsp->TOP.PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i[
                                              (3U & 
                                               (((IData)(0x43U) 
                                                 - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        if (VL_LIKELY((0x43U >= (0x7fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->__PVT__gen_lzc__DOT__in_tmp[(3U 
                                                 & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                                                    >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[
                    (3U & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->__Vlvbound_h91a9c36e__0) 
                                        << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
}

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__0(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__0\n"); );
    // Body
    vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x44U > vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vlvbound_h91a9c36e__0 = ((0x43U >= 
                                            (0x7fU 
                                             & ((IData)(0x43U) 
                                                - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                                           & (vlSymsp->TOP.PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i[
                                              (3U & 
                                               (((IData)(0x43U) 
                                                 - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        if (VL_LIKELY((0x43U >= (0x7fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->__PVT__gen_lzc__DOT__in_tmp[(3U 
                                                 & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                                                    >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[
                    (3U & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->__Vlvbound_h91a9c36e__0) 
                                        << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
}

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__0(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__0\n"); );
    // Body
    vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x44U > vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vlvbound_h91a9c36e__0 = ((0x43U >= 
                                            (0x7fU 
                                             & ((IData)(0x43U) 
                                                - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                                           & (vlSymsp->TOP.PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i[
                                              (3U & 
                                               (((IData)(0x43U) 
                                                 - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        if (VL_LIKELY((0x43U >= (0x7fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->__PVT__gen_lzc__DOT__in_tmp[(3U 
                                                 & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                                                    >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[
                    (3U & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->__Vlvbound_h91a9c36e__0) 
                                        << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
}

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__0(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__0\n"); );
    // Body
    vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x44U > vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vlvbound_h91a9c36e__0 = ((0x43U >= 
                                            (0x7fU 
                                             & ((IData)(0x43U) 
                                                - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                                           & (vlSymsp->TOP.PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[
                                              (3U & 
                                               (((IData)(0x43U) 
                                                 - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        if (VL_LIKELY((0x43U >= (0x7fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->__PVT__gen_lzc__DOT__in_tmp[(3U 
                                                 & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                                                    >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[
                    (3U & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->__Vlvbound_h91a9c36e__0) 
                                        << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
}

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__0(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__0\n"); );
    // Body
    vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x44U > vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vlvbound_h91a9c36e__0 = ((0x43U >= 
                                            (0x7fU 
                                             & ((IData)(0x43U) 
                                                - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                                           & (vlSymsp->TOP.PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[
                                              (3U & 
                                               (((IData)(0x43U) 
                                                 - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        if (VL_LIKELY((0x43U >= (0x7fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->__PVT__gen_lzc__DOT__in_tmp[(3U 
                                                 & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                                                    >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[
                    (3U & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->__Vlvbound_h91a9c36e__0) 
                                        << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
}

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__0(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__0\n"); );
    // Body
    vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x44U > vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vlvbound_h91a9c36e__0 = ((0x43U >= 
                                            (0x7fU 
                                             & ((IData)(0x43U) 
                                                - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                                           & (vlSymsp->TOP.PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[
                                              (3U & 
                                               (((IData)(0x43U) 
                                                 - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     - vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        if (VL_LIKELY((0x43U >= (0x7fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->__PVT__gen_lzc__DOT__in_tmp[(3U 
                                                 & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                                                    >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[
                    (3U & (vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->__Vlvbound_h91a9c36e__0) 
                                        << (0x1fU & vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
}
