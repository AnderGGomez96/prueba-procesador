`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:55:31 11/06/2019 
// Design Name: 
// Module Name:    registerFile 
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
module registerFile(
    input clk,
    input [4:0] Rn,
    input [4:0] Rm,
    input [4:0] Rd, //Registro destino.
    input [63:0] dataWrite,
    input regWR,
    output [63:0] dataRn,
    output [63:0] dataRm
    );
	 integer i;
	 //se crean 32 Registros de 64 bits.
	 reg [63:0] Registros [31:0];

	 initial 
	  begin
		 for(i=0;i<32;i=i+1)
		 begin
			if (i==21)
				Registros[i]<=64'h0000000000001000;
			else
				Registros[i]<=64'h0000000000000000;
		 end
	  end

	 always @ (posedge clk)
	 begin
		 if(regWR==1'd1) // se valida si se permite la escritura en el FF
			Registros[Rd]<=dataWrite;
	 end
	 
	 	 //como la lectura es asincrona y se realiza en todo momento.
	 //se asigna el contenido del FF Rn al bus de datos dataRn.
	 assign dataRn = Registros[Rn];
	 assign dataRm = Registros[Rm];
	 
endmodule
