`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:03:26 11/12/2019 
// Design Name: 
// Module Name:    Ruta_Datos 
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
module Ruta_Datos(
	 input clk,
    input bus_reg2loc,
    input  [1:0] bus_seu,
    input  bus_aluSrc,
    input  [2:0] bus_aluOp,
    input  bus_memWr,
    input  bus_memToReg,
    input  bus_regWr,
    input  beq,
	 input  bne,
	 input  [7:0]SW,
	 output [7:0]LEDS,
	 output  [10:0] opcode
    );
	 
	 wire [63:0] bus_pc_next;
	 wire [63:0] bus_im;
	 wire [31:0] instrucciones;
	 wire [63:0] bus_RN;
	 wire [63:0] bus_RM;
	 wire [4:0]  mux_rm_rt;
	 wire [63:0] address_extend;
	 wire [63:0] mux_rf_seu;
	 wire zero_flag;
	 wire [63:0] resultadoALU;
	 wire [63:0] dmio_read;
	 wire [63:0] mux_alu_dmio;
	 wire [63:0] PC_salto;
	 wire [63:0] PC_next;
	 wire control_beq;
	 wire control_bne;
	 
	 //PC
	 PC program_counter(
	 clk,
	 bus_pc_next,
	 bus_im
	 );
	 
	 //IM
	 IM memoria_instrucciones(
	 bus_im,
	 instrucciones
	 );
	 
	 assign mux_rm_rt = (bus_reg2loc==1'b1) ? instrucciones[4:0] : instrucciones[20:16];
	 
	 //RF
	 RF register_file(
	 clk,
	 instrucciones[9:5],
	 mux_rm_rt,
	 instrucciones[4:0],
	 bus_regWr,
	 mux_alu_dmio,
	 bus_RN,
	 bus_RM
	 );
	 
	 
	 
	 //SEU
	 SEU extencion_signo (
	 instrucciones,
	 bus_seu,
	 address_extend
	 );
	 
	
	 assign mux_rf_seu = (bus_aluSrc==1'b1) ? address_extend : bus_RM;
	 
	 
	 //ALU
	 ALU aritmetica_logica (
	 bus_RN,
	 mux_rf_seu,
	 bus_aluOp,
	 zero_flag,
	 resultadoALU
	 );
	 
	 
	 
	 //DMIO
	 
	 DMIO data_memory (
	 clk,
	 resultadoALU,
	 bus_RM,
	 SW,
	 bus_memWr,
	 LEDS,
	 dmio_read
	 );
	 
	 assign mux_alu_dmio= (bus_memToReg==1'b1) ? dmio_read : resultadoALU;
	 assign PC_salto = bus_im + address_extend;
	 assign PC_next = bus_im + 64'd4;
	 
	 assign control_beq= beq & zero_flag;
	 assign control_bne= bne & (~zero_flag);
	 
	 assign bus_pc_next = ((control_beq == 1'b1) || (control_bne==1'b1)) ? PC_salto : PC_next;
	 
	 assign opcode = instrucciones[31:21];
	 
endmodule
