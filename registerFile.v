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
	 
	 //se crean 32 Registros de 64 bits.
	 reg [63:0] Registros [31:0]; 
	 
	 //como la lectura es asincrona y se realiza en todo momento.
	 //se asigna el contenido del FF Rn al bus de datos dataRn.
	 assign dataRn = Registros[Rn];
	 assign dataRm = Registros[Rm];
	 
	 always @ (posedge clk)
	 begin
	 if(regWR) // se valida si se permite la escritura en el FF
		if(Rd != 5'b11111) // si Rd (registro destino) es diferente de 31 se escribe la informacion
			Registros[Rd]<= dataWrite;
		else
			Registros[31]<=64'b0; // si Rd es 31, se escribe ceros (0)
	 end
endmodule
