`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:56:47 11/12/2019
// Design Name:   RF
// Module Name:   C:/Users/Ghost/Documents/Anderson/PROCEDADOR_DEBUG/RF_TB.v
// Project Name:  PROCEDADOR_DEBUG
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RF_TB;

	// Inputs
	reg clk;
	reg [4:0] Rn;
	reg [4:0] Rm;
	reg [4:0] Rd;
	reg enable_registros;
	reg [64:0] dataWrite;

	// Outputs
	wire [64:0] busRN;
	wire [64:0] busRM;

	// Instantiate the Unit Under Test (UUT)
	RF uut (
		.clk(clk), 
		.Rn(Rn), 
		.Rm(Rm), 
		.Rd(Rd), 
		.enable_registros(enable_registros), 
		.dataWrite(dataWrite), 
		.busRN(busRN), 
		.busRM(busRM)
	);

	initial begin
		// Initialize Inputs
		clk = 1'b0;
		Rn = 5'b00000;
		Rm = 5'b00000;
		Rd = 5'b00000;
		enable_registros = 1'b0;
		dataWrite = 64'd1;

		// Wait 100 ns for global reset to finish
		#100;
		
		clk= 1'b1;
		Rn = 5'b00010;
		Rm = 5'b00001;
		Rd = 5'b00100;
		enable_registros = 1'b1;
		dataWrite = 64'd2;
		
		#100;
		clk=1'b0;
		Rn = 5'b00000;
		Rm = 5'b00000;
		Rd = 5'b00000;
		enable_registros = 1'b1;
		dataWrite =64'd7;
      
		#100;
		clk=1'b1;
		Rn = 5'b00010;
		Rm = 5'b00001;
		Rd = 5'b00010;
		enable_registros = 1'b1;
		dataWrite = 64'd9;
        
		// Add stimulus here

	end
      
endmodule

