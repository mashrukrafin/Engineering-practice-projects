module tb_eight_to_three_priority_encoder;
reg  [7:0] D;
wire [2:0] Y;
integer i,j,k;
eight_to_three_priority_encoder uut(
  .Y(Y),
  .D(D) );

initial begin


 for (j=0; j<256; j=j+1) begin
      D=j;
      #10;
      $display("D=%b Y=%b", D, Y);
 end
 $finish;
end
endmodule

