var
	i: Integer;
	s:ansistring;
begin
	readln(s);
	i:=1;
	while ((s<>'#')) do begin
		if (s='HELLO') then writeln('Case ',i,': ','ENGLISH')
		else if (s='HOLA') then writeln('Case ',i,': ','SPANISH')
		else if (s='HALLO') then writeln('Case ',i,': ','GERMAN')
		else if (s='BONJOUR') then writeln('Case ',i,': ','FRENCH')
		else if (s='CIAO')then writeln('Case ',i,': ','ITALIAN')
		else if (s='ZDRAVSTVUJTE') then writeln('Case ',i,': ','RUSSIAN')
		else writeln('Case ',i,': ','UNKNOWN');
		inc(i);
		readln(s);
	end;
end.