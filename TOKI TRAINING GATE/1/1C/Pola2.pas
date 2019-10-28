var
n,a,b,c:integer;
 
begin
readln(n);
for a:=1 to n do
begin
for b:=1 to a do
begin
if (c=10) then c:=0;
write(c);
c:=c+1;
end;
writeln;
end;
end.