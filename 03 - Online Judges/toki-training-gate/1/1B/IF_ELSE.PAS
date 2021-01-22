uses crt;
 
var
N:longint; {-100000,..,100000}
 
begin
readln(N);
 
if N>0 then
 begin
  writeln('positif');
 end
else
 if N<0 then
  begin
   writeln('negatif');
  end
else
 if N=0 then
  begin
   writeln('nol');
  end;
 end.