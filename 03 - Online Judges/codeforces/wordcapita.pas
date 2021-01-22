var
	s: string;


begin
	readln(s);
	if (ord(s[1])>=97) and (ord(s[1])<=122) then 
		s[1]:=chr(ord(s[1])-32);
	writeln(s);
end.