`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:31:52 11/08/2019 
// Design Name: 
// Module Name:    DMIO 
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
`include "DM.v"
`include "registroLEDS.v"
module DMIO(
	 input wire clk,
    input wire [12:0] direccion,
    input wire [63:0] dataWrite,
    input wire [7:0] sw,
    input wire memWr,
    output [7:0] lecturaLED,
    output [63:0] dataRead
    );
	 wire [63:0]lecturaMemoria;
	 
	 DM dataMemory(clk,direccion[11:0],dataWrite,memWr,!direccion[12],lecturaMemoria);
	 registroLEDS led (clk,dataWrite[7:0],memWr,direccion[12],lecturaLED);
	 
	 assign dataRead = (direccion[12]==1)? {56'b0,sw}:lecturaMemoria;
	 
endmodule
