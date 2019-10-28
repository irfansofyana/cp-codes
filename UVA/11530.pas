var
	s:ansistring;
	n,i,banyak,j: longint;
	A:array[1..26] of Integer=(1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4);
begin
	readln(n);
	for i:=1 to n do begin
		banyak:=0;
		readln(s);
		for j:=1 to Length(s) do begin
			if (s[j]=' ') then banyak:=banyak+1
			else banyak:=banyak+A[ord(s[j])-96];
		end;
		writeln('Case #',i,': ',banyak);
	end;
end.