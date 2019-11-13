`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:03:18 11/13/2019
// Design Name:   DMIO
// Module Name:   C:/Users/Ghost/Documents/Anderson/PROCEDADOR_DEBUG/DMIO_TB.v
// Project Name:  PROCEDADOR_DEBUG
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DMIO
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DMIO_TB;

	// Inputs
	reg clk;
	reg [63:0] address;
	reg [63:0] data_write;
	reg [7:0] SW;
	reg enable_write;

	// Outputs
	wire [7:0] LEDS;
	wire [63:0] data_read;

	// Instantiate the Unit Under Test (UUT)
	DMIO uut (
		.clk(clk), 
		.address(address), 
		.data_write(data_write), 
		.SW(SW), 
		.enable_write(enable_write), 
		.LEDS(LEDS), 
		.data_read(data_read)
	);

	initial begin
		// Initialize Inputs
		clk = 1'b0;
		address = 64'h0000;
		data_write = 1'b0;
		SW = 8'd0;
		enable_write = 1'b0;

		// Wait 100 ns for global reset to finish
		#100;
		
		clk = 1'b1;
		address = 64'h1000;
		data_write = 64'd7;
		SW = 8'd4;
		enable_write = 1'b1;
		
		#100;
		
		clk = 1'b0;
		address = 64'h1000;
		data_write = 64'd7;
		SW = 8'd4;
		enable_write = 1'b0;
		
		#100;
		
		clk = 1'b1;
		address = 64'd3;
		data_write = 64'd7;
		SW = 8'd4;
		enable_write = 1'b1;
        
		// Add stimulus here

	end
      
endmodule

