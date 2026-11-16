module tb_four_to_two_encoder;
reg  [3:0] D;
wire [1:0] Y;
integer i,j,k;
four_to_two_encoder uut(
  .Y(Y),
  .D(D) );

initial begin

for (i=0; i<4; i=i+1) begin
   D[i]=0;
end

 for (j=0; j<4; j=j+1) begin
      D[j-1]=0;
      D[j]=1;
      #10;
      $display("D=%b Y=%b", D, Y);
 end
 $finish;
end
endmodule

