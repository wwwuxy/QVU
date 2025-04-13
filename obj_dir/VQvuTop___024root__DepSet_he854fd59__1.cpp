// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQvuTop.h for the primary calling header

#include "verilated.h"

#include "VQvuTop___024root.h"

void VQvuTop___024root___ico_sequent__TOP__0(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__0(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__1(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__2(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__3(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__4(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__5(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__6(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__7(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__8(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__9(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__10(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__11(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__12(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__13(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__14(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__15(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__16(VQvuTop___024root* vlSelf);
void VQvuTop___024root___ico_comb__TOP__17(VQvuTop___024root* vlSelf);

void VQvuTop___024root___eval_ico(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VQvuTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x10U))) {
        VQvuTop___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xfU))) {
        VQvuTop___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xeU))) {
        VQvuTop___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xdU))) {
        VQvuTop___024root___ico_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xcU))) {
        VQvuTop___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xbU))) {
        VQvuTop___024root___ico_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xaU))) {
        VQvuTop___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(9U))) {
        VQvuTop___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(8U))) {
        VQvuTop___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U))) {
        VQvuTop___024root___ico_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(6U))) {
        VQvuTop___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U))) {
        VQvuTop___024root___ico_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(4U))) {
        VQvuTop___024root___ico_comb__TOP__12(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U))) {
        VQvuTop___024root___ico_comb__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U))) {
        VQvuTop___024root___ico_comb__TOP__14(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        VQvuTop___024root___ico_comb__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(9U)) 
               | vlSelf->__VicoTriggered.at(0xaU)) 
              | vlSelf->__VicoTriggered.at(0xbU)) | vlSelf->__VicoTriggered.at(0xcU)) 
            | vlSelf->__VicoTriggered.at(0xdU)) | vlSelf->__VicoTriggered.at(0xeU)) 
          | vlSelf->__VicoTriggered.at(0xfU)) | vlSelf->__VicoTriggered.at(0x10U))) {
        VQvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
               | vlSelf->__VicoTriggered.at(2U)) | vlSelf->__VicoTriggered.at(3U)) 
             | vlSelf->__VicoTriggered.at(4U)) | vlSelf->__VicoTriggered.at(5U)) 
           | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(7U)) 
         | vlSelf->__VicoTriggered.at(8U))) {
        VQvuTop___024root___ico_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
}

void VQvuTop___024root___eval_act(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0xfU)) {
        VQvuTop___024root___ico_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VQvuTop___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VQvuTop___024root___ico_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VQvuTop___024root___ico_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VQvuTop___024root___ico_comb__TOP__4(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VQvuTop___024root___ico_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VQvuTop___024root___ico_comb__TOP__6(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VQvuTop___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VQvuTop___024root___ico_comb__TOP__8(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VQvuTop___024root___ico_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VQvuTop___024root___ico_comb__TOP__10(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VQvuTop___024root___ico_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VQvuTop___024root___ico_comb__TOP__12(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VQvuTop___024root___ico_comb__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VQvuTop___024root___ico_comb__TOP__14(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VQvuTop___024root___ico_comb__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((((((((vlSelf->__VactTriggered.at(8U) | vlSelf->__VactTriggered.at(9U)) 
              | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xbU)) 
            | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xdU)) 
          | vlSelf->__VactTriggered.at(0xeU)) | vlSelf->__VactTriggered.at(0xfU))) {
        VQvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
              | vlSelf->__VactTriggered.at(2U)) | vlSelf->__VactTriggered.at(3U)) 
            | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
          | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U))) {
        VQvuTop___024root___ico_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___nba_sequent__TOP__0(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMax;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMax = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMin;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMin = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin = 0;
    CData/*0:0*/ __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchHasData;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchHasData = 0;
    CData/*1:0*/ __Vdly__QvuTop__DOT__quantizeInt8__DOT__state;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__state = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax = 0;
    QData/*32:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin = 0;
    CData/*0:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData = 0;
    CData/*1:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__state;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__state = 0;
    VlWide<4>/*127:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram;
    VL_ZERO_W(128, __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram);
    IData/*19:0*/ __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal = 0;
    // Body
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__state = vlSelf->QvuTop__DOT__quantizeInt8__DOT__state;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchHasData 
        = vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin 
        = vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax 
        = vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMin 
        = vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin;
    __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMax 
        = vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__state = vlSelf->QvuTop__DOT__quantizeInt4__DOT__state;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal;
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U];
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[1U];
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[2U];
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[3U];
    __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale 
        = vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale;
    if (vlSelf->reset) {
        __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMax = 0x7fULL;
        __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMin = 0x1ffffff80ULL;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale = 1ULL;
        vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset = 0ULL;
        __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax = 0x1ffffff80ULL;
        __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin = 0x7fULL;
        __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchHasData = 0U;
        __Vdly__QvuTop__DOT__quantizeInt8__DOT__state = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax = 7ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin = 0x1fffffff8ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale = 1ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset = 0ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax = 0x1fffffff8ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin = 7ULL;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__state = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] = 0U;
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal = 0U;
    } else {
        vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_14 
            = (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__state));
        vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_16 
            = (1U & (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                      | ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                         & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)))) 
                     | (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_17 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                     & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_18 
            = (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__state));
        vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_15 
            = (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__state));
        vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_19 
            = ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_14) 
               | (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_15));
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_19) 
                      | (~ (((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_18) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                            & VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax))))))) {
            __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMax 
                = vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax;
        }
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_19) 
                      | (~ (((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_18) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                            & VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin))))))) {
            __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMin 
                = vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin;
        }
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_19) 
                      | (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_18) 
                            & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData))))))) {
            vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T_7 
                = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T)
                                      ? (- vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T)
                                      : vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T));
            vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20 
                = (0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T_7);
            vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_21 
                = (0x100ULL > vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T_7);
            vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax 
                                     + vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T_3 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax 
                                     + vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale 
                = (((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20) 
                    | (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_21))
                    ? 1ULL : (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                                          (0x1ffffffffULL 
                                                           & (0xfeULL 
                                                              + vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T_7)), 0xffULL)));
            vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset 
                = ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20)
                    ? vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin
                    : ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_21)
                        ? (((QData)((IData)((1U & (IData)(
                                                          (vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                                                           >> 0x20U))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                                                         >> 1U))))
                        : (((QData)((IData)((1U & (IData)(
                                                          (vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T_3 
                                                           >> 0x20U))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T_3 
                                                         >> 1U))))));
        }
        if (vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_14) {
            __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax = 0x1ffffff80ULL;
            __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin = 0x7fULL;
        } else if (vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_15) {
            if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                       & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                          | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1;
            }
            if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                       & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                          | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1;
            }
        }
        __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchHasData 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_14)) 
                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_15)
                         ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
                             ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_17) 
                                | (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_16))
                             : (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_17)) 
                                | (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_16)))
                         : (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData))));
        __Vdly__QvuTop__DOT__quantizeInt8__DOT__state 
            = (3U & (0x39U >> (7U & ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__state) 
                                     << 1U))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_17 
            = (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_19 
            = (1U & (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                      | ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                         & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)))) 
                     | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_20 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                     & (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_21 
            = (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_22 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold 
            = (0x7fffffU & VL_DIV_III(23, (0x7fffffU 
                                           & ((IData)(5U) 
                                              * vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_22)), (IData)(0x64U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T 
            = (0x7fffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_22 
                            - vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___dataRange_T 
            = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                 - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_4 
            = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___dataRange_T)
                                          ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___dataRange_T)
                                          : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___dataRange_T)) 
                                >> 3U));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_18 
            = (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_1_T 
            = (0xfffffU & ((0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                           + (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                              >> 0x10U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_2_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_1_T 
                           + (0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[1U])));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_3_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_2_T 
                           + (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                              >> 0x10U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_4_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_3_T 
                           + (0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[2U])));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_5_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_4_T 
                           + (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                              >> 0x10U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_6_T 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_5_T 
                           + (0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[3U])));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_23 
            = (0xffffU & vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U]);
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_24 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_1_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_25 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_2_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_26 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_3_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_27 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_4_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_28 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_5_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_29 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_6_T;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_30 
            = (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___cdf_6_T 
                           + (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                              >> 0x10U)));
        if ((0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal)) {
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin 
                                     + ((QData)((IData)(
                                                        (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_30 
                                                           > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                          & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_29 
                                                             <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                          ? 7U
                                                          : 
                                                         (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_29 
                                                            > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                           & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_28 
                                                              <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                           ? 6U
                                                           : 
                                                          (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_28 
                                                             > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                            & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_27 
                                                               <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                            ? 5U
                                                            : 
                                                           (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_27 
                                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                             & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_26 
                                                                <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                             ? 4U
                                                             : 
                                                            (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_26 
                                                               > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                              & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_25 
                                                                 <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                              ? 3U
                                                              : 
                                                             (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_25 
                                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                               & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_24 
                                                                  <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold))
                                                               ? 2U
                                                               : 
                                                              ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_24 
                                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold) 
                                                               & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_23 
                                                                  <= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold)))))))))) 
                                        * vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_4)));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin 
                                     + ((QData)((IData)(
                                                        (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_29 
                                                           < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                          & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_30 
                                                             >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                          ? 6U
                                                          : 
                                                         (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_28 
                                                            < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                           & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_29 
                                                              >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                           ? 5U
                                                           : 
                                                          (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_27 
                                                             < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                            & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_28 
                                                               >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                            ? 4U
                                                            : 
                                                           (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_26 
                                                              < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                             & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_27 
                                                                >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                             ? 3U
                                                             : 
                                                            (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_25 
                                                               < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                              & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_26 
                                                                 >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                              ? 2U
                                                              : 
                                                             (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_24 
                                                                < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                               & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_25 
                                                                  >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                               ? 1U
                                                               : 
                                                              (((vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_23 
                                                                 < vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T) 
                                                                & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_24 
                                                                   >= vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___upperThreshold_T))
                                                                ? 0U
                                                                : 7U))))))))) 
                                        * vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_4)));
        } else {
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin 
                = (0x1ffffffffULL & vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax 
                = (0x1ffffffffULL & vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax);
        }
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_31 
            = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_17) 
               | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_18));
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_31) 
                      | (~ (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_21) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                            & VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax, vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax))))))) {
            __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax 
                = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax;
        }
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_31) 
                      | (~ (((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_21) 
                             & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                            & VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin, vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin))))))) {
            __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin 
                = vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin;
        }
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_31) 
                      | (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_21) 
                            & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))))))) {
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_8 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_15 
                = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_8)
                                      ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_8)
                                      : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_8));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32 
                = (0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_15);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax 
                                     + vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin));
            if (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale = 1ULL;
                vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset 
                    = (0x1ffffffffULL & vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin);
            } else {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale 
                    = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                                   (0x1ffffffffULL 
                                                    & (0xeULL 
                                                       + vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dataRange_T_15)), 0xfULL));
                vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset 
                    = (0x1ffffffffULL & ((((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                                                                       >> 0x20U))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                                                             >> 1U)))) 
                                         - (0x1ffffffffULL 
                                            * vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)));
            }
        }
        if (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_17) {
            __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax = 0x1fffffff8ULL;
            __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin = 7ULL;
        } else if (vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_18) {
            if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                       & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1;
            }
            if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                       & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                          | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4;
            } else if ((1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                              & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin))))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin 
                    = vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1;
            }
        }
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData 
            = (1U & ((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_17)) 
                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_18)
                         ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
                             ? ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_20) 
                                | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_19))
                             : (((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData)) 
                                 | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_20)) 
                                | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_19)))
                         : (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData))));
        __Vdly__QvuTop__DOT__quantizeInt4__DOT__state 
            = (3U & (0x39U >> (7U & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state) 
                                     << 1U))));
        if ((1U & (~ ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_17) 
                      | (~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT___GEN_18)))))) {
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_11 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_9 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_22 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_18 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_33 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_33)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_33)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_33)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_27 
                = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10 
                                     - vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_27)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_27)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_27)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_11)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_11)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_11)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_9)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_9)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_9)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35 
                = (VL_GTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin) 
                   & VL_LTES_IQQ(33, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7, vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2 
                = (0x3fffffffULL & ((8ULL + (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_22)
                                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_22)
                                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___binWidth_T_22)) 
                                    >> 3U));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2 
                = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                               (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_18)
                                                    ? 
                                                   (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_18)
                                                    : vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___tempIndex_T_18)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2 
                = ((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2)
                    ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2))
                    : 7U);
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2) 
                                                    << 4U))))));
            vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14 
                = (0xffffU & ((IData)(1U) + (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                   << 4U)))
                                               ? 0U
                                               : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                       << 4U))))) 
                                             | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                                (3U 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                    >> 1U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3) 
                                                    << 4U))))));
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                 & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (0U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                 & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (1U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2) 
                          << 0x10U));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                 & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (2U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                 & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (3U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2) 
                          << 0x10U));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                 & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (4U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                 & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (5U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2) 
                          << 0x10U));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                 & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (6U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffff0000U & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2));
            }
            if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36)) 
                  & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3)) 
                 & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_14) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_10) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_6) 
                          << 0x10U));
            } else if (((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                          & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33)) 
                         & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth)) 
                        & (7U == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex)))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
                    = ((0xffffU & __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U]) 
                       | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___histogram_T_2) 
                          << 0x10U));
            }
            if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_36)) 
                 & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_35)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_34)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            } else if ((((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33)) 
                        & (0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth))) {
                __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                    = (0xfffffU & ((IData)(1U) + vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal));
            }
        }
    }
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax 
        = __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMax;
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin 
        = __Vdly__QvuTop__DOT__quantizeInt8__DOT__globalMin;
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax 
        = __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMax;
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin 
        = __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchMin;
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData 
        = __Vdly__QvuTop__DOT__quantizeInt8__DOT__batchHasData;
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__state = __Vdly__QvuTop__DOT__quantizeInt8__DOT__state;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMax;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalMin;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMax;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchMin;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__batchHasData;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__state = __Vdly__QvuTop__DOT__quantizeInt4__DOT__state;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[0U] 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[0U];
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[1U] 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[1U];
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[2U] 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[2U];
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[3U] 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogram[3U];
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__histogramTotal;
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
        = __Vdly__QvuTop__DOT__quantizeInt4__DOT__globalScale;
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12 
        = (((QData)((IData)((1U & (IData)((vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale 
                                         >> 1U))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_11 
        = (((QData)((IData)((1U & (IData)((vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x21U) | vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_14 
        = (((QData)((IData)((7U & (- (IData)((1U & (IData)(
                                                           (vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                                            >> 0x20U)))))))) 
            << 0x22U) | ((QData)((IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                          >> 1U))) 
                         << 2U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15 
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
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12 
        = (((QData)((IData)((1U & (IData)((vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x21U) | vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale);
}

VL_INLINE_OPT void VQvuTop___024root___nba_sequent__TOP__1(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT___centeredValue_T;
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T = 0;
    CData/*1:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3;
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2;
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2 = 0;
    CData/*1:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9;
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4;
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4 = 0;
    CData/*1:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15;
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6;
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6 = 0;
    CData/*1:0*/ QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21;
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0;
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0;
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0;
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0;
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0 = 0;
    // Body
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1 
                             - vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_1 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4 
                             - vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_4 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7 
                             - vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_7 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10 
                             - vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_10 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0 
        = (0x3ffffffffULL & VL_DIV_QQQ(34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (QvuTop__DOT__quantizeInt8__DOT___centeredValue_T 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | QvuTop__DOT__quantizeInt8__DOT___centeredValue_T), vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_11));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, QvuTop__DOT__quantizeInt8__DOT___centeredValue_T, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0 
        = (0x3ffffffffULL & VL_DIV_QQQ(34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2), vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_11));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_2, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0 
        = (0x3ffffffffULL & VL_DIV_QQQ(34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4), vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_11));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_4, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0 
        = (0x3ffffffffULL & VL_DIV_QQQ(34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6), vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_11));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, QvuTop__DOT__quantizeInt8__DOT___centeredValue_T_6, vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12));
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder)
                              : vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              : vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              : vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              : vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)) 
                             >> 1U));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding 
        = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
           | ((QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
               == vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
              & ((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale) 
                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0))));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5);
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1 
        = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
           | ((QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
               == vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
              & ((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale) 
                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0))));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39);
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2 
        = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
           | ((QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
               == vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
              & ((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale) 
                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0))));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73);
    vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3 
        = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0, vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
           | ((QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
               == vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_12) 
              & ((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale) 
                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0))));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107);
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding)))));
    if ((0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal)) {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_14, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_14, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_14, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_14, 5ULL))));
    } else {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)));
    }
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1)))));
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2)))));
    QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4 
        = (0x3ffffffffULL & (((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                               ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0
                               : 0ULL) + (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3) 
                                                                          >> 1U)))))) 
                                           << 2U) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10 
        = (0x3ffffffffULL & (((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                               ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0
                               : 0ULL) + (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9) 
                                                                          >> 1U)))))) 
                                           << 2U) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16 
        = (0x3ffffffffULL & (((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                               ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0
                               : 0ULL) + (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15) 
                                                                          >> 1U)))))) 
                                           << 2U) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2)))));
    vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22 
        = (0x3ffffffffULL & (((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                               ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0
                               : 0ULL) + (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21) 
                                                                          >> 1U)))))) 
                                           << 2U) | (QData)((IData)(QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3)))));
    if ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)) {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3 = 0ULL;
    } else {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0;
    }
    if ((0U == (IData)(vlSelf->io_op))) {
        vlSelf->io_int_o_0 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0)
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                                               & (VL_GTES_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4) 
                                                  & (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4) 
                                                     | (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4 
                                                                >> 7U))))))) 
                                   << 8U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                              ? 0U : 
                                             (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                                   ? 0x80U
                                                   : 
                                                  (0xffU 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4))))))
                               : 0U);
        vlSelf->io_int_o_1 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                                               & (VL_GTES_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10) 
                                                  & (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10) 
                                                     | (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10 
                                                                >> 7U))))))) 
                                   << 8U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                              ? 0U : 
                                             (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                                   ? 0x80U
                                                   : 
                                                  (0xffU 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10))))))
                               : 0U);
        vlSelf->io_int_o_2 = ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                                               & (VL_GTES_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16) 
                                                  & (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16) 
                                                     | (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16 
                                                                >> 7U))))))) 
                                   << 8U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                              ? 0U : 
                                             (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                                   ? 0x80U
                                                   : 
                                                  (0xffU 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16))))))
                               : 0U);
        vlSelf->io_int_o_3 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                                               & (VL_GTES_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22) 
                                                  & (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22) 
                                                     | (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22 
                                                                >> 7U))))))) 
                                   << 8U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                              ? 0U : 
                                             (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                                   ? 0x80U
                                                   : 
                                                  (0xffU 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22))))))
                               : 0U);
    } else {
        vlSelf->io_int_o_0 = (((1U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0)))))))
                               : 0U);
        vlSelf->io_int_o_1 = (((1U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0)))))))
                               : 0U);
        vlSelf->io_int_o_2 = (((1U == (IData)(vlSelf->io_op)) 
                               & (2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0)))))))
                               : 0U);
        vlSelf->io_int_o_3 = (((1U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0)))))))
                               : 0U);
    }
}

void VQvuTop___024root___eval_nba(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VQvuTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        VQvuTop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VQvuTop___024root___eval_triggers__ico(VQvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__ico(VQvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VQvuTop___024root___eval_triggers__act(VQvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__act(VQvuTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__nba(VQvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VQvuTop___024root___eval(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<17> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VQvuTop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VQvuTop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/QVU/vsrc/QvuTop.sv", 1194, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VQvuTop___024root___eval_ico(vlSelf);
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
            VQvuTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VQvuTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wuxy/QVU/vsrc/QvuTop.sv", 1194, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VQvuTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VQvuTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/QVU/vsrc/QvuTop.sv", 1194, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VQvuTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VQvuTop___024root___eval_debug_assertions(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_debug_assertions\n"); );
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
