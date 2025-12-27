module d_c10(
  input in,clk,rst,
  output out);
  
  parameter [3:0]A=4'b0000,B=4'b0001,C=4'b010,D=4'b0011,E=4'b0100,F=4'b0101,G=4'b0110,H=4'b0111,I=4'b1000,J=4'b1001,K=4'b1010;
  
  reg [4:0]present,next;
  
  always@(posedge clk)begin
    if(rst)
      present<=A;
    else
      present<=next;
  end
  
  always@(*)begin
    case(present)
      A:next=in?B:A;
      B:next=in?C:B;
      C:next=in?D:C;
      D:next=in?E:D;
      E:next=in?F:E;
      F:next=in?G:F;
      G:next=in?H:G;
      H:next=in?I:H;
      I:next=in?J:I;
      J:next=in?A:J;
      default:next=A;
    endcase
  end
  
  assign out=(present==J);
endmodule
  
