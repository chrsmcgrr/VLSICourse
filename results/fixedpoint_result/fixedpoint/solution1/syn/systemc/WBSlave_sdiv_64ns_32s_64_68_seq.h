// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.4
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __WBSlave_sdiv_64ns_32s_64_68_seq__HH__
#define __WBSlave_sdiv_64ns_32s_64_68_seq__HH__
#include "ACMP_sdiv_seq.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(WBSlave_sdiv_64ns_32s_64_68_seq) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_logic >   start;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_sdiv_seq<ID, 68, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_sdiv_seq_U;

    SC_CTOR(WBSlave_sdiv_64ns_32s_64_68_seq):  ACMP_sdiv_seq_U ("ACMP_sdiv_seq_U") {
        ACMP_sdiv_seq_U.clk(clk);
        ACMP_sdiv_seq_U.reset(reset);
        ACMP_sdiv_seq_U.ce(ce);
        ACMP_sdiv_seq_U.din0(din0);
        ACMP_sdiv_seq_U.din1(din1);
        ACMP_sdiv_seq_U.dout(dout);
        ACMP_sdiv_seq_U.start(start);

    }

};

#endif //
