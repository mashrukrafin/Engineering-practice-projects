 module tristate_buff(Y,A,EN);
 input A,EN;
 output reg Y;
 always @(*) 
 begin
 if (EN)
   Y=A;
 else 
   Y=1'bz;
 end
 endmodule

