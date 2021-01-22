uses crt;
 
var
n,m,a,b:integer;
 
begin
readln(n,m);
 if n>=m then
 begin
 a:= n div m;
 b:= n mod m;
 writeln('masing-masing ', a, '');
 writeln('bersisa ', b,'');
 end
 else
 begin
 a:=0;
 b:=n;
 writeln('masing-masing ', a,'');
 writeln('bersisa ', b,'');
 end;
end.