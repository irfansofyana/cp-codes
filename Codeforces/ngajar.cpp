var
	a, b : integer;

function x(a:integer):integer;

begin
	x := a*a;
end;

begin
	readln(a);
	writeln(x(a));
end.