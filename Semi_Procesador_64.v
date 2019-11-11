`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:32:14 11/08/2019 
// Design Name: 
// Module Name:    Semi_Procesador_64 
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
`include"PC.v"
`include"ALU.v"
`include"CU.v"
`include"DMIO.v"
`include"IM.v"
`include"SEU.v"
`include"registerFile.v"
`include"suma1.v"
`include"suma2.v"


module Semi_Procesador_64(
    input clk,
    input wire [7:0] SW,
    output wire [7:0] LEDS
    );

	 //Cables
	 //pc
	 wire [63:0] bus_direccion_im;
	 
	 //IM
	 wire [31:0] bus_instrucciones;
	 
	 //mux
	 wire [4:0] bus_mux;
	 
	 //register file
	 wire [63:0] bus_Rn;
	 wire [63:0] bus_Rm;
	 
	 
	 wire [63:0] bus_mux2;
	 
	 
	 //control unit
	 wire zero;
	 wire bus_reg2loc;
	 wire [1:0] bus_seu;
	 wire bus_aluSrc;
	 wire [2:0] bus_aluOp;
				// wire bus_memRd;
	 wire bus_memWr;
	 wire bus_memToReg;
	 wire bus_regWr;
	 wire bus_pcSrc;

	 
	 wire [63:0] bus_out;//<--SEU
	 
	 
	 //ALU
	 wire [63:0] bus_resultOP;
	 

	 //DM
	 wire [63:0] bus_data_read;
	 
	 wire [63:0] bus_mux3;
	 
	 wire [63:0] suma_1;
	 
	 wire [63:0] suma_2;
	 
	 wire [63:0] bus_mux4;	 
	 //Dispositivos
	 
	 
	 //PROGRAM COUNTER
	 PC program_counter (
	 clk,
	 bus_mux4,
	 bus_direccion_im);
	 
	 
	 //MEMORIA DE INSTRUCCIONES
	 IM instruction_memory (
	 bus_direccion_im,
	 bus_instrucciones);
	 
	 
	 
	 
	 
	 //REGISTER FILE
	 registerFile register_file(
	 clk,
	 bus_instrucciones[9:5],
	 bus_mux,
	 bus_instrucciones[4:0],
	 bus_mux3,
	 bus_regWr,
	 bus_Rn,
	 bus_Rm);
	 
	 /*
	 input clk,
    input [4:0] Rn,
    input [4:0] Rm,
    input [4:0] Rd, //Registro destino.
    input [63:0] dataWrite,
    input regWR,
    output [63:0] dataRn,
    output [63:0] dataRm
	 */
	 
	 
	 
	 //UNIDAD DE CONTROL
	 CU controlUnit (
	 zero,
	 bus_instrucciones[31:21],
	 bus_reg2loc,
	 bus_seu,
	 bus_aluSrc,
	 bus_aluOp,
	 bus_memWr,
	 bus_memToReg,
	 bus_regWr,
	 bus_pcSrc);
	 
	 /*
	 input  zero,
    input  [10:0] opcode,
    output bus_reg2loc,
    output [1:0] bus_seu,
    output bus_aluSrc,
    output [2:0] bus_aluOp,
    //output bus_memRd,
    output bus_memWr,
    output bus_memToReg,
    output bus_regWr,
    output bus_pcSrc
	 */
	 
	 
	 //SEU
	 SEU sign_extension_unit (
	 bus_instrucciones[25:0],
	 bus_seu,
	 bus_out);
	 
	 /*
	 input [25:0] address,
    input [1:0] seu,
    output [63:0] bus_out
	 */
	 
	 //UNIDAD ARITMETICO LOGICA
	 
	 ALU aritmetic_logic_unit (
	 bus_aluOp,
	 bus_Rn,
	 bus_mux2,
	 zero,
	 bus_resultOP);
	 
	 
	 /*
	 input [2:0] aluOP,
    input [63:0] A,
    input [63:0] B,
    output zero,
    output [63:0] bus_resultOP 
	 */
	 
	 
	 //DATA MEMORY
	 
	 DMIO data_memory (
	 clk,
	 bus_resultOP,
	 bus_Rm,
	 SW,
	 bus_memWr,
	 LEDS,
	 bus_data_read);
	 
	 
	 /*
	 input wire clk,
    input wire [63:0] direccion,
    input wire [63:0] dataWrite,
    input wire [7:0] sw,
    input wire memWr,
    output [7:0] lecturaLED,
    output [63:0] dataRead
	 */
	 
	 suma1 salto (
	 bus_direccion_im,
	 bus_out,
	 suma_1
	 );
	 
	 suma2 next (
	 bus_direccion_im,
	 suma_2
	 );
	 
	 assign bus_mux = bus_reg2loc ? bus_instrucciones[4:0] : bus_instrucciones[20:16];
	 assign bus_mux2 = bus_aluSrc ? bus_out : bus_Rm;
	 assign bus_mux3 = bus_memToReg ? bus_data_read : bus_resultOP;
	 assign bus_mux4 = bus_pcSrc ? suma_1 : suma_2;
	 
	 
endmodule
