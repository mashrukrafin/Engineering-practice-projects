module tb_eight_to_one_mux;
reg [7:0] D;
reg [2:0] S;
wire Y;
integer i,j,k;
eight_to_one_mux uut(
  .Y(Y),
  .D(D),
  .S(S) );

initial begin
for (k=0; k<8; k=k+1) begin
      D[k]=0;
end
for (i=0; i<8; i=i+1) begin
      D[i]=1;
 for (j=0; j<8; j=j+1) begin
      S=j;
      #10;
      $display("D=%b S=%b Y=%b", D, S, Y);
      end
     end
 $finish;
end
endmodule


