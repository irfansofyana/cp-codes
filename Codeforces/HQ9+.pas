var
	s: String;
	j,a:Integer;
	p,q:Boolean;

begin
	readln(s);
	j:=1;
	p:=false;
	q:=false;
	while (j<=Length(s)) and (not p) do 
		begin
			if (ord(s[j])>=49) and (ord(s[j])<=57) then
			begin
				q:=true;
				val(s[j],a);
				if (a=9) then
				P:=true;
			end
			else if (s[j]='H') then
				p:=true
			else if (s[j]='Q') then
				p:=true;
			j:=j+1;
		end;
	if p then
		writeln('YES')
	else
		writeln('NO');
end.