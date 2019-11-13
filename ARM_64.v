`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:21:27 11/13/2019 
// Design Name: 
// Module Name:    ARM_64 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ARM_64(
 		input clk,
		input [7:0]SW,
		output [7:0]LED
    );
	 wire  [10:0] opcode;
    wire  bus_reg2loc;
    wire  [1:0] bus_seu;
    wire  bus_aluSrc;
    wire  [2:0] bus_aluOp;
    wire  bus_memWr;
    wire  bus_memToReg;
    wire  bus_regWr;
    wire  beq;
	 wire  bne;
	 
	 Ruta_Datos ruta_de_datos (
		clk,
		bus_reg2loc,
		 bus_seu,
		bus_aluSrc,
		bus_aluOp,
		bus_memWr,
      bus_memToReg,
      bus_regWr,
      beq,
	   bne,
		SW,
		LED,
		opcode
	 );
	 
	 CU unidad_control(
	 opcode,
	 bus_reg2loc,
    bus_seu,
    bus_aluSrc,
    bus_aluOp,
    bus_memWr,
    bus_memToReg,
    bus_regWr,
    beq,
	 bne
	 );
	 

endmodule
