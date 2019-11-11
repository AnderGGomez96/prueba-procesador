`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:55:26 11/10/2019
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
	reg [63:0] direccion;
	reg [63:0] dataWrite;
	reg [7:0] sw;
	reg memWr;

	// Outputs
	wire [7:0] lecturaLED;
	wire [63:0] dataRead;

	// Instantiate the Unit Under Test (UUT)
	DMIO memroria_io (
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
		clk = 0;
		direccion = 64'h0;
		dataWrite = 64'h0;
		sw = 8'h0;
		memWr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clk = 1;
		direccion = 64'h1000;
		dataWrite = 64'hA;
		sw = 0;
		memWr = 1;
		// Add stimulus here

	end
      
endmodule

