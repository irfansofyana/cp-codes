var i, j, tmp, k : longint;
ans, n : longint;
begin
for k := 2 to 1000 do begin 
n:=k;
i := 2; ans := 1;
while (n > 1) do begin
tmp := n; j := 0;
while (tmp mod i = 0) and (tmp >0) do begin
tmp := tmp div i;
inc(j);
end;
ans := ans*(j+1); n := tmp; inc(i);
end;
if (ans = 30) then writeln(k);
end;
end.