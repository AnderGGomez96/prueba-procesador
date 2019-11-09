`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:23:19 11/08/2019
// Design Name:   DMIO
// Module Name:   C:/Users/Ghost/Desktop/Procesador/DMIO_TB.v
// Project Name:  Procesador
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
	reg [12:0] direccion;
	reg [63:0] dataWrite;
	reg [7:0] sw;
	reg memWr;
	
	reg instruction= 2'b10;

	// Outputs
	wire [7:0] lecturaLED;
	wire [63:0] dataRead;
	

	// Instantiate the Unit Under Test (UUT)
	DMIO uut (
		.clk(clk), 
		.direccion(direccion), 
		.dataWrite(dataWrite), 
		.sw(sw), 
		.memWr(memWr), 
		.lecturaLED(lecturaLED), 
		.dataRead(dataRead)
	);

	initial begin
		// Initialize Inputs
		clk = 1'b0;
		direccion = 13'h1;
		dataWrite = 64'h0;
		sw = 8'b0;
		memWr = 1'b0;

		// Wait 100 ns for global reset to finish
		#100;
		//0001-1010-1111-0010
		clk = 1'b1;
		direccion = 13'h1AF2;
		dataWrite = 64'hF;
		sw = 8'hCA;
		memWr = 1'b1; 
		// Add stimulus here

		#100;
		clk = 1'b0;
		direccion = 13'h3;
		dataWrite = 64'hA;
		sw = 8'b0;
		memWr = 1'b0;
		
		#100;
		clk = 1'b1;
		direccion = 13'h4;
		dataWrite = 64'hA;
		sw = 8'b0;
		memWr = 1'b0;
		
		#100;
		clk = 1'b0;
		direccion = 13'h2;
		dataWrite = 64'hA;
		sw = 8'b0;
		memWr = 1'b0;

	end
      
endmodule

