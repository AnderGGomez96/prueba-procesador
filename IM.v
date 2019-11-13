`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:32:07 11/12/2019 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [63:0] bus_pc,
    output [31:0] bus_instruccion
    );
	 integer i;
	 reg [63:0] memoria [511:0];
	 
	 initial
	 begin
		for (i=0; i<512; i=i+1)
			memoria[i]<=64'd0;
			
			memoria[0]<=32'hF84002A0; // SW -> X0
			memoria[1]<=32'hF84002A1;// SW -> X1
			memoria[2]<=32'h8B010003;//ADD x3 x0 x1
			memoria[3]<=32'hB40000A3;//CBZ x3 fin  (inicio)
			memoria[4]<=32'h910004A5;//ADDI x5 x5 #1
			memoria[5]<=32'hCB010063;//SUB x3 x3 x1
			memoria[6]<=32'hF80003E5;//STUR x5 x31 #0
			memoria[7]<=32'h17FFFFFC;//<<b.cond (inicio)
			memoria[8]<=32'hF84003F3;//fin LDUR x19 x31 #0
			memoria[9]<=32'hF80002B3;//LED -> x19
	 end
	 
	 assign bus_instruccion = memoria[bus_pc[10:2]];

endmodule
