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
    input  zero,
    input  [10:0] opcode,
    output bus_reg2loc,
    output [1:0] bus_seu,
    output bus_aluSrc,
    output [2:0] bus_aluOp,
    output bus_memRd,
    output bus_memWr,
    output bus_memToReg,
    output bus_regWr,
    output bus_pcSrc
    );
	reg reg2loc;
	reg [1:0] seu;
	reg aluSrc;
	reg [2:0] aluOp;
	reg memRd;
	reg memWr;
	reg memToReg;
	reg regWr;
	reg pcSrc;
	 
	 always @ (zero, opcode)
	 begin
		case (opcode)   //11 bits
			11'b10001011000: //ADD
			begin
				 reg2loc<=1'b0;
				 seu<=2'b00; //<- XX
				 aluSrc<=1'b0;
				 aluOp<=3'b000;
				 memRd<=1'b0;
				 memWr<=1'b0;
				 memToReg<=1'b0;
				 regWr<=1'b1;
				 pcSrc<=zero;
			end
			11'b11001011000: //SUB
			begin
				 reg2loc<=1'b0;
				 seu<=2'b00; //<- XX
				 aluSrc<=1'b0;
				 aluOp<=3'b001;
				 memRd<=1'b0;
				 memWr<=1'b0;
				 memToReg<=1'b0;
				 regWr<=1'b1;
				 pcSrc<=zero;
			end
			11'b10001010000://AND
			begin
				 reg2loc<=1'b0;
				 seu<=2'b00; //<- XX
				 aluSrc<=1'b0;
				 aluOp<=3'b010;
				 memRd<=1'b0;
				 memWr<=1'b0;
				 memToReg<=1'b0;
				 regWr<=1'b1;
				 pcSrc<=zero;
			end
			11'b10101010000: //ORR
			begin
				 reg2loc<=1'b0;
				 seu<=2'b00;//<- XX
				 aluSrc<=1'b0;
				 aluOp<=3'b011;
				 memRd<=1'b0;
				 memWr<=1'b0;
				 memToReg<=1'b0;
				 regWr<=1'b1;
				 pcSrc<=zero;
			end
			11'b11111000010://LDUR
			begin
				 reg2loc<=1'b1; //X
				 seu<=2'b01;
				 aluSrc<=1'b1;
				 aluOp<=3'b000;
				 memRd<=1'b1;
				 memWr<=1'b0;
				 memToReg<=1'b1;
				 regWr<=1'b1;
				 pcSrc<=zero;
			end
			11'b11111000000://STUR
			begin
				reg2loc<=1'b1;
				seu<=2'b01;
				aluSrc<=1'b1;
				aluOp<=3'b000;
				memRd<=1'b0;
				memWr<=1'b1;
				memToReg<=1'b0; //X
				regWr<=1'b0;
				pcSrc<=zero;
			end
		endcase
		case(opcode[10:5]) //6 bits
			6'b000101://B
			begin
				reg2loc<=1'b0; //X
				seu<=2'b10;
				aluSrc<=1'b0;  //X
				aluOp<=3'b100;
				memRd<=1'b0;
				memWr<=1'b0;
				memToReg<=1'b0;
				regWr<=1'b0;
				pcSrc<=!zero; //
			end
		endcase
		case(opcode[10:3]) //8 bits
			8'b10110100://CBZ
			begin
				reg2loc<=1'b1;
				seu<=2'b11;
				aluSrc<=1'b0;
				aluOp<=3'b100;
				memRd<=1'b0;
				memWr<=1'b0;
				memToReg<=1'b0; //X
				regWr<=1'b0;
				pcSrc<=zero;
			end
			8'b10110101://CBNZ
			begin
				reg2loc<=1'b1;
				seu<=2'b11;
				aluSrc<=1'b0;
				aluOp<=3'b100;
				memRd<=1'b0;
				memWr<=1'b0;
				memToReg<=1'b0;//X
				regWr<=1'b0;
				pcSrc<=!zero;
			end
		endcase
		case (opcode[10:1])
			10'b1001000100: // ADDI
			begin
				reg2loc<=1'b1; //X
				seu<=2'b00;
				aluSrc<=1'b1;
				aluOp<=3'b000;
				memRd<=1'b0;
				memWr<=1'b0;
				memToReg<=1'b0;
				regWr<=1'b1;
				pcSrc<=zero;				
			end
			10'b1101000100: //SUBI
			begin
				reg2loc<=1'b1; //X
				seu<=2'b00;
				aluSrc<=1'b1;
				aluOp<=3'b001;
				memRd<=1'b0;
				memWr<=1'b0;
				memToReg<=1'b0;
				regWr<=1'b1;
				pcSrc<=zero;
			end
			10'b1001001000: //ANDI
			begin
				reg2loc<=1'b1; //X
				seu<=2'b00;
				aluSrc<=1'b1;
				aluOp<=3'b010;
				memRd<=1'b0;
				memWr<=1'b0;
				memToReg<=1'b0;
				regWr<=1'b1;
				pcSrc<=zero;
			end
			10'b1011001000: //ORRI
			begin
				reg2loc<=1'b1; //X
				seu<=2'b00;
				aluSrc<=1'b1;
				aluOp<=3'b011;
				memRd<=1'b0;
				memWr<=1'b0;
				memToReg<=1'b0;
				regWr<=1'b1;
				pcSrc<=zero;
			end
		endcase
	 end

	assign bus_reg2loc=reg2loc;
	assign bus_seu=seu;
	assign bus_aluSrc=aluSrc;
	assign bus_aluOp=aluOp;
	assign bus_memRd=memRd;
	assign bus_memWr=memWr;
	assign bus_memToReg=memToReg;
	assign bus_regWr=regWr;
	assign bus_pcSrc=pcSrc;
endmodule
