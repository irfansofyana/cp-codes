var
k, i, n : integer;
bil : array[1..8] of integer;
pilih : array[1..8] of integer;
procedure rec(pos, bef : integer);
var
i : integer;
begin
if(pos > k) then
begin
for i := 1 to k do
begin
if i = k then writeln(pilih[i])
else write(pilih[i], ' ');
end;
end
else
for i := bef+1 to n-(k-pos) do
begin
pilih[pos] := bil[i];
rec(pos + 1, i);
end;
end;
begin
for i := 1 to 8 do bil[i] := i;
n := 6; k:=6;
rec(1, 0);
end.