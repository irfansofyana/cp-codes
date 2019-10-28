var
	start,n,i,j: Longint;
	s: array[1..100000] of string;
	p: string;
	cek: Boolean;	

begin
	readln(n);
	for i:=1 to n do 
		begin
			readln(s[i]);
		end;
	j:=1;
	while (s[1][j]=s[2][j]) do
	begin 
		inc(j);
	end;
	start:=j-1;
	if (start=0) then
		writeln(0)
	else
	begin
	p:='';
	for i:=1 to start do 
		p:=p+s[1][i];

	cek:=true;
	while (cek) do 
		begin
			for j:=3 to n do 
				begin
					if (pos(p,s[j])=0) then
						begin
							delete(p,Length(p),1);
							cek:=false;
							break;
						end
				end;
			if (cek=false) then
				cek:=true
			else
				cek:=false;
		end;
	writeln(Length(p));
	end;
end.