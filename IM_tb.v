`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:31:25 11/08/2019
// Design Name:   IM
// Module Name:   C:/Users/Ghost/Documents/Anderson/Procesador/IM_tb.v
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

module IM_tb;

	// Inputs
	reg [7:0] busPc;

	// Outputs
	wire [7:0] instruction;

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
		busPc= 8'd1;
        
		// Add stimulus here

	end
      
endmodule

