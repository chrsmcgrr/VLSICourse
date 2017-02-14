// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.4
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __WBSlave_getLog_inputLUT_H__
#define __WBSlave_getLog_inputLUT_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct WBSlave_getLog_inputLUT_ram : public sc_core::sc_module {

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


   SC_CTOR(WBSlave_getLog_inputLUT_ram) {
        ram[0] = "0b00110111100000000000000000000000";
        ram[1] = "0b00111000000000000000000000000000";
        ram[2] = "0b00111000100000000000000000000000";
        ram[3] = "0b00111000110000000000000000000000";
        ram[4] = "0b00111001000000000000000000000000";
        ram[5] = "0b00111001010000000000000000000000";
        ram[6] = "0b00111001100000000000000000000000";
        ram[7] = "0b00111001110000000000000000000000";
        ram[8] = "0b00111001111111111111111111010101";
        ram[9] = "0b00111010001111111111111111101010";
        ram[10] = "0b00111010011111111111111111010101";
        ram[11] = "0b00111010101111111111111111100000";
        ram[12] = "0b00111011000000000000000000010101";
        ram[13] = "0b00111011001000111101011100001010";
        ram[14] = "0b00111011010000000000000000001011";
        ram[15] = "0b00111011011001010110000001000010";
        ram[16] = "0b00111011100000000000000000000000";
        ram[17] = "0b00111011100100110111010010111100";
        ram[18] = "0b00111011110000000000000000001011";
        ram[19] = "0b00111011110001001001101110100110";
        ram[20] = "0b00111100000000000000000000000000";
        ram[21] = "0b00111100000100110111010010111100";
        ram[22] = "0b00111100010000000000000000000000";
        ram[23] = "0b00111100010001001001101110100110";
        ram[24] = "0b00111100100000000000000000000000";
        ram[25] = "0b00111100100100110111010010111100";
        ram[26] = "0b00111100110000000000000000000000";
        ram[27] = "0b00111100111000010100011110101110";
        ram[28] = "0b00111101000000000000000000000000";
        ram[29] = "0b00111101001000111101011100001010";
        ram[30] = "0b00111101010000000000000000000000";
        ram[31] = "0b00111101010011001100110011001101";
        ram[32] = "0b00111101100000000000000000000000";
        ram[33] = "0b00111101101000111101011100001010";
        ram[34] = "0b00111101110000000000000000000000";
        ram[35] = "0b00111101110011001100110011001101";


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


SC_MODULE(WBSlave_getLog_inputLUT) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 36;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


WBSlave_getLog_inputLUT_ram* meminst;


SC_CTOR(WBSlave_getLog_inputLUT) {
meminst = new WBSlave_getLog_inputLUT_ram("WBSlave_getLog_inputLUT_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~WBSlave_getLog_inputLUT() {
    delete meminst;
}


};//endmodule
#endif