// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQvuTop.h for the primary calling header

#include "verilated.h"

#include "VQvuTop_LZC__M1_W1f.h"

VL_ATTR_COLD void VQvuTop_LZC__M1_W1f___ctor_var_reset(VQvuTop_LZC__M1_W1f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VQvuTop_LZC__M1_W1f___ctor_var_reset\n"); );
    // Body
    vlSelf->in_i = VL_RAND_RESET_I(31);
    vlSelf->cnt_o = VL_RAND_RESET_I(5);
    vlSelf->empty_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__PVT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
}
