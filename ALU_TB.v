`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:42:49 11/08/2019
// Design Name:   ALU
// Module Name:   C:/Users/Ghost/Desktop/Procesador/ALU_TB.v
// Project Name:  Procesador
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
	reg [2:0] aluOP;
	reg [63:0] A;
	reg [63:0] B;
	
	reg [7:0] base=8'hAC;
	// Outputs
	wire zero;
	wire [63:0] bus_resultOP;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.aluOP(aluOP), 
		.A(A), 
		.B(B), 
		.zero(zero), 
		.bus_resultOP(bus_resultOP)
	);

	initial begin
		// Initialize Inputs
		aluOP = 3'b010;
		//base=AC:10101100
		A = base[7];
		B = !base[6];

		// Wait 100 ns for global reset to finish
	

		
        
		// Add stimulus here

	end
      
endmodule

