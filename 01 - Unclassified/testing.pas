var
	ans, i, j: integer;
	res : longint;
begin
	res := 0;
for i:= 1 to 30 do 
for j := 1 to 30 do
		res := res + i + j;
writeln(res);

end.