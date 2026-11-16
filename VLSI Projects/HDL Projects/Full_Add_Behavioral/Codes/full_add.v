 module full_add(sum, Co, a, b, Cin);
 input a,b,Cin;
 output reg sum, Co;
 reg temp;
 always @(*) begin
 temp = a^b; //temp is temporary variable like int, char in c
 sum = temp^Cin;
 Co = (Cin & temp) | (a & b);
 end
 endmodule
