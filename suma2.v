`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:51:08 11/10/2019 
// Design Name: 
// Module Name:    suma2 
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
module suma2(
    input [63:0] bus_direccion_im,
    output [63:0] bus_pc_next
    );
	 assign bus_pc_next = bus_direccion_im + 64'd4;

endmodule
