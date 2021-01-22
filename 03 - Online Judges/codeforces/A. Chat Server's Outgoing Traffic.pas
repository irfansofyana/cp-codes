var
s: string ;
i,j,banyak,jum,tot: integer;
c: char;
ditemukan:Boolean;

begin
	banyak:=0; tot:=0;
	while not eof do begin
		readln(s);
		if (s[1]='+') then inc(banyak)
		else  if (s[1]='-') then dec(banyak)
		else begin
			ditemukan:=false; jum:=0;
			for i:=1 to Length(s) do begin
				if (s[i]=':') then ditemukan:=true
				else if ((s[i]<>':') and (ditemukan)) then inc(jum);
			end;
			tot:=tot+jum*banyak;
		end;
	end;
	writeln(tot);
end.