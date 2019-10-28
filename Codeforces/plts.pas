var
	n, k : integer;
	hasil : integer;


procedure cetak(n, k: integer);
var
	i, j : integer;
	x : integer;

begin
	x := k;
	for i := 1 to n do begin
		for j := 1 to i do begin
			write(x);
			x := x+1;
			if (x > 9) then x := 0;
		end;
		writeln;
	end;
end;

begin
	n := 3; k := 6;
	cetak(k, n);
end.