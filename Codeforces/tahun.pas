var
	s: string;
	n,x:Integer;
	i,j,k:Integer;
	p,q: Boolean;

begin
	readln(n);
	x:=n+1;
	i:=1;
	p:=false;
	while (i<=2*n) and (not p) do 
		begin
			str(x,s);
			j:=1;
			q:=false;
				while (j<=Length(s)-1) and (not q) do 
					begin
						k:=j+1;
						while (k<=Length(s)) and (not q) do 
							begin
								if (s[j]=s[k]) then q:=true
								else
									k:=k+1;
							end;
						j:=j+1;
					end;
				if (q=false) then
					begin
						writeln(x);
						p:=true;
					end
				else
				begin
					i:=i+1;
					x:=x+1;
				end;
		end;
end.