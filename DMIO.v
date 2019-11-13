`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:45:35 11/12/2019 
// Design Name: 
// Module Name:    DMIO 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DMIO(
		input clk,
		input [63:0]address,
		input [63:0]data_write,
		input [7:0]SW,
		input enable_write,
		output [7:0]LEDS,
		output [63:0]data_read
    );
	 integer j;
	 wire AND_1;
	 wire AND_2;
	 
	 assign AND_1 = enable_write & !address[12];
	 assign AND_2 = enable_write & address[12];
	 reg [63:0] DM [511:0];
	 reg [7:0] registro;
	 
	 initial
	 begin
		for (j=0; j<256; j=j+1)
			DM[j]<=64'd0;
		registro<=8'd0;
	 end
	 
	 always @(posedge clk)
	 begin
		if (AND_1)
			DM[address[11:0]]<=data_write;
		else
			if (AND_2)
				registro<=data_write[7:0];			
	 end
	 
	 assign LEDS = registro;
	 
	 assign data_read = (address[12]==1'b1) ? {56'b0,SW} : DM[address[11:0]];
	// assign data_read = DM[address[8:0]];
endmodule
