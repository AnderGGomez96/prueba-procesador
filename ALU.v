`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:20 11/06/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [2:0] aluOP,
    input [64:0] A,
    input [64:0] B,
    output Zero,
    output [64:0] resultOP
    );
	 
	 always @ (aluOP, A, B)
	 begin
		case (aluOP)
			000:resultOP<=A+B;
			001:resultOP<=A-B;
			010:resultOP<=A&B;
			011:resultOP<=A||B;
			100:resultOP<=B;
		endcase
	 end
endmodule
