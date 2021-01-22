var
	fin, fout : text;
	n : integer;

begin
	assign(fin, 'inp.dat');
	reset(fin);

	assign(fout, 'out.txt');
	rewrite(fout);

	readln(fin, n);
	writeln(fout, n);
	
	close(fin);
	close(fout);
end.