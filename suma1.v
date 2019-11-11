`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:45:55 11/10/2019 
// Design Name: 
// Module Name:    suma1 
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
module suma1(
    input wire [63:0] bus_direccion_im,
    input wire [63:0] bus_out,
    output [63:0] result_suma
    );
	 assign result_suma = bus_direccion_im+bus_out;

endmodule
