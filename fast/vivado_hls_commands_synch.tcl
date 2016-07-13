############################################################
# 
# Plugin Literal implentation in Vivado HLS
# 
# e-mail: M.Sawerwain@issi.uz.zgora.pl
# 
# date: 10 July 2016
# 
############################################################
open_project pluginFixPt
set_top pluginFixPt
add_files pluginFixPt.cpp
add_files -tb pluginFixPt_test.cpp
open_solution "solution1"
set_part {xc7vx690tffg1761-2}
create_clock -period 6 -name default
#source "./pluginFixPt/solution1/directives.tcl"
#csim_design
#csim_design -ldflags {{-Wl,--stack=268435456}} -clean
csynth_design
#cosim_design
#export_design -format ip_catalog
close_project
quit
