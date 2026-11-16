module half_adder(S, C, A, B);
input A,B;
output reg S,C;

always @(*) begin
 if (A || B) 
 begin
 if (A && B)
 begin
    S=1'b0;
    C=1'b1;
 end
 else begin
    S=1'b1;
    C=1'b0;
 end
 end
 else begin
    S=1'b0;
    C=1'b0;
end
end
endmodule
