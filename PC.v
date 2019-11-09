`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:14 11/08/2019 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input [63:0] newDireccion,
    output [63:0] bus_DireccionIM
    );
	 reg [63:0] DireccionIM;
	 reg [63:0] registro;
	 
	 
	 initial
	 begin
		registro=64'h0;
	 end
	 
	 always @(posedge clk)
	 begin
		DireccionIM<=registro;
		registro<=newDireccion;
	 end
	 
	 assign bus_DireccionIM = newDireccion;
endmodule
