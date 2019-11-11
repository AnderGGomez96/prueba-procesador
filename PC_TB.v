`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:44:04 11/09/2019
// Design Name:   PC
// Module Name:   C:/Users/Ghost/Desktop/Procesador/PC_TB.v
// Project Name:  Procesador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_TB;

	// Inputs
	reg clk;
	reg [63:0] newDirection;

	// Outputs
	wire [63:0] bus_DireccionIM;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.clk(clk), 
		.newDirection(newDirection), 
		.bus_DireccionIM(bus_DireccionIM)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		newDirection = 64'h0;

		// Wait 100 ns for global reset to finish
		#100;
		clk = 1;
		newDirection = 64'h4;
		
		#100;
		clk = 0;
		newDirection = 64'h4;
		
		#100;
		clk = 1;
		newDirection = 64'h8;
		
		#100;
		clk = 0;
		newDirection = 64'h8;
		
		#100;
		clk = 1;
		newDirection = 64'hc;
		// Add stimulus here

	end
      
endmodule

