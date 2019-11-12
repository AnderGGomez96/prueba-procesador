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
    input wire signed [63:0] A,
    input wire signed [63:0] B,
    output reg zero,
    output reg [63:0] resultOP
    );
	 
	 always @ (*)
	 begin
		case (aluOP)
			3'b000: 
			begin 
				resultOP<=A+B;//SUMA		
				zero<=1'b0;
			end
			3'b001: 
			begin
				resultOP<=A-B;//RESTA
				zero<=1'b0;
			end
			3'b010: 
			begin 
				resultOP<=A&B;// AND
				zero<=1'b0;
			end
			3'b011:
			begin
				resultOP<=A|B;// ORR
				zero<=1'b0;
			end
			3'b100://pass B
			begin
				zero<= (B == 64'h0) ? 1'b1:1'b0;
			end
			3'b101: 
			begin 
				resultOP<=A <<< B[15:10];//LSL
				zero<=1'b0;
			end
			3'b110: 
			begin 
				resultOP<=A >>> B[15:10];//LSR
				zero<=1'b0;
			end
		endcase
	 end
endmodule
