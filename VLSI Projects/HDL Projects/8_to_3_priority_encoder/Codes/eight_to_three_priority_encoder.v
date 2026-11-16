module eight_to_three_priority_encoder (Y,D);
 input [7:0] D;
 output reg [2:0] Y;
 integer i,j;
 //high to low priority. D7 to D0

 always @(*) begin
      i=8;
      for (j=7; j>=0; j=j-1) begin
         if (D[j] == 1 && i>j) begin
            Y = j;
            i=0;
        end
    end
end
endmodule
