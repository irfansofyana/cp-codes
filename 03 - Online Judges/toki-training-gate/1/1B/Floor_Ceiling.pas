uses crt;
 
var
 
N:real;
a,b:longint;
c:longint;
 
 
begin
readln(N);
 if N>0 then
  begin
  a:=trunc(N);
  b:=trunc(N)+1;
  writeln(a,' ',b);
  end
 else
 if N=0 then
  begin
  a:=0;
  b:=0;
  writeln(a,' ',b);
  end
 else
  if N<0 then
   begin
   a:=trunc(N)-1;
   b:=trunc(N);
   writeln(a,' ',b);
   end;
end.