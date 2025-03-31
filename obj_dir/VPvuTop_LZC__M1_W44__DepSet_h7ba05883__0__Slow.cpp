// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_LZC__M1_W44.h"

VL_ATTR_COLD void VPvuTop_LZC__M1_W44___ctor_var_reset(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(68, vlSelf->in_i);
    vlSelf->cnt_o = VL_RAND_RESET_I(7);
    vlSelf->empty_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__gen_lzc__DOT__sel_nodes);
    VL_RAND_RESET_W(896, vlSelf->__PVT__gen_lzc__DOT__index_nodes);
    VL_RAND_RESET_W(68, vlSelf->__PVT__gen_lzc__DOT__in_tmp);
    vlSelf->__PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vlvbound_h91a9c36e__0 = VL_RAND_RESET_I(1);
}
