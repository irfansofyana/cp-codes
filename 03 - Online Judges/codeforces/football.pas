var
	s: string;
	j:Integer;
	banyak1:Integer;
	p: Boolean;

begin
	readln(s);
	banyak1:=1;
	p:=false;
	j:=2;
	while (j<=Length(s)) and (not p) do 
		begin
			if (s[j]=s[j-1]) then
				begin
					banyak1:=banyak1+1;
				end;
			if (s[j]<>s[j-1]) then
				begin
					if (banyak1>=7) then 
						p:=true
					else
						banyak1:=1;
				end;
			j:=j+1;
		end;
	if p then
		writeln('YES')
	else
		begin
		if (banyak1>=7) then
			writeln('YES')
		else
			writeln('NO');
		end;
end.