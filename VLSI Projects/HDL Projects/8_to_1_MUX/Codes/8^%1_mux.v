module eight_to_one_mux(Y, D, S);
 input [7:0] D;
 input [2:0] S;
 output reg Y;
 integer i,j;
 reg [7:0] temp;

 always @(*) begin
 for (i=0; i<8; i=i+1) begin
      if(S==i)
      Y=D[i];
      end
     end
endmodule

