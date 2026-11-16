module tb_one_to_eight_demux;
reg  D;
reg [2:0] S;
wire [7:0] Y;
integer i,j,k;
one_to_eight_demux uut(
  .Y(Y),
  .D(D),
  .S(S) );

initial begin

for (i=0; i<8; i=i+1) begin
 for (j=0; j<8; j=j+1) begin
      S=j;
      if (j==i)
      D=1;
      else D=0;

      #10;
      $display("D=%b S=%b Y=%b", D, S, Y);
      D=0;
      end
end
 $finish;
end
endmodule

