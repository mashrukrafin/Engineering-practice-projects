module tb_D_F_F;
reg CLK, D, rst;
wire Q;
integer i,k;

D_F_F UUT (
  .Q(Q),
  .CLK(CLK),
  .D(D),
  .rst(rst) );

initial begin 
 CLK=0;
 forever #10 CLK=~CLK;
 end

initial begin
  D=0;
  rst=1;
  #2 rst=0;
  #6 rst=1;

  for (i=0; i<8; i=i+1) begin
  if (i%2==0) begin
     D=1;
  end
  else 
     D=0;
  #20;

  $display("Time=%0t RST=%b CLK=%b D=%b Q=%b ", $time,rst,CLK,D,Q);
  end

  #10 $finish;
  end 
endmodule








