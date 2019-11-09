`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:05:00 11/08/2019 
// Design Name: 
// Module Name:    DM 
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
module DM(
	 input wire clk,
    input wire [11:0] direccion,
    input wire [63:0] dataWrite,
    input wire enableWr,
	 input wire bitAddress,
    output [63:0] bus_dataRead
    );
	 reg [63:0] memoria [4095:0];
	 integer i;
	 reg [63:0] date = 64'h0;

	 assign bus_dataRead=memoria[direccion];
	 
	 always @ (posedge clk)
	 begin
		if ((enableWr & bitAddress)==1'b1)
		begin
			memoria[direccion]=dataWrite;
		end
	 end
	 
	 
	 
	 
	 initial
	 begin 

		for (i=0; i<256; i=i+1)
		begin
			memoria[i]=date;
			date=date+4;
		end
	 end
endmodule
