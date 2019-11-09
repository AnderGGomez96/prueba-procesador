`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:06 11/08/2019 
// Design Name: 
// Module Name:    registroLEDS 
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
module registroLEDS(
	 input clk,
    input [7:0] dataWrite,
    input write,
	 input bitAddress,
    output [7:0] bus_leds
    );
	 reg [7:0] registro;
	 initial
	 begin
		registro=8'h0;
	 end
	 
	 always @ (posedge clk)
	 begin
		if ((bitAddress & write)==1'b1)
			registro<=dataWrite;
	 end
	 
	 assign bus_leds=registro;


endmodule
