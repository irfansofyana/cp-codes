var
	fout : text;
	n , i : integer;
	x : integer;

begin
	assign(fout, 'a.txt');
	reset(fout);
	readln(fout, n);
	for i := 1 to n do begin
		readln(fout, x);
		writeln(x);
	end;
	close(fout);
end.