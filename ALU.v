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
    output zero,
    output [64:0] resultOP
    );
	 
	 always @ (aluOP, A, B)
	 begin
		case (aluOP)
			000: //SUMA
			begin
				resultOP<=A+B;
				zero<=0;
			end
			001: //RESTA
			begin 
				resultOP<=A-B;
				zero<=0;
			end
			010: // AND
			begin 
				resultOP<=A&B;
				zero<=0;
			end
			011:// ORR
			begin
				resultOP<=A||B;
				zero<=0;
			end
			100: //pass B
			begin
				resultOP<=B;
				if (B == 64'b0)
					zero<=1;
				else
					zero<=0;
			end
		endcase
	 end
endmodule
