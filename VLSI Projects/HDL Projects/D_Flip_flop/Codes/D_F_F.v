module D_F_F(Q, CLK, rst, D);
input CLK,D, rst;
output reg Q;

always @ (posedge CLK or negedge rst) begin
 if ( rst==0 )
    Q <= 0;
else
    Q <= D;
    end
endmodule
