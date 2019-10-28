var
	i,j: Integer;
	s:string;
begin
	readln(s);
	i:=1;
	while (s[1]<>'#') do begin
		if (s='HELLO') then writeln('Case ',i,': ','ENGLISH')
		else if (s='HOLA') then writeln('Case ',i,': ','SPANISH')
		else if (s='HALLO') then writeln('Case ',i,': ','GERMAN')
		else if (s='BONJOUR') then writeln('Case ',i,': ','FRENCH')
		else if (s='CIAO')then writeln('Case ',i,': ','ITALIAN')
		else if (s='ZDRAVSTVUJTE') then writeln('Case ',i,': ','RUSSIAN')
		else writeln('Case ',': ','UNKNOWN');
		INC(i);
	end;
end.