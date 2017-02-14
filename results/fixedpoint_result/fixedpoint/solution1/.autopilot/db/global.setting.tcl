
set TopModule "WBSlave"
set ClockPeriod "10.000000"
set ClockList {clk}
set multiClockList {}
set PortClockMap {reset clk adr_i clk dat_i clk we_i clk stb_i clk cyc_i clk sel_i clk dat_o clk ack_o clk int_o clk}
set CombLogicFlag 0
set PipelineFlag 0
set DataflowTaskPipelineFlag  1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 1
set FftOrFirFlag 0
set NewDSPMapping 0
set ResetLevelFlag 1
set ResetStyle "control"
set ResetSyncFlag 1
set ResetRegisterFlag 0
set ResetVariableFlag 0
set fsmEncStyle "onehot"
set maxFanout "0"
set RtlPrefix ""
set ExtraCCFlags ""
set ExtraCLdFlags ""
set SynCheckOptions ""
set PresynOptions ""
set PreprocOptions ""
set SchedOptions ""
set BindOptions ""
set RtlGenOptions ""
set RtlWriterOptions ""
set CbcGenFlag ""
set CasGenFlag ""
set CasMonitorFlag ""
set AutoSimOptions {}
set ExportMCPathFlag "0"
set SCTraceFileName "mytrace"
set SCTraceFileFormat "vcd"
set SCTraceOption "all"
set TargetInfo "xc6slx150t:fgg484:-3"
set SourceFiles {sc ../../../PJ/synth/wb_slave.cpp c {}}
set SourceFlags {sc {{}} c {}}
set DirectiveFile {/home/myousaf/Soc_Project/fixedpoint/solution1/solution1.directive}
set TBFiles {verilog ../../../PJ/tb bc ../../../PJ/tb vhdl ../../../PJ/tb sc ../../../PJ/tb cas ../../../PJ/tb c {}}
set SpecLanguage "C"
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set TBInstNames {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set PlatformFiles {{DefaultPlatform {xilinx/spartan6/spartan6 xilinx/spartan6/spartan6_fpv6}}}
set DefaultPlatform "DefaultPlatform"
set TBTVFileNotFound ""
set AppFile "../vivado_hls.app"
set ApsFile "solution1.aps"
set AvePath "../.."
