var
	j:Integer;
	s: String;

begin
	readln(s);
	if ((ord(s[1])>=65) and (ord(s[1])<=90)) then
		begin
			for j:=2 to Length(s) do 
				begin
					if ((ord(s[j])>=65) and (ord(s[j])<=90)) then
						s[j]:=chr(ord(s[j])+32);
				end;
		end
	else
		begin
			S[1]:=chr(ord(s[1])-32);
			for j:=2 to Length(s) do 
				begin
					if ((ord(s[j])>=65) and (ord(s[j])<=90)) then
						s[j]:=chr(ord(s[j])+32)
					else
						s[j]:=chr(ord(s[j])-32);
				end;
		end;
	writeln(s);
end.