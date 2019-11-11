`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:40:05 11/08/2019 
// Design Name: 
// Module Name:    IM 
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


//PC	10 9 8 7 6 5 4 3 2 1 0			+4
//PC	 0 0 0 0 0 0 0 0 1 0 0
//PC	 0 0 0 0 0 0 0 1 0 0 0
//PC	 0 0 0 0 0 0 0 1 1 0 0
//PC	 0 0 0 0 0 0 1 0 0 0 0
//PC	 0 0 0 0 0 0 1 0 1 0 0
//PC	 0 0 0 0 0 0 1 1 0 0 0
//PC	 0 0 0 0 0 0 1 1 1 0 0
//PC	 0 0 0 0 0 1 0 0 0 0 0

module IM(
    input [63:0] busPc, //9 bits PC
    output [31:0] instruction  //31 bits de salida con la instruccion.
    );
	 // memoria de instrucciones [columnas] y [filas]; 512 registros de 32 bits
	 reg [31:0] rom [511:0];
	 //Valores iniciales.
	 integer i;
	 initial
	 begin
		for (i=0; i<512;i=i+1)
			rom[i]<=32'h0;
			
		 rom[0]<=32'hF84002A0;
		 rom[1]<=32'hF84002A1;
		 rom[2]<=32'h8B000023;
		 rom[3]<=32'hF80002A3;
		 /*rom[0]<=32'hF84002A0;
		 rom[1]<=32'hF84002A1;
		// rom[2]<=32'hAA1F0129;
		 //rom[3]<=32'hAA1F014A;
		 rom[2]<=32'hCB090024;
		 rom[3]<=32'hB400008A;
		 rom[4]<=32'h8B00014A;
		 rom[5]<=32'h91000529;
		 rom[6]<=32'h17FFFFFC;
		 rom[7]<=32'hF80002AA;*/
	 end
	 
	 
	 assign instruction=rom[busPc[10:2]];
endmodule
