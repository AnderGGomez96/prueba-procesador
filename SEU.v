`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:08:30 11/12/2019 
// Design Name: 
// Module Name:    SEU 
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
module SEU(
    input [31:0] inst_extend,
    input [1:0] seu,
    output reg [63:0] salida_extend
    );
	 
	 always @ (*) // seu
	 begin
		case (seu)
		2'b00: salida_extend<={52'b0,inst_extend[21:10]}; //ALUIMM
		2'b01: salida_extend<={{55{inst_extend[20]}},inst_extend[20:12]}; //DT_ADDRESS
		2'b10: salida_extend<={{36{inst_extend[25]}},inst_extend[25:0],2'b0};//BRANCH
		2'b11: salida_extend<={{43{inst_extend[23]}},inst_extend[23:5],2'b0};//COND_BRANCH
		endcase
	 end


endmodule
