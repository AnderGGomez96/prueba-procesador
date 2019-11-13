`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:17:57 11/12/2019 
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
    input [63:0] nueva_direccion,
    output [63:0] salida_im
    );
	 reg [63:0] pc_actual;
	 
	 initial
	 begin
		pc_actual<=64'd0;
	 end
	 
	 always @ (posedge clk)
	 begin
		pc_actual<=nueva_direccion;
	 end

	assign salida_im = pc_actual;
endmodule
