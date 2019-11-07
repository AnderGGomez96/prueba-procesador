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
    input zero,
    input [10:0] opcode,
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
	 
	 always @ (zero, opcode)
	 begin
		case (opcode)   //11 bits
			10001011000: //ADD
			begin
				reg2loc<=0;
				seu<=00; //<- XX
				aluSrc<=0;
				aluOp<=000;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=zero;
			end
			11001011000: //SUB
			begin
				reg2loc<=0;
				seu<=00; //<- XX
				aluSrc<=0;
				aluOp<=001;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=zero;
			end
			10001010000://AND
			begin
				reg2loc<=0;
				seu<=00; //<- XX
				aluSrc<=0;
				aluOp<=010;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=zero;
			end
			10101010000: //ORR
			begin
				reg2loc<=0;
				seu<=00;//<- XX
				aluSrc<=0;
				aluOp<=011;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=zero;
			end
			11111000010://LDUR
			begin
				reg2loc<=1; //X
				seu<=01;
				aluSrc<=1;
				aluOp<=000;
				memRd<=1;
				memWr<=0;
				memToReg<=1;
				regWr<=1;
				pcSrc<=zero;
			end
			11111000000://STUR
			begin
				reg2loc<=1;
				seu<=01;
				aluSrc<=1;
				aluOp<=000;
				memRd<=0;
				memWr<=1;
				memToReg<=0; //X
				regWr<=0;
				pcSrc<=zero;
			end
		endcase
		case(opcode[10:5]) //6 bits
			000101://B
			begin
				reg2loc<=0; //X
				seu<=10;
				aluSrc<=0;  //X
				aluOp<=100;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=0;
				pcSrc<=!zero; //<--------------------
			end
		endcase
		case(opcode[10:3]) //8 bits
			10110100://CBZ
			begin
				reg2loc<=1;
				seu<=11;
				aluSrc<=0;
				aluOp<=100;
				memRd<=0;
				memWr<=0;
				memToReg<=0; //X
				regWr<=0;
				pcSrc<=!zero;
			end
			10110101://CBNZ
			begin
				reg2loc<=1;
				seu<=11;
				aluSrc<=0;
				aluOp<=100;
				memRd<=0;
				memWr<=0;
				memToReg<=0;//X
				regWr<=0;
				pcSrc<=zero;
			end
		endcase
		case (opcode[10:1])
			1001000100: // ADDI
			begin
				reg2loc<=1; //X
				seu<=00;
				aluSrc<=1;
				aluOp<=000;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=zero;				
			end
			1101000100: //SUBI
			begin
				reg2loc<=1; //X
				seu<=00;
				aluSrc<=1;
				aluOp<=001;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=zero;
			end
			1001001000: //ANDI
			begin
				reg2loc<=1; //X
				seu<=00;
				aluSrc<=1;
				aluOp<=010;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=zero;
			end
			1011001000: //ORRI
			begin
				reg2loc<=1; //X
				seu<=00;
				aluSrc<=1;
				aluOp<=011;
				memRd<=0;
				memWr<=0;
				memToReg<=0;
				regWr<=1;
				pcSrc<=zero;
			end
		endcase
	 end


endmodule
