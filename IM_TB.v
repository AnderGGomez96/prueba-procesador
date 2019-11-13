`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:36:20 11/12/2019
// Design Name:   IM
// Module Name:   C:/Users/Ghost/Documents/Anderson/PROCEDADOR_DEBUG/IM_TB.v
// Project Name:  PROCEDADOR_DEBUG
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
	reg [63:0] bus_pc;

	// Outputs
	wire [31:0] bus_instruccion;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.bus_pc(bus_pc), 
		.bus_instruccion(bus_instruccion)
	);

	initial begin
		// Initialize Inputs
		bus_pc = 64'd4;

		// Wait 100 ns for global reset to finish
		#100;
      bus_pc = 64'd8;
		
		#100;
      bus_pc = 64'd12;
		
		#100;
      bus_pc = 64'd16;
		
		#100;
      bus_pc = 64'd0;
		// Add stimulus here

	end
      
endmodule

