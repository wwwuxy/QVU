// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPvuTop.h for the primary calling header

#ifndef VERILATED_VPVUTOP_LZC__M1_W44_H_
#define VERILATED_VPVUTOP_LZC__M1_W44_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;

class VPvuTop_LZC__M1_W44 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(cnt_o,6,0);
    VL_OUT8(empty_o,0,0);
    VlWide<28>/*895:0*/ __PVT__gen_lzc__DOT__index_nodes;
    CData/*0:0*/ __Vlvbound_h91a9c36e__0;
    VL_INW(in_i,67,0,3);
    VlWide<4>/*127:0*/ __PVT__gen_lzc__DOT__sel_nodes;
    VlWide<3>/*67:0*/ __PVT__gen_lzc__DOT__in_tmp;
    IData/*31:0*/ __PVT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i;

    // INTERNAL VARIABLES
    VPvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPvuTop_LZC__M1_W44(VPvuTop__Syms* symsp, const char* v__name);
    ~VPvuTop_LZC__M1_W44();
    VL_UNCOPYABLE(VPvuTop_LZC__M1_W44);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
