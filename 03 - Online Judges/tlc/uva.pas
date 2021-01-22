var
	s,ans:ansistring;
	i,j:Integer;
	idx:Integer;
begin
	 idx:=1;
	while not eof do begin
		readln(s); ans:=''; 
		for i:=1 to Length(s) do begin
			if ((s[i]='"') and ((idx mod 2=1))) then begin 
				ans:=ans+'``';
				inc(idx);
			end
			else if (s[i]='"') then begin   
				ans:=ans+'''''' ;
				inc(idx);
			end
			else ans:=ans+s[i];
		end;
		writeln(ans);
	end;
end.

