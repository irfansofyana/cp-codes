var
 
a,b:integer;
 
procedure swap(var a,b:integer);
var
temp:integer;
 
begin
temp:=b;
b:=a;
a:=temp;
writeln(a,' ',b);
end;
 
begin
readln(a, b);
swap(a, b);
end.
end.