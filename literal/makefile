#
# trivial makefile for Vivado HLS application
#

CMD = vivado_hls

all: synch_only
	echo "end of makefile"

synch_only:	
	vivado_hls -f vivado_hls_commands_synch.tcl	
	
synch_and_sim:
	vivado_hls -f vivado_hls_commands.tcl

clean:
	rm -rf ./pluginFixPt/*
	rm vivado_hls.log
	rmdir pluginFixPt
