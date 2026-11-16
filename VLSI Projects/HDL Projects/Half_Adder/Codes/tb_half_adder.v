module tb_half_adder;
reg A,B;
wire S,C;

 half_adder uut(
 .A(A),
 .B(B),
 .S(S),
 .C(C)
 );

 initial 
 begin
 A=0;
 B=0;
 
 #100 A=1'b1;
 #100 B=1'b1;
 #100 A=1'b0;
 #100 B=1'b0;

 $finish;
 end
endmodule
