`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:48:40 11/12/2019 
// Design Name: 
// Module Name:    RF 
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
module RF(
    input clk,
    input [4:0] Rn,
    input [4:0] Rm,
    input [4:0] Rd,
    input enable_registros,
    input [63:0] dataWrite,
    output [63:0] busRN,
    output [63:0] busRM
    );
	 integer i;
	 reg [63:0] registros [31:0];
	 
	 initial
	 begin
		for (i=0; i<32; i=i+1)
			registros[i]<=64'd0;
		registros[21]<=64'h1000;
		//registros[0]<=64'd6;
		//registros[1]<=64'h2;
	 end
	 
	 always @ (posedge clk)
	 begin
		if(enable_registros==1'b1)
			registros[Rd]<=dataWrite;
	 end
	 
	 assign busRN = registros[Rn];
	 assign busRM = registros[Rm];
endmodule
