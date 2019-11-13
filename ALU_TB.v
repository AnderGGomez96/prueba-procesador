`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:00:17 11/12/2019
// Design Name:   ALU
// Module Name:   C:/Users/Ghost/Documents/Anderson/PROCEDADOR_DEBUG/ALU_TB.v
// Project Name:  PROCEDADOR_DEBUG
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_TB;

	// Inputs
	reg [63:0] datoRN;
	reg [63:0] datoRM;
	reg [2:0] aluOP;

	// Outputs
	wire zero;
	wire [63:0] resultadoALU;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.datoRN(datoRN), 
		.datoRM(datoRM), 
		.aluOP(aluOP), 
		.zero(zero), 
		.resultadoALU(resultadoALU)
	);

	initial begin
		// Initialize Inputs
		datoRN = 64'd10;
		datoRM = 64'd3;
		aluOP = 3'b000;

		// Wait 100 ns for global reset to finish
		#100;
		datoRN = 64'd10;
		datoRM = 64'd3;
		aluOP = 3'b001;  

		#100;
		datoRN = 64'd10;
		datoRM = 64'd3;
		aluOP = 3'b010; 

		#100;
		datoRN = 64'd10;
		datoRM = 64'd3;
		aluOP = 3'b011; 

		#100;
		datoRN = 64'd10;
		datoRM = 64'd3;
		aluOP = 3'b100; 

		#100;
		datoRN = 64'd10;
		datoRM = 64'd3;
		aluOP = 3'b101; 

		#100;
		datoRN = 64'd10;
		datoRM = 64'd3;
		aluOP = 3'b110; 

		#100;
		datoRN = 64'd10;
		datoRM = 64'd3;
		aluOP = 3'b111;       
		// Add stimulus here

	end
      
endmodule

