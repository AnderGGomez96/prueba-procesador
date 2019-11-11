`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:59:59 11/09/2019
// Design Name:   IM
// Module Name:   C:/Users/Ghost/Desktop/Procesador/IM_TB.v
// Project Name:  Procesador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IM_TB;

	// Inputs
	reg [63:0] busPc;

	// Outputs
	wire [31:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.busPc(busPc), 
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		busPc = 0;

		// Wait 100 ns for global reset to finish
		#20;
        
		// Add stimulus here

	end
      
endmodule

