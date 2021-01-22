var
	n,j: Integer;
	q: Boolean;

function cek(n:Integer): Boolean;
var
	i: Integer;
	s: string;
	p:Boolean;

begin
	str(n,s);
	i:=1;
	p:=false;
	while ((i<=Length(s)) and not p ) do
		begin
			if ((s[i]<>'4') and (s[i]<>'7')) then
				p:=true
			else
			i:=i+1;
		end;
	if p then 
		cek:=false
	else
		cek:=true;
end;

begin
	readln(n);
	if (cek(n)) then
		writeln('YES')
	else
		begin
			j:=1;
			q:=false;
			while (j<=n-1) and (not q) do 
				begin
					if (cek(j)) then
						begin
						if (n mod j=0) then
							begin
								writeln('YES');
								q:=true;
							end
						else
							j:=j+1;
						end
					else
						j:=j+1;
				end;
			if (q=false) then
				writeln('NO');
		end;
end.