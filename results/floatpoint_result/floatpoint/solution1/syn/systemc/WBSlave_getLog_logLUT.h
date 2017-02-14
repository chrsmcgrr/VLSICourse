// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.4
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __WBSlave_getLog_logLUT_H__
#define __WBSlave_getLog_logLUT_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct WBSlave_getLog_logLUT_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 36;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(WBSlave_getLog_logLUT_ram) {
        ram[0] = "0b11000001001100010111001000011000";
        ram[1] = "0b11000001001001100101101011110110";
        ram[2] = "0b11000001000110110100001111010101";
        ram[3] = "0b11000001000101001100011100001100";
        ram[4] = "0b11000001000100000010110010110011";
        ram[5] = "0b11000001000010011010111111101011";
        ram[6] = "0b11000001000001010001010110010010";
        ram[7] = "0b11000000111111010011000110010010";
        ram[8] = "0b11000000111100111111110011100110";
        ram[9] = "0b11000000111001110000001101010011";
        ram[10] = "0b11000000110111011100111010100011";
        ram[11] = "0b11000000110100001101010100010001";
        ram[12] = "0b11000000110001111010000001010110";
        ram[13] = "0b11000000101111111011101000010100";
        ram[14] = "0b11000000101110101010011011000111";
        ram[15] = "0b11000000101101001111010110110010";
        ram[16] = "0b11000000101100010111001000011000";
        ram[17] = "0b11000000101011001110101011101110";
        ram[18] = "0b11000000101001000111100010000100";
        ram[19] = "0b11000000101000111011011000111101";
        ram[20] = "0b11000000100110110100001111010101";
        ram[21] = "0b11000000100101101011110010101011";
        ram[22] = "0b11000000100011100100101001000011";
        ram[23] = "0b11000000100011011000011111111010";
        ram[24] = "0b11000000100001010001010110010010";
        ram[25] = "0b11000000100000001000111001101000";
        ram[26] = "0b11000000011100000011100000000000";
        ram[27] = "0b11000000011001011111110100001010";
        ram[28] = "0b11000000010111011100111010011110";
        ram[29] = "0b11000000010011100000001000010000";
        ram[30] = "0b11000000010000111101101101111010";
        ram[31] = "0b11000000001111111011101000010100";
        ram[32] = "0b11000000001100010111001000011000";
        ram[33] = "0b11000000001000011010010110001010";
        ram[34] = "0b11000000000101110111111011110100";
        ram[35] = "0b11000000000100110101110110001110";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(WBSlave_getLog_logLUT) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 36;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


WBSlave_getLog_logLUT_ram* meminst;


SC_CTOR(WBSlave_getLog_logLUT) {
meminst = new WBSlave_getLog_logLUT_ram("WBSlave_getLog_logLUT_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~WBSlave_getLog_logLUT() {
    delete meminst;
}


};//endmodule
#endif