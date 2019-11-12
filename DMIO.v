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
module DMIO(
	 input wire clk,
    input wire [63:0] direccion,
    input wire [63:0] dataWrite,
    input wire [7:0] sw,
    input wire memWr,
    output [7:0] lecturaLED,
    output [63:0] dataRead
    );
	 reg [7:0] registro;
	 reg [63:0] memoria [4095:0];
	 
	 initial
	 begin
		registro<=8'd0;
	 end
		
	 always @(posedge clk, memWr, direccion)
	 begin
	 
	 	if ((memWr & !direccion[12])==1'b1)
		begin
			memoria[direccion[11:0]]<=dataWrite;
		end
		
		if((memWr & direccion[12])==1'b1)
		begin
			registro<=dataWrite[7:0];
		end
	 end
	 
	 assign lecturaLED = registro;
	 
	 assign dataRead = (direccion[12]==1'b0) ? memoria[direccion[11:0]] : {56'b0,sw};
	 
endmodule
