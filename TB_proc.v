`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:53:27 11/11/2019
// Design Name:   Semi_Procesador_64
// Module Name:   C:/Users/Ghost/Desktop/Procesador/TB_proc.v
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

module TB_proc;

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
		
		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;

		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
   	#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;

		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
		#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
   	#100;
		clk = 1'b0;
		SW = 8'd0;
		
		#100;
		clk = 1'b1;
		SW = 8'd0;
		
	end
      
endmodule

