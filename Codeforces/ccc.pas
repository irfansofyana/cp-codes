var
	s: string;
	cek : boolean;
	i : integer;

begin
	write('Masukkan bilangan : '); readln(s);
	cek := true;
	i := length(s);
	while (i >= 2) and cek do begin
		if (s[i] >= s[i-1]) then begin
			cek := false;
		end
		else i := i-1;
	end;
	if (cek) then
		writeln('Bilangan ', s, ' adalah bilangan menanjak')
	else 
		writeln('Bilangan ', s, ' bukan bilangan menanjak');
end.