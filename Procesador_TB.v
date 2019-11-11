`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:02:18 11/10/2019
// Design Name:   Semi_Procesador_64
// Module Name:   C:/Users/Ghost/Desktop/Procesador/Procesador_TB.v
// Project Name:  Procesador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Semi_Procesador_64
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Procesador_TB;

	// Inputs
	reg clk;
	reg [7:0] SW;

	// Outputs
	wire [7:0] LEDS;

	// Instantiate the Unit Under Test (UUT)
	Semi_Procesador_64 uut (
		.clk(clk), 
		.SW(SW), 
		.LEDS(LEDS)
	);

	initial begin
		// Initialize Inputs
		clk = 1'b0;
		SW = 8'hA;

		// Wait 100 ns for global reset to finish
		#300;
		clk = 1'b1;
		SW = 8'h0;
		
		#300;
		clk = 1'b0;
		SW = 8'hF;
		
		#300;
		clk = 1'b1;
		SW = 8'h0;
		
	//LEDS	
		#300;
		clk = 1'b0; 
		SW = 8'h0;
		
		#300;
		clk = 1'b1;
		SW = 8'h0;
		
		#300;
		clk = 1'b0;
		SW = 8'h0;
		
		#300;
		clk = 1'b1;
		SW = 8'h0;
		
		#300;
		clk = 1'b0;
		SW = 8'h0;
		// Add stimulus here

	end 
      
endmodule

