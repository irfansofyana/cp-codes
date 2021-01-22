uses crt;
var
 
n,j,i:byte;
 
begin
readln(n);
  for i:=1 to n do
  begin
   for j:=i to n-1 do
   write(#32);
   for j:=1 to i do
   write('*');
   writeln;
  end;
end.