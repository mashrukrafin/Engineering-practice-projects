module tb_four_bit_comparator_behav;
reg  [3:0] A;
reg  [3:0] B;
wire [2:0] Y;
integer i,j,k;
four_bit_comparator_behav uut(
  .Y(Y),
  .A(A),
  .B(B) );

initial begin

 for (j=0; j<16; j=j+1) begin
      A=j;
 for (i=0; i<16; i=i+1) begin
      B=i;
      #10;
      $display("A=%b B=%b Y=%b", A, B, Y);
      end
end
 $finish;
end
endmodule

