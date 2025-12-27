module d_c10(
  input in,clk,rst,
  output out);
   reg[1:0]count,next;
             
  
  
  parameter [1:0]A=2'b0,B=2'b01,C=2'b10,D=2'b11;
  
  always@(posedge clk)begin
    if(rst)
      count<=A;

    else count<=next;
  end
  
  always@(*)begin
    case(count)
      A:next=in?B:A;
      B:next=in?C:A;
      C:next=in?C:D;
      D:next=in?B:A;
      default:next=A;
    endcase
  end
  assign out=(count==D)&&(in==1);
  
endmodule
  
