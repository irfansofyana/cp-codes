var
	s,temp,ans,p,k: string;
	i,j: Integer;

function pembalik(k:string): string;
var
	c: Integer;
	l:string;
begin
	l:='';
	for c:=Length(k) downto 1 do begin
		l:=l+k[c];
	end;
	pembalik:=l;
end;

begin
	readln(s);
	while not eof do begin
		if (((ord(s[1])>=65) and (ord(s[1])<=90)) or ((ord(s[1])>=97) and (ord(s[1])<=122))) then begin
			temp:='';
			for i:=1 to Length(s) do begin
				str(ord(s[i]),p);
				temp:=temp+p;
			end;
			ans:=pembalik(temp);
			writeln(ans);
		end
		else begin
			i:=1; temp:=pembalik(s); ans:='';
			while (i<=Length(temp)) do begin
				if (s[i]='1') then begin
					k:=s[i]+s[i+1]+s[i+2];
					val(k,j); ans:=ans+char(j);
					i:=i+3;
				end
				else begin
					k:=s[i]+s[i+1];
					val(k,j); ans:=ans+char(j);
					i:=i+2;
				end;
			end;
			writeln(ans);
		end;
		readln(s);
	end;
end.