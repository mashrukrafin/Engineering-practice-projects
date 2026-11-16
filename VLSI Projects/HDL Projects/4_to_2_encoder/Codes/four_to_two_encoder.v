module four_to_two_encoder(Y,D);
 input [3:0] D;
 output reg [1:0] Y;
 integer i,j;

 always @(*) begin
    for (i=0; i<4; i=i+1) begin
        if (D[i] == 1'b1)
            Y = i;
    end
end
endmodule
