module one_to_eight_demux(Y, D, S);
 input  D;
 input [2:0] S;
 output reg [7:0] Y;
 integer i,j;

 always @(*) begin
 for (i=0; i<8; i=i+1) begin
      if(S==i)
      Y[i]=D;
      end
     end
endmodule

