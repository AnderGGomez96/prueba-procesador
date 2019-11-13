`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:35:56 11/13/2019
// Design Name:   ARM_64
// Module Name:   C:/Users/Ghost/Documents/Anderson/PROCEDADOR_DEBUG/ARM_TB.v
// Project Name:  PROCEDADOR_DEBUG
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ARM_64
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ARM_TB;

	// Inputs
	reg clk;
	reg [7:0] SW;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	ARM_64 uut (
		.clk(clk), 
		.SW(SW), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		clk = 1'b0;
		SW = 8'd10;

		// Wait 100 ns for global reset to finish
		#100;
		
		clk = 1'b1;
		SW = 8'd0;
		
		#100;
		
		clk = 1'b0;
		SW = 8'd2;
		
		#100;
		
		clk = 1'b1;
		SW = 8'd0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		SW = 8'b0;

		#100;
		
		clk = 1'b0;
		//SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		//SW = 8'b0;

		#100;
		
		clk = 1'b0;
		//SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		//SW = 8'b0;

		#100;
		
		clk = 1'b0;
		//SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		//SW = 8'b0;

		#100;
		
		clk = 1'b0;
		//SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		//SW = 8'b0;

		#100;
		
		clk = 1'b0;
		//SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		//SW = 8'b0;

		#100;
		
		clk = 1'b0;
		//SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		//SW = 8'b0;

		#100;
		
		clk = 1'b0;
		//SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		//SW = 8'b0;

		#100;
		
		clk = 1'b0;
		//SW = 8'b0;
		
		#100;
		
		clk = 1'b1;
		//SW = 8'b0;		
		// Add stimulus here

	end
      
endmodule

