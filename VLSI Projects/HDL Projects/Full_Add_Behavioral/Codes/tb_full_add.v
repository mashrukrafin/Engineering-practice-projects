module tb_full_add;
reg a,b,Cin;
wire sum,Co;

full_add uut(
  .sum(sum),
  .Co(Co),
  .a(a),
  .b(b),
  .Cin(Cin)
);

initial begin

    a = 0; b = 0; Cin = 0;
    #100;

    a = 0; b = 0; Cin = 1;
    #100;

    a = 0; b = 1; Cin = 0;
    #100;

    a = 0; b = 1; Cin = 1;
    #100;

    a = 1; b = 0; Cin = 0;
    #100;

    a = 1; b = 0; Cin = 1;
    #100;

    a = 1; b = 1; Cin = 0;
    #100;

    a = 1; b = 1; Cin = 1;
    #100;

    $finish;
end
endmodule


