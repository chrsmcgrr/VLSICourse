-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2014.4
-- Copyright (C) 2014 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity WBSlave_getLog_offsetLUT_rom is 
    generic(
             dwidth     : integer := 32; 
             awidth     : integer := 6; 
             mem_size    : integer := 36
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of WBSlave_getLog_offsetLUT_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "11000001001111001000100100111001", 
    1 => "11000001001100010111001000011000", 
    2 => "11000001001001100101101011110110", 
    3 => "11000001000111111101111000101110", 
    4 => "11000001000110110100001111010101", 
    5 => "11000001000101001100011100001100", 
    6 => "11000001000100000010110010110101", 
    7 => "11000001000010011010111111101011", 
    8 => "11000001000001010001010110010101", 
    9 => "11000000111111010011000110010110", 
    10 => "11000000111100111111110011100010", 
    11 => "11000000111001110000001101010010", 
    12 => "11000000110111011100111010011011", 
    13 => "11000000110101110011110100000011", 
    14 => "11000000110100001101010100001010", 
    15 => "11000000110011010001101101010111", 
    16 => "11000000110001111010000001011011", 
    17 => "11000000110000110001100100110001", 
    18 => "11000000101110101010011011001000", 
    19 => "11000000101110011110010010000000", 
    20 => "11000000101100010111001000011000", 
    21 => "11000000101011001110101011101110", 
    22 => "11000000101001000111100010000110", 
    23 => "11000000101000100001001101101101", 
    24 => "11000000100110110100001111010101", 
    25 => "11000000100101010111011001110001", 
    26 => "11000000100011100100101001000011", 
    27 => "11000000100010100110000001010100", 
    28 => "11000000100001010001010110010010", 
    29 => "11000000011110100101111010010110", 
    30 => "11000000011100000011100000000000", 
    31 => "11000000011011000001011010011010", 
    32 => "11000000011000010000110100010010", 
    33 => "11000000010101000110110010011000", 
    34 => "11000000001111010010100011100110", 
    35 => "11000000001110011001010111111110" );


attribute EQUIVALENT_REGISTER_REMOVAL : string;
begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity WBSlave_getLog_offsetLUT is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 36;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of WBSlave_getLog_offsetLUT is
    component WBSlave_getLog_offsetLUT_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    WBSlave_getLog_offsetLUT_rom_U :  component WBSlave_getLog_offsetLUT_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


