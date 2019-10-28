var
	fin, fout : text;
	s : string;

begin
	assign(fin, 'inp.txt');
	reset(fin);
	assign(fout, 'out.txt');
	rewrite(fout);
	while not EOF(fin) do begin
		readln(fin, s);
		writeln(fout, s);
	end;
	close(fin);
	close(fout);
end.