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
	while not eof do begin
		readln(s);
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
			//writeln(temp);
			while (i<=Length(temp)) do begin
				if (temp[i]='1') then begin
					k:=temp[i]+temp[i+1]+temp[i+2];
					val(k,j); ans:=ans+char(j);
					i:=i+3;
				end
				else begin
					k:=temp[i]+temp[i+1];
					val(k,j); 
					//writeln(j);
					ans:=ans+char(j);
					i:=i+2;
				end;
			end;
			writeln(ans);
		end;
	end;
end.