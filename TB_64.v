`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:46:30 11/11/2019
// Design Name:   ARM_64
// Module Name:   C:/Users/Ghost/Documents/Anderson/ARM/TB_64.v
// Project Name:  ARM
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

module TB_64;

	// Inputs
	reg clk;
	reg [7:0] SW;

	// Outputs
	wire [7:0] LEDS;

	// Instantiate the Unit Under Test (UUT)
	ARM_64 uut (
		.clk(clk), 
		.SW(SW), 
		.LEDS(LEDS)
	);

	initial begin
		// Initialize Inputs
		clk = 1'b0;
		SW = 8'h0;

		// Wait 100 ns for global reset to finish
		#100;
		clk = 1'b1;
		SW = 8'd2;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'd4;
		
	//LEDS	
		#100;
		clk = 1'b0; 
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h2;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h2;
		
				#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h3;
		
				#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h2;
		
				#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100; 
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
						#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		#100;
		clk = 1'b1;
		SW = 8'h0;
		
		#100;
		clk = 1'b0;
		SW = 8'h0;
		
		// Add stimulus here 
	end 
      
      
endmodule

