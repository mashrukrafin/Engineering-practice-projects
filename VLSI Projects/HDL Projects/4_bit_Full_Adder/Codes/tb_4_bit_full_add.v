module tb_four_bit_full_add;
reg [3:0]a,b;
reg Cin;
wire [3:0]sum;
wire Co;

four_bit_full_add uut(
  .sum(sum),
  .Co(Co),
  .a(a),
  .b(b),
  .Cin(Cin)
);

integer i,j,k;
initial begin
for (i=0; i<16; i=i+1) begin
 for (j=0; j<16; j=j+1) begin
  for (k=0; k<2; k=k+1) begin
      a=i;
      b=j;
      Cin=k;
      #10;
      $display("a=%b b=%b Cin=%b | Sum=%b Co=%b", a, b, Cin, sum, Co);
      end
     end
    end
 $finish;
end 
endmodule
  







