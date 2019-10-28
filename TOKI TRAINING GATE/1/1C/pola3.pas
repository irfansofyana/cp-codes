var
n,k,i:byte;
 
begin
 readln(n,k);
 for i:=1 to n-1 do
 begin
  if ( i mod k = 0) then
   write('*')
   else
   write(i);
  write(#32);
 end;
 if ((n mod k)=0) then
  write('*')
  else
  writeln(n);
end.