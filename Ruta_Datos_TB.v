`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:08:10 11/13/2019
// Design Name:   Ruta_Datos
// Module Name:   C:/Users/Ghost/Documents/Anderson/PROCEDADOR_DEBUG/Ruta_Datos_TB.v
// Project Name:  PROCEDADOR_DEBUG
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Ruta_Datos
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Ruta_Datos_TB;

	// Inputs
	reg clk;
	reg bus_reg2loc;
	reg [1:0] bus_seu;
	reg bus_aluSrc;
	reg [2:0] bus_aluOp;
	reg bus_memWr;
	reg bus_memToReg;
	reg bus_regWr;
	reg beq;
	reg bne;
	reg SW;

	// Outputs
	wire LEDS;
	wire [10:0] opcode;

	// Instantiate the Unit Under Test (UUT)
	Ruta_Datos uut (
		.clk(clk), 
		.bus_reg2loc(bus_reg2loc), 
		.bus_seu(bus_seu), 
		.bus_aluSrc(bus_aluSrc), 
		.bus_aluOp(bus_aluOp), 
		.bus_memWr(bus_memWr), 
		.bus_memToReg(bus_memToReg), 
		.bus_regWr(bus_regWr), 
		.beq(beq), 
		.bne(bne), 
		.SW(SW), 
		.LEDS(LEDS), 
		.opcode(opcode)
	);

	initial begin
		// Initialize Inputs
		clk = 1'b0;
		bus_reg2loc = 1'b0;
		bus_seu = 2'b00;
		bus_aluSrc = 1'b10;
		bus_aluOp = 3'b000;
		bus_memWr = 1'b0;
		bus_memToReg = 1'b0;
		bus_regWr = 1'b0;
		beq = 1'b0;
		bne = 1'b0;
		SW = 1'b0;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here

	end
      
endmodule

