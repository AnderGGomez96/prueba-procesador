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
    input [63:0] A,
    input [63:0] B,
    output zero,
    output reg [63:0] resultOP
    );
	 
	 always @ (*)
	 begin
		case (aluOP)
			3'b000: resultOP<=A+B;//SUMA		
			3'b001: resultOP<=A-B;//RESTA
			3'b010: resultOP<=A&B;// AND
			3'b011:resultOP<=A|B;// ORR
			3'b100://pass B
			begin
				if (B==64'h0000000000000000)
					resultOP<=64'h0000000000000000;
				else
					resultOP<=64'hFFFFFFFFFFFFFFFF;
			end
		endcase
	 end
	 assign zero = (resultOP == 64'h0000000000000000)? 1'b1:1'b0;
endmodule
