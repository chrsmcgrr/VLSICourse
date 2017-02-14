// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.4
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _WBSlave_HH_
#define _WBSlave_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "WBSlave_getLog.h"
#include "WBSlave_processSlave.h"
#include "WBSlave_processBus.h"
#include "WBSlave_WBSlave_regs.h"
#include "WBSlave_WBSlave_PBuffer.h"

namespace ap_rtl {

struct WBSlave : public sc_module {
    // Port declarations 11
    sc_in_clk clk;
    sc_in< sc_logic > reset;
    sc_in< sc_lv<32> > adr_i;
    sc_in< sc_lv<32> > dat_i;
    sc_in< sc_logic > we_i;
    sc_in< sc_logic > stb_i;
    sc_in< sc_logic > cyc_i;
    sc_in< sc_lv<4> > sel_i;
    sc_out< sc_lv<32> > dat_o;
    sc_out< sc_logic > ack_o;
    sc_out< sc_logic > int_o;


    // Module declarations
    WBSlave(sc_module_name name);
    SC_HAS_PROCESS(WBSlave);

    ~WBSlave();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    WBSlave_WBSlave_regs* WBSlave_regs_U;
    WBSlave_WBSlave_PBuffer* WBSlave_PBuffer_U;
    WBSlave_getLog* grp_WBSlave_getLog_fu_216;
    WBSlave_processSlave* grp_WBSlave_processSlave_fu_280;
    WBSlave_processBus* grp_WBSlave_processBus_fu_336;
    sc_signal< sc_lv<4> > WBSlave_regs_address0;
    sc_signal< sc_logic > WBSlave_regs_ce0;
    sc_signal< sc_logic > WBSlave_regs_we0;
    sc_signal< sc_lv<32> > WBSlave_regs_d0;
    sc_signal< sc_lv<32> > WBSlave_regs_q0;
    sc_signal< sc_lv<4> > WBSlave_regs_address1;
    sc_signal< sc_logic > WBSlave_regs_ce1;
    sc_signal< sc_logic > WBSlave_regs_we1;
    sc_signal< sc_lv<32> > WBSlave_regs_d1;
    sc_signal< sc_lv<32> > WBSlave_regs_q1;
    sc_signal< sc_lv<9> > WBSlave_PBuffer_address0;
    sc_signal< sc_logic > WBSlave_PBuffer_ce0;
    sc_signal< sc_logic > WBSlave_PBuffer_we0;
    sc_signal< sc_lv<32> > WBSlave_PBuffer_d0;
    sc_signal< sc_lv<32> > WBSlave_PBuffer_q0;
    sc_signal< sc_lv<21> > WBSlave_log_in_V;
    sc_signal< sc_lv<21> > WBSlave_log_out_V;
    sc_signal< sc_lv<1> > WBSlave_log_start_V;
    sc_signal< sc_lv<1> > WBSlave_log_done_V;
    sc_signal< sc_lv<1> > WBSlave_ssdm_thread_M_proce_load_fu_393_p1;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_lv<1> > WBSlave_ssdm_thread_M_proce_1_load_fu_397_p1;
    sc_signal< sc_lv<21> > grp_WBSlave_getLog_fu_216_WBSlave_log_in_V;
    sc_signal< sc_lv<21> > grp_WBSlave_getLog_fu_216_WBSlave_log_out_V;
    sc_signal< sc_logic > grp_WBSlave_getLog_fu_216_WBSlave_log_out_V_ap_vld;
    sc_signal< sc_lv<1> > grp_WBSlave_getLog_fu_216_WBSlave_log_start_V_i;
    sc_signal< sc_lv<1> > grp_WBSlave_getLog_fu_216_WBSlave_log_start_V_o;
    sc_signal< sc_logic > grp_WBSlave_getLog_fu_216_WBSlave_log_start_V_o_ap_vld;
    sc_signal< sc_lv<1> > grp_WBSlave_getLog_fu_216_WBSlave_log_done_V;
    sc_signal< sc_logic > grp_WBSlave_getLog_fu_216_WBSlave_log_done_V_ap_vld;
    sc_signal< sc_lv<4> > grp_WBSlave_processSlave_fu_280_WBSlave_regs_address0;
    sc_signal< sc_logic > grp_WBSlave_processSlave_fu_280_WBSlave_regs_ce0;
    sc_signal< sc_lv<32> > grp_WBSlave_processSlave_fu_280_WBSlave_regs_q0;
    sc_signal< sc_lv<4> > grp_WBSlave_processSlave_fu_280_WBSlave_regs_address1;
    sc_signal< sc_logic > grp_WBSlave_processSlave_fu_280_WBSlave_regs_ce1;
    sc_signal< sc_logic > grp_WBSlave_processSlave_fu_280_WBSlave_regs_we1;
    sc_signal< sc_lv<32> > grp_WBSlave_processSlave_fu_280_WBSlave_regs_d1;
    sc_signal< sc_lv<32> > grp_WBSlave_processSlave_fu_280_WBSlave_regs_q1;
    sc_signal< sc_lv<9> > grp_WBSlave_processSlave_fu_280_WBSlave_PBuffer_address0;
    sc_signal< sc_logic > grp_WBSlave_processSlave_fu_280_WBSlave_PBuffer_ce0;
    sc_signal< sc_logic > grp_WBSlave_processSlave_fu_280_WBSlave_PBuffer_we0;
    sc_signal< sc_lv<32> > grp_WBSlave_processSlave_fu_280_WBSlave_PBuffer_d0;
    sc_signal< sc_lv<32> > grp_WBSlave_processSlave_fu_280_WBSlave_PBuffer_q0;
    sc_signal< sc_lv<3> > grp_WBSlave_processSlave_fu_280_WBSlave_CTRL_ADDR_V;
    sc_signal< sc_lv<3> > grp_WBSlave_processSlave_fu_280_WBSlave_STAT_ADDR_V;
    sc_signal< sc_lv<21> > grp_WBSlave_processSlave_fu_280_WBSlave_log_in_V;
    sc_signal< sc_logic > grp_WBSlave_processSlave_fu_280_WBSlave_log_in_V_ap_vld;
    sc_signal< sc_lv<21> > grp_WBSlave_processSlave_fu_280_WBSlave_log_out_V;
    sc_signal< sc_lv<1> > grp_WBSlave_processSlave_fu_280_WBSlave_log_start_V;
    sc_signal< sc_logic > grp_WBSlave_processSlave_fu_280_WBSlave_log_start_V_ap_vld;
    sc_signal< sc_lv<1> > grp_WBSlave_processSlave_fu_280_WBSlave_log_done_V;
    sc_signal< sc_lv<3> > grp_WBSlave_processSlave_fu_280_WBSlave_REG1_ADDR_V;
    sc_signal< sc_lv<32> > grp_WBSlave_processBus_fu_336_adr_i;
    sc_signal< sc_lv<32> > grp_WBSlave_processBus_fu_336_dat_i;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_we_i;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_stb_i;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_cyc_i;
    sc_signal< sc_lv<4> > grp_WBSlave_processBus_fu_336_sel_i;
    sc_signal< sc_lv<32> > grp_WBSlave_processBus_fu_336_dat_o;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_dat_o_ap_vld;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_ack_o;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_ack_o_ap_vld;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_int_o;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_int_o_ap_vld;
    sc_signal< sc_lv<4> > grp_WBSlave_processBus_fu_336_WBSlave_regs_address0;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_WBSlave_regs_ce0;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_WBSlave_regs_we0;
    sc_signal< sc_lv<32> > grp_WBSlave_processBus_fu_336_WBSlave_regs_d0;
    sc_signal< sc_lv<32> > grp_WBSlave_processBus_fu_336_WBSlave_regs_q0;
    sc_signal< sc_lv<4> > grp_WBSlave_processBus_fu_336_WBSlave_regs_address1;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_WBSlave_regs_ce1;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_WBSlave_regs_we1;
    sc_signal< sc_lv<32> > grp_WBSlave_processBus_fu_336_WBSlave_regs_d1;
    sc_signal< sc_lv<32> > grp_WBSlave_processBus_fu_336_WBSlave_regs_q1;
    sc_signal< sc_lv<9> > grp_WBSlave_processBus_fu_336_WBSlave_PBuffer_address0;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_WBSlave_PBuffer_ce0;
    sc_signal< sc_logic > grp_WBSlave_processBus_fu_336_WBSlave_PBuffer_we0;
    sc_signal< sc_lv<32> > grp_WBSlave_processBus_fu_336_WBSlave_PBuffer_d0;
    sc_signal< sc_lv<32> > grp_WBSlave_processBus_fu_336_WBSlave_PBuffer_q0;
    sc_signal< sc_lv<3> > grp_WBSlave_processBus_fu_336_WBSlave_STAT_ADDR_V;
    sc_signal< sc_lv<3> > grp_WBSlave_processBus_fu_336_WBSlave_DELAY_ADDR_V;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_150;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<5> ap_const_lv5_0;
    // Thread declarations
    void thread_WBSlave_log_done_V();
    void thread_WBSlave_log_in_V();
    void thread_WBSlave_log_out_V();
    void thread_WBSlave_log_start_V();
    void thread_ack_o();
    void thread_dat_o();
    void thread_int_o();
    void thread_WBSlave_PBuffer_address0();
    void thread_WBSlave_PBuffer_ce0();
    void thread_WBSlave_PBuffer_d0();
    void thread_WBSlave_PBuffer_we0();
    void thread_WBSlave_regs_address0();
    void thread_WBSlave_regs_address1();
    void thread_WBSlave_regs_ce0();
    void thread_WBSlave_regs_ce1();
    void thread_WBSlave_regs_d0();
    void thread_WBSlave_regs_d1();
    void thread_WBSlave_regs_we0();
    void thread_WBSlave_regs_we1();
    void thread_WBSlave_ssdm_thread_M_proce_1_load_fu_397_p1();
    void thread_WBSlave_ssdm_thread_M_proce_load_fu_393_p1();
    void thread_ap_CS_fsm();
    void thread_ap_sig_bdd_150();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_grp_WBSlave_getLog_fu_216_WBSlave_log_in_V();
    void thread_grp_WBSlave_getLog_fu_216_WBSlave_log_start_V_i();
    void thread_grp_WBSlave_processBus_fu_336_WBSlave_DELAY_ADDR_V();
    void thread_grp_WBSlave_processBus_fu_336_WBSlave_PBuffer_q0();
    void thread_grp_WBSlave_processBus_fu_336_WBSlave_STAT_ADDR_V();
    void thread_grp_WBSlave_processBus_fu_336_WBSlave_regs_q0();
    void thread_grp_WBSlave_processBus_fu_336_WBSlave_regs_q1();
    void thread_grp_WBSlave_processBus_fu_336_adr_i();
    void thread_grp_WBSlave_processBus_fu_336_cyc_i();
    void thread_grp_WBSlave_processBus_fu_336_dat_i();
    void thread_grp_WBSlave_processBus_fu_336_sel_i();
    void thread_grp_WBSlave_processBus_fu_336_stb_i();
    void thread_grp_WBSlave_processBus_fu_336_we_i();
    void thread_grp_WBSlave_processSlave_fu_280_WBSlave_CTRL_ADDR_V();
    void thread_grp_WBSlave_processSlave_fu_280_WBSlave_PBuffer_q0();
    void thread_grp_WBSlave_processSlave_fu_280_WBSlave_REG1_ADDR_V();
    void thread_grp_WBSlave_processSlave_fu_280_WBSlave_STAT_ADDR_V();
    void thread_grp_WBSlave_processSlave_fu_280_WBSlave_log_done_V();
    void thread_grp_WBSlave_processSlave_fu_280_WBSlave_log_out_V();
    void thread_grp_WBSlave_processSlave_fu_280_WBSlave_regs_q0();
    void thread_grp_WBSlave_processSlave_fu_280_WBSlave_regs_q1();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
