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
    input CLK,
    input [4:0] Rn,
    input [4:0] Rm,
    input [4:0] Rd, //Registro destino.
    input [63:0] dataWrite,
    input regWR,
    output [63:0] dataRn,
    output [63:0] dataRm
    );
	 
	 //se crean 32 Flip/Flops de 64 bits.
	 reg [63:0] FF [31:0];
	 
	 //como la lectura es asincrona y se realiza en todo momento.
	 //se asigna el contenido del FF Rn al bus de datos dataRn.
	 assign dataRn = FF[Rn];
	 assign dataRm = FF[Rm];
	 
	 always @ (negedge CLK)
	 begin
	 if(regWR) // se valida si se permite la escritura en el FF
		if(Rd != 5'b11111) // si Rd (registro destino) es diferente de 31 se escribe la informacion
			FF[Rd]<= dataWrite;
		else
			FF[31]<=64'd0; // si Rd es 31, se escribe ceros (0)
	 end
endmodule
