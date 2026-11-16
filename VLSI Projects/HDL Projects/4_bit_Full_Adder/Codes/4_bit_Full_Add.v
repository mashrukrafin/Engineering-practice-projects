module four_bit_full_add(sum, Co, a, b, Cin);
 input [3:0] a,b;
 input Cin;
 output [3:0]sum;
 output Co;

 wire c1;
 wire c2;
 wire c3;
 
 full_add yo0(sum[0], c1, a[0], b[0], Cin);
 full_add yo1(sum[1], c2, a[1], b[1], c1);
 full_add yo2(sum[2], c3, a[2], b[2], c2);
 full_add yo3(sum[3], Co, a[3], b[3], c3);

endmodule
