`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:47:35 11/12/2019 
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
    input [63:0] A,
    input [63:0] B,
    input [2:0] aluOP,
    output zero,
    output reg [63:0] resultadoALU
    );
	 
	 always @ (*) // aluOP
	 begin
		case (aluOP)
		3'b000: resultadoALU<= A + B;
		3'b001: resultadoALU<= A - B;
		3'b010: resultadoALU<= A & B;
		3'b011: resultadoALU<= A | B;
		3'b100: 
			begin 
				if (B == 64'd0) 
					resultadoALU<=64'd0;
				else
					resultadoALU<=64'd1;
			end
		3'b101: resultadoALU<= A << B;
		3'b110: resultadoALU<= A >> B;
		//default: resultadoALU<= A + B;
		endcase;
	 end

	 assign zero= (resultadoALU == 64'd0) ? 1'b1 : 1'b0;
	 
endmodule
