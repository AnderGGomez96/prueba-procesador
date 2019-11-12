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
    output reg bus_reg2loc,
    output reg [1:0] bus_seu,
    output reg bus_aluSrc,
    output reg [2:0] bus_aluOp,
    //output bus_memRd,
    output reg bus_memWr,
    output reg bus_memToReg,
    output reg bus_regWr,
    output reg bus_pcSrc
    );
	 
	 always @ (*)
	 begin
		casex (opcode)   //11 bits
			11'b10001011000: //ADD
			begin
				 bus_reg2loc<=1'b0;
				 bus_seu<=2'bxx; //<- XX
				 bus_aluSrc<=1'b0;
				 bus_aluOp<=3'b000;
				 //memRd<=1'b0;
				 bus_memWr<=1'b0;
				 bus_memToReg<=1'b0;
				 bus_regWr<=1'b1;
				 bus_pcSrc<=zero;
			end
			11'b11001011000: //SUB
			begin
				 bus_reg2loc<=1'b0;
				 bus_seu<=2'bxx; //<- XX
				 bus_aluSrc<=1'b0;
				 bus_aluOp<=3'b001;
				 //memRd<=1'b0;
				 bus_memWr<=1'b0;
				 bus_memToReg<=1'b0;
				 bus_regWr<=1'b1;
				 bus_pcSrc<=zero;
			end
			11'b10001010000://AND
			begin
				 bus_reg2loc<=1'b0;
				 bus_seu<=2'bxx; //<- XX
				 bus_aluSrc<=1'b0;
				 bus_aluOp<=3'b010;
				 //memRd<=1'b0;
				 bus_memWr<=1'b0;
				 bus_memToReg<=1'b0;
				 bus_regWr<=1'b1;
				 bus_pcSrc<=zero;
			end
			11'b10101010000: //ORR
			begin
				 bus_reg2loc<=1'b0;
				 bus_seu<=2'bxx;//<- XX
				 bus_aluSrc<=1'b0;
				 bus_aluOp<=3'b011;
				 //memRd<=1'b0;
				 bus_memWr<=1'b0;
				 bus_memToReg<=1'b0;
				 bus_regWr<=1'b1;
				 bus_pcSrc<=zero;
			end
			11'b11111000010://LDUR
			begin
				 bus_reg2loc<=1'bx; //X
				 bus_seu<=2'b01;
				 bus_aluSrc<=1'b1;
				 bus_aluOp<=3'b000;
				 //memRd<=1'b1;
				 bus_memWr<=1'b0;
				 bus_memToReg<=1'b1;
				 bus_regWr<=1'b1;
				 bus_pcSrc<=zero;
			end
			11'b11111000000://STUR
			begin
				bus_reg2loc<=1'b1;
				bus_seu<=2'b01;
				bus_aluSrc<=1'b1;
				bus_aluOp<=3'b000;
				//memRd<=1'b0;
				bus_memWr<=1'b1;
				bus_memToReg<=1'bx; //X
				bus_regWr<=1'b0;
				bus_pcSrc<=zero;
			end
			11'b11010011011: //LSL
			begin
				bus_reg2loc<=1'bx; //X
				bus_seu<=2'b00;
				bus_aluSrc<=1'b1;
				bus_aluOp<=3'b101;
				//memRd<=1'b0;
				bus_memWr<=1'b0;
				bus_memToReg<=1'b0;
				bus_regWr<=1'b1;
				bus_pcSrc<=zero;
			end		
			11'b11010011010:  //LSR
			begin
				bus_reg2loc<=1'bx; //X
				bus_seu<=2'b00;
				bus_aluSrc<=1'b1;
				bus_aluOp<=3'b110;
				//memRd<=1'b0;
				bus_memWr<=1'b0;
				bus_memToReg<=1'b0;
				bus_regWr<=1'b1;
				bus_pcSrc<=zero;
			end
		//endcase
			
		//case (opcode [10:5])
			11'b000101xxxxx://B
			begin
				bus_reg2loc<=1'bx; //X
				bus_seu<=2'b10;
				bus_aluSrc<=1'bx;  //X
				bus_aluOp<=3'bxxx; //x
				//memRd<=1'b0;
				bus_memWr<=1'b0;
				bus_memToReg<=1'bx; //x
				bus_regWr<=1'b0;
				bus_pcSrc<=!zero; //
			end
		//endcase
		
		//case(opcode[10:3])
			11'b10110100xxx://CBZ
			begin
				bus_reg2loc<=1'b1;
				bus_seu<=2'b11;
				bus_aluSrc<=1'b0;
				bus_aluOp<=3'b100;
				//memRd<=1'b0;
				bus_memWr<=1'b0;
				bus_memToReg<=1'bx; //X
				bus_regWr<=1'b0;
				bus_pcSrc<=zero;
			end
			11'b10110101xxx://CBNZ
			begin
				bus_reg2loc<=1'b1;
				bus_seu<=2'b11;
				bus_aluSrc<=1'b0;
				bus_aluOp<=3'b100;
				//memRd<=1'b0;
				bus_memWr<=1'b0;
				bus_memToReg<=1'bx;//X
				bus_regWr<=1'b0;
				bus_pcSrc<=!zero;
			end
		//endcase	
			
		//case (opcode[10:1])
			11'b1001000100x: // ADDI
			begin
				bus_reg2loc<=1'bx; //X
				bus_seu<=2'b00;
				bus_aluSrc<=1'b1;
				bus_aluOp<=3'b000;
				//memRd<=1'b0;
				bus_memWr<=1'b0;
				bus_memToReg<=1'b0;
				bus_regWr<=1'b1;
				bus_pcSrc<=zero;				
			end
			11'b1101000100x: //SUBI
			begin
				bus_reg2loc<=1'bx; //X
				bus_seu<=2'b00;
				bus_aluSrc<=1'b1;
				bus_aluOp<=3'b001;
				//memRd<=1'b0;
				bus_memWr<=1'b0;
				bus_memToReg<=1'b0;
				bus_regWr<=1'b1;
				bus_pcSrc<=zero;
			end
			11'b1001001000x: //ANDI
			begin
				bus_reg2loc<=1'bx; //X
				bus_seu<=2'b00;
				bus_aluSrc<=1'b1;
				bus_aluOp<=3'b010;
				//memRd<=1'b0;
				bus_memWr<=1'b0;
				bus_memToReg<=1'b0;
				bus_regWr<=1'b1;
				bus_pcSrc<=zero;
			end
			11'b1011001000x: //ORRI
			begin
				bus_reg2loc<=1'bx; //X
				bus_seu<=2'b00;
				bus_aluSrc<=1'b1;
				bus_aluOp<=3'b011;
				//memRd<=1'b0;
				bus_memWr<=1'b0;
				bus_memToReg<=1'b0;
				bus_regWr<=1'b1;
				bus_pcSrc<=zero;
			end
		endcase
		
		
		
	 end
endmodule
