-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2014.4
-- Copyright (C) 2014 Xilinx Inc. All rights reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity WBSlave_getLog_logLUT_V_rom is 
    generic(
             dwidth     : integer := 21; 
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


architecture rtl of WBSlave_getLog_logLUT_V_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "101001110100011011111", 1 => "101011001101001010001", 
    2 => "101100100101111000011", 3 => "101101011001110001111", 
    4 => "101101111110100110101", 5 => "101110110010100000001", 
    6 => "101111010111010100111", 7 => "110000001011001110011", 
    8 => "110000110000000011001", 9 => "110001100011111100101", 
    10 => "110010001000110001011", 11 => "110010111100101010111", 
    12 => "110011100001011111101", 13 => "110100000001000101111", 
    14 => "110100010101011001010", 15 => "110100101100001010010", 
    16 => "110100111010001101111", 17 => "110101001100010101001", 
    18 => "110101101110000111100", 19 => "110101110001001001110", 
    20 => "110110010010111100001", 21 => "110110100101000011011", 
    22 => "110111000110110101110", 23 => "110111001001111000000", 
    24 => "110111101011101010011", 25 => "110111111101110001101", 
    26 => "111000011111100100000", 27 => "111000110100000001100", 
    28 => "111001000100011000110", 29 => "111001100011111111000", 
    30 => "111001111000010010010", 31 => "111010000000100011000", 
    32 => "111010011101000111000", 33 => "111010111100101101010", 
    34 => "111011010001000000100", 35 => "111011011001010001010" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

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

entity WBSlave_getLog_logLUT_V is
    generic (
        DataWidth : INTEGER := 21;
        AddressRange : INTEGER := 36;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of WBSlave_getLog_logLUT_V is
    component WBSlave_getLog_logLUT_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    WBSlave_getLog_logLUT_V_rom_U :  component WBSlave_getLog_logLUT_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


