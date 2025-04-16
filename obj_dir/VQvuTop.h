// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VQVUTOP_H_
#define VERILATED_VQVUTOP_H_  // guard

#include "verilated.h"

class VQvuTop__Syms;
class VQvuTop___024root;
class VerilatedVcdC;
class VQvuTop_LZC__M1_W1f;


// This class is the main interface to the Verilated model
class VQvuTop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VQvuTop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_op,3,0);
    VL_IN8(&io_Isposit,0,0);
    VL_IN8(&io_Outposit,0,0);
    VL_IN8(&io_float_mode,2,0);
    VL_IN8(&io_float_posit,0,0);
    VL_IN8(&io_src_posit_width,5,0);
    VL_IN8(&io_vector_size,2,0);
    VL_IN8(&io_dst_posit_width,5,0);
    VL_IN8(&io_reset_window,0,0);
    VL_IN(&io_posit_i_0,31,0);
    VL_IN(&io_posit_i_1,31,0);
    VL_IN(&io_posit_i_2,31,0);
    VL_IN(&io_posit_i_3,31,0);
    VL_IN(&io_posit_i_4,31,0);
    VL_IN(&io_posit_i_5,31,0);
    VL_IN(&io_posit_i_6,31,0);
    VL_IN(&io_posit_i_7,31,0);
    VL_IN(&io_posit_i_8,31,0);
    VL_IN(&io_posit_i_9,31,0);
    VL_IN(&io_posit_i_10,31,0);
    VL_IN(&io_posit_i_11,31,0);
    VL_IN(&io_posit_i_12,31,0);
    VL_IN(&io_posit_i_13,31,0);
    VL_IN(&io_posit_i_14,31,0);
    VL_IN(&io_posit_i_15,31,0);
    VL_OUT(&io_posit_o_0,31,0);
    VL_OUT(&io_posit_o_1,31,0);
    VL_OUT(&io_posit_o_2,31,0);
    VL_OUT(&io_posit_o_3,31,0);
    VL_OUT(&io_posit_o_4,31,0);
    VL_OUT(&io_posit_o_5,31,0);
    VL_OUT(&io_posit_o_6,31,0);
    VL_OUT(&io_posit_o_7,31,0);
    VL_OUT(&io_posit_o_8,31,0);
    VL_OUT(&io_posit_o_9,31,0);
    VL_OUT(&io_posit_o_10,31,0);
    VL_OUT(&io_posit_o_11,31,0);
    VL_OUT(&io_posit_o_12,31,0);
    VL_OUT(&io_posit_o_13,31,0);
    VL_OUT(&io_posit_o_14,31,0);
    VL_OUT(&io_posit_o_15,31,0);
    VL_OUT(&io_int_o_0,31,0);
    VL_OUT(&io_int_o_1,31,0);
    VL_OUT(&io_int_o_2,31,0);
    VL_OUT(&io_int_o_3,31,0);
    VL_OUT(&io_int_o_4,31,0);
    VL_OUT(&io_int_o_5,31,0);
    VL_OUT(&io_int_o_6,31,0);
    VL_OUT(&io_int_o_7,31,0);
    VL_OUT(&io_int_o_8,31,0);
    VL_OUT(&io_int_o_9,31,0);
    VL_OUT(&io_int_o_10,31,0);
    VL_OUT(&io_int_o_11,31,0);
    VL_OUT(&io_int_o_12,31,0);
    VL_OUT(&io_int_o_13,31,0);
    VL_OUT(&io_int_o_14,31,0);
    VL_OUT(&io_int_o_15,31,0);
    VL_IN64(&io_float_i_0,63,0);
    VL_IN64(&io_float_i_1,63,0);
    VL_IN64(&io_float_i_2,63,0);
    VL_IN64(&io_float_i_3,63,0);
    VL_IN64(&io_float_i_4,63,0);
    VL_IN64(&io_float_i_5,63,0);
    VL_IN64(&io_float_i_6,63,0);
    VL_IN64(&io_float_i_7,63,0);
    VL_IN64(&io_float_i_8,63,0);
    VL_IN64(&io_float_i_9,63,0);
    VL_IN64(&io_float_i_10,63,0);
    VL_IN64(&io_float_i_11,63,0);
    VL_IN64(&io_float_i_12,63,0);
    VL_IN64(&io_float_i_13,63,0);
    VL_IN64(&io_float_i_14,63,0);
    VL_IN64(&io_float_i_15,63,0);
    VL_OUT64(&io_float_o_0,63,0);
    VL_OUT64(&io_float_o_1,63,0);
    VL_OUT64(&io_float_o_2,63,0);
    VL_OUT64(&io_float_o_3,63,0);
    VL_OUT64(&io_float_o_4,63,0);
    VL_OUT64(&io_float_o_5,63,0);
    VL_OUT64(&io_float_o_6,63,0);
    VL_OUT64(&io_float_o_7,63,0);
    VL_OUT64(&io_float_o_8,63,0);
    VL_OUT64(&io_float_o_9,63,0);
    VL_OUT64(&io_float_o_10,63,0);
    VL_OUT64(&io_float_o_11,63,0);
    VL_OUT64(&io_float_o_12,63,0);
    VL_OUT64(&io_float_o_13,63,0);
    VL_OUT64(&io_float_o_14,63,0);
    VL_OUT64(&io_float_o_15,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_1;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_2;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_3;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_4;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_5;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_6;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_7;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_8;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_9;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_10;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_11;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_12;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_13;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_14;
    VQvuTop_LZC__M1_W1f* const __PVT__QvuTop__DOT__decode__DOT__lzcModule_15;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VQvuTop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VQvuTop(VerilatedContext* contextp, const char* name = "TOP");
    explicit VQvuTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VQvuTop();
  private:
    VL_UNCOPYABLE(VQvuTop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
