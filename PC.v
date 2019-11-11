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
    input  [63:0] newDirection,
    output reg [63:0] bus_DireccionIM
    );
	 
	 initial
	 begin
		bus_DireccionIM<=64'd0;
	 end
	 
	 always @ (posedge clk)
	 begin
		bus_DireccionIM<=newDirection;
	 end
endmodule
