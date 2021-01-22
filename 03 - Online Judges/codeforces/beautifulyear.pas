var 
	y,x:Integer;
	s: String;
	i,j:Integer;
	p: Boolean;
begin
	readln(y);
	i:=1;
	x:=y+1;
	while (i<=(2*y)) do 
		begin
			p:=false;
			str(x,s);
			j:=1;
			while (j<=Length(s)-1) and (not p) do 
				begin
					if (s[j]=s[j+1]) then 
						p:=true;
				end;
			if p then
				begin
					i:=i+1;
					x:=x+1;
				end
			else
				writeln(x);
		end;

end.