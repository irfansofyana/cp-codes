function cobain(x, y : integer):integer;
begin
	if (x = 0) then cobain := y
	else if (y = 0) then cobain := x
	else cobain := cobain(x-2, y-5);
end;

begin
	writeln(cobain(10, 10));
	writeln(cobain(30, 120))
end.