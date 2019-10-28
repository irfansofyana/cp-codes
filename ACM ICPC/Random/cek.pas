var
	a, b, c : integer;

begin
	readln(a);
	readln(b);
	a := a * b;
	b := a + 10;
	c := a div b + a + b;
	writeln(a,' ', b,' ',c);
end.