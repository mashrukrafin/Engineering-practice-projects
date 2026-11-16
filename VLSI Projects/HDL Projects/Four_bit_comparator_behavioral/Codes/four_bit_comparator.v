module four_bit_comparator_behav (Y,A,B);
 input [3:0] A;
 input [3:0] B;
 output reg [2:0] Y;
 integer i,j;
 //A>B, Y=4 OR 100;
 //A<B, Y=2 OR 010;
 //A=B, Y=1 OR 001;

 always @(*) begin

         if (A>B) begin
           Y=4;
         end
         else if (A<B) begin
           Y=2;
         end
         else begin
           Y=1;
        end
end
endmodule
