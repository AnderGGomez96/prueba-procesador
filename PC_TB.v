`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:23:32 11/12/2019
// Design Name:   PC
// Module Name:   C:/Users/Ghost/Documents/Anderson/PROCEDADOR_DEBUG/PC_TB.v
// Project Name:  PROCEDADOR_DEBUG
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
	reg [63:0] nueva_direccion;

	// Outputs
	wire [63:0] salida_im;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.clk(clk), 
		.nueva_direccion(nueva_direccion), 
		.salida_im(salida_im)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		nueva_direccion = 64'h4;

		// Wait 100 ns for global reset to finish
		#100;
      clk = 1;
		nueva_direccion = 64'h4;
		
		#100;
		clk = 0;
		nueva_direccion = 64'h4;
		
		#100;
		clk = 1;
		nueva_direccion = 64'h8;
		
		#100;
		clk = 0;
		
		nueva_direccion = 64'h4;
		#100;
		
		clk = 1;
		nueva_direccion = 64'hc;
		// Add stimulus here

	end
      
endmodule

