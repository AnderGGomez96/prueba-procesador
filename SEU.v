`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:23:09 11/07/2019 
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
    input [25:0] address,
    input [1:0] seu,
    output [63:0] bus_out
    );
	 reg [63:0] bus;
	 always @ (address, seu)
	 begin
		 case(seu)
		 00://Aluimmediate
		 begin
			bus<={52'b0,address[21:10]};
		 end
		 01://DT_Address
		 begin
			bus<={{55{address[20]}},address[20:12]};
		 end
		 10:
		 begin //Branch_Address
			bus<={{36{address[25]}},address};
		 end
		 11: //Cond_Branch_Address
		 begin
			bus<={{43{address[23]}},address[23:5],2'b00};
		 end
		 endcase
	 end
	 assign bus_out= bus;
endmodule
