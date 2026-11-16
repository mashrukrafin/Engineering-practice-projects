module four_bit_comparator_struc (Y,A,B);
 input  [3:0] A;
 input  [3:0] B;
 output [2:0] Y;
 integer i,j;
 wire a1,a2,a3,a4,a5,a6,a7,a8, x1,x2,x3,x4, y1,y2,y3,y4,y5,y6,y7;
 //A>B, Y=4 OR 100;
 //A<B, Y=2 OR 010;
 //A=B, Y=1 OR 001;

 and(a8, ~A[3],B[3]);
 and(a7, A[3],~B[3]);
 or(x4, a7,a8);

 and(a6, ~A[2],B[2]);
 and(a5, A[2],~B[2]);
 or(x3, a5,a6);

 and(a4, ~A[1],B[1]);
 and(a3, A[1],~B[1]);
 or(x2, a3,a4);

 and(a2, ~A[0],B[0]);
 and(a1, A[0],~B[0]);
 or(x1, a1,a2);

 and(y7, ~x4,a6);
 and(y6, ~x4,a5);
 and(y5, ~x4,~x3,a4);
 and(y4, ~x4,~x3,a3);
 and(y3, ~x4,~x3,~x2,a2);
 and(y2, ~x4,~x3,~x2,a1);
 and(Y[0], ~x4,~x3,~x2,~x1);

 or(Y[2], y6,a7,y4,y2);
 or(Y[1], y7,a8,y5,y3);

endmodule

















