module four_to_one_mux(Y, D, S);
 input [3:0] D;
 input [1:0] S;
 output reg Y;
 integer i,j;
 reg [3:0] temp;

 always @(*) begin
 for (i=0; i<4; i=i+1) begin
      if(S==i)
      Y=D[i];
      end
     end
endmodule

