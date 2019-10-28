var
	s: String;
	n,i,x,o,j: Integer;
	p: Boolean;

begin
	readln(n);
	p:=true;
	for i:=1 to n do 
		begin
			readln(s);
			j:=1;
			x:=0;
			o:=0;
			while (j<=n) do 
				begin
					if (s[j]='x') then x:=x+1
					else if (s[j]='o') then o:=o+1;
					j:=j+1;
				end;
			if (x mod 2=1) then
				p:=false;
		end;
	if p then
		writeln('YES')
	else
		writeln('NO');
end.