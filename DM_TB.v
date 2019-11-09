`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:20:37 11/08/2019
// Design Name:   DM
// Module Name:   C:/Users/Ghost/Desktop/Procesador/DM_TB.v
// Project Name:  Procesador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DM_TB;

	// Inputs
	reg [11:0] direccion;
	reg [63:0] dataWrite;
	reg memWr;

	// Outputs
	wire [63:0] dataRead;

	// Instantiate the Unit Under Test (UUT)
	DM uut (
		.direccion(direccion), 
		.dataWrite(dataWrite), 
		.memWr(memWr), 
		.dataRead(dataRead)
	);

	initial begin
		// Initialize Inputs
		direccion = 12'h00A;
		dataWrite = 64'h14;
		memWr = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

