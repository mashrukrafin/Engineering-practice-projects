module tb_tristate_buff;

reg A;
reg EN;
wire Y;

tristate_buff uut(
    .A(A),
    .EN(EN),
    .Y(Y)
);

initial begin
    A = 0;
    EN = 0;
    #10;

    A = 1;
    EN = 0;
    #10;

    A = 1;
    EN = 1;
    #10;

    A = 0;
    EN = 1;
    #10;

    $finish;
end

endmodule
