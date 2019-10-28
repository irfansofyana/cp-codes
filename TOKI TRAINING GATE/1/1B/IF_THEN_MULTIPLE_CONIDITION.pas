uses crt;
 
var
N:longint; {-100000,..,100000}
 
begin
readln(N);
 if (N>0) and ( N mod 2= 0) then
  begin
   writeln(N);
  end;
end.