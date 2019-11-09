`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:03:31 11/08/2019
// Design Name:   CU
// Module Name:   C:/Users/Ghost/Desktop/Procesador/CU_TB.v
// Project Name:  Procesador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CU_TB;

	// Inputs
	reg zero;
	reg [10:0] opcode;

	// Outputs
	wire bus_reg2loc;
	wire [1:0] bus_seu;
	wire bus_aluSrc;
	wire [2:0] bus_aluOp;
	wire bus_memWr;
	wire bus_memToReg;
	wire bus_regWr;
	wire bus_pcSrc;

	// Instantiate the Unit Under Test (UUT)
	CU uut (
		.zero(zero), 
		.opcode(opcode), 
		.bus_reg2loc(bus_reg2loc), 
		.bus_seu(bus_seu), 
		.bus_aluSrc(bus_aluSrc), 
		.bus_aluOp(bus_aluOp), 
		.bus_memWr(bus_memWr), 
		.bus_memToReg(bus_memToReg), 
		.bus_regWr(bus_regWr), 
		.bus_pcSrc(bus_pcSrc)
	);

	initial begin
		// Initialize Inputs ADD
		zero = 0;
		opcode = 11'b10001011000;

		// Wait 100 ns for global reset to finish
		#20;
		//SUB
		opcode = 11'b11001011000;
		
		#20;
		opcode = 11'b10001010000;
		//AND
		#20;
		opcode =11'b10101010000;
		//ORR
		#20;
		opcode =11'b11111000010;
		//ldur
		#20;
		opcode =11'b11111000010;
		//stur
		#20;
		opcode =11'b11111000000;
		//b
		#20;
		opcode =11'b000101xxxxx;
		//cbz
		#20;
		opcode =11'b10110100xxx;
		//cbnz
		#20;
		opcode =11'b10110101xxx;
		//addi
		#20;
		opcode =11'b1001000100x;
		//subi
		#20;
		opcode =11'b1101000100x;
		//andi
		#20;
		opcode =11'b1001001000x;
		//orri
		#20;
		opcode =11'b1011001000x;

		
		
		
/*sub
b11001011000
and
b10001010000
orr
b10101010000
ldur
b11111000010
stur
b11111000000
b-6
b000101
cbz-8
b10110100
cbnz-8
b10110101
addi-10
b1001000100
subi-10
b1101000100
andi-10
b1001001000
orri-10
b1011001000*/

        
		// Add stimulus here

	end
      
endmodule

