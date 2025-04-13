// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VQvuTop.h"
#include "VQvuTop__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VQvuTop::VQvuTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VQvuTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_op{vlSymsp->TOP.io_op}
    , io_Isposit{vlSymsp->TOP.io_Isposit}
    , io_Outposit{vlSymsp->TOP.io_Outposit}
    , io_float_mode{vlSymsp->TOP.io_float_mode}
    , io_float_posit{vlSymsp->TOP.io_float_posit}
    , io_src_posit_width{vlSymsp->TOP.io_src_posit_width}
    , io_vector_size{vlSymsp->TOP.io_vector_size}
    , io_dst_posit_width{vlSymsp->TOP.io_dst_posit_width}
    , io_posit_i1_0{vlSymsp->TOP.io_posit_i1_0}
    , io_posit_i1_1{vlSymsp->TOP.io_posit_i1_1}
    , io_posit_i1_2{vlSymsp->TOP.io_posit_i1_2}
    , io_posit_i1_3{vlSymsp->TOP.io_posit_i1_3}
    , io_posit_i2_0{vlSymsp->TOP.io_posit_i2_0}
    , io_posit_i2_1{vlSymsp->TOP.io_posit_i2_1}
    , io_posit_i2_2{vlSymsp->TOP.io_posit_i2_2}
    , io_posit_i2_3{vlSymsp->TOP.io_posit_i2_3}
    , io_posit_o_0{vlSymsp->TOP.io_posit_o_0}
    , io_posit_o_1{vlSymsp->TOP.io_posit_o_1}
    , io_posit_o_2{vlSymsp->TOP.io_posit_o_2}
    , io_posit_o_3{vlSymsp->TOP.io_posit_o_3}
    , io_posit_dot_o{vlSymsp->TOP.io_posit_dot_o}
    , io_int_o_0{vlSymsp->TOP.io_int_o_0}
    , io_int_o_1{vlSymsp->TOP.io_int_o_1}
    , io_int_o_2{vlSymsp->TOP.io_int_o_2}
    , io_int_o_3{vlSymsp->TOP.io_int_o_3}
    , io_float_i_0{vlSymsp->TOP.io_float_i_0}
    , io_float_i_1{vlSymsp->TOP.io_float_i_1}
    , io_float_i_2{vlSymsp->TOP.io_float_i_2}
    , io_float_i_3{vlSymsp->TOP.io_float_i_3}
    , io_float_i2_0{vlSymsp->TOP.io_float_i2_0}
    , io_float_i2_1{vlSymsp->TOP.io_float_i2_1}
    , io_float_i2_2{vlSymsp->TOP.io_float_i2_2}
    , io_float_i2_3{vlSymsp->TOP.io_float_i2_3}
    , io_float_o_0{vlSymsp->TOP.io_float_o_0}
    , io_float_o_1{vlSymsp->TOP.io_float_o_1}
    , io_float_o_2{vlSymsp->TOP.io_float_o_2}
    , io_float_o_3{vlSymsp->TOP.io_float_o_3}
    , io_float_dot_o{vlSymsp->TOP.io_float_dot_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VQvuTop::VQvuTop(const char* _vcname__)
    : VQvuTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VQvuTop::~VQvuTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VQvuTop___024root___eval_debug_assertions(VQvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VQvuTop___024root___eval_static(VQvuTop___024root* vlSelf);
void VQvuTop___024root___eval_initial(VQvuTop___024root* vlSelf);
void VQvuTop___024root___eval_settle(VQvuTop___024root* vlSelf);
void VQvuTop___024root___eval(VQvuTop___024root* vlSelf);

void VQvuTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQvuTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VQvuTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VQvuTop___024root___eval_static(&(vlSymsp->TOP));
        VQvuTop___024root___eval_initial(&(vlSymsp->TOP));
        VQvuTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VQvuTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VQvuTop::eventsPending() { return false; }

uint64_t VQvuTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VQvuTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VQvuTop___024root___eval_final(VQvuTop___024root* vlSelf);

VL_ATTR_COLD void VQvuTop::final() {
    VQvuTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VQvuTop::hierName() const { return vlSymsp->name(); }
const char* VQvuTop::modelName() const { return "VQvuTop"; }
unsigned VQvuTop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VQvuTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VQvuTop___024root__trace_init_top(VQvuTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQvuTop___024root*>(voidSelf);
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VQvuTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VQvuTop___024root__trace_register(VQvuTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQvuTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VQvuTop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VQvuTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
