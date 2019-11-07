`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:48:54 11/06/2019 
// Design Name: 
// Module Name:    CU 
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
module CU(
    input Zero,
    input [10:0] Instruction,
    output reg2loc,
    output [1:0] seu,
    output aluSrc,
    output [2:0] aluOp,
    output memRd,
    output memWr,
    output memToReg,
    output regWr,
    output pcSrc
    );
	 
	 always @ (Zero, Instruction)
	 begin
		case (Instruction)
			10001011000: //ADD
			begin
				reg2loc<=0;
				seu<=00; //<- no estoy seguro
				aluSrc<=0;
				aluOp<=000;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=0;
			end
			11001011000: //SUB
			begin
				reg2loc<=0;
				seu<=00; //<- no estoy seguro
				aluSrc<=0;
				aluOp<=001;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=0;
			end
			10001010000://AND
			begin
				reg2loc<=0;
				seu<=00; //<- no estoy seguro
				aluSrc<=0;
				aluOp<=010;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=0;
			end
			10101010000: //ORR
			begin
				reg2loc<=0;
				seu<=00;//<- no estoy seguro
				aluSrc<=0;
				aluOp<=011;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=0;
			end
			11111000010://LDUR
			begin
				reg2loc<=1;
				seu<=01;
				aluSrc<=1;
				aluOp<=100;
				memRd<=1;
				memWr<=0;
				memToReg<=1;
				regWr<=1;
				pcSrc<=0;
			end
			11111000000://STUR
			begin
				reg2loc<=1;
				seu<=01;
				aluSrc<=1;
				aluOp<=100;
				memRd<=0;
				memWr<=1;
				memToReg<=0;
				regWr<=0;
				pcSrc<=0;
			end
		endcase
		case(instruction[5:0])
		
		endcase
	 end


endmodule
