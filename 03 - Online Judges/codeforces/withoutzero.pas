var
	n,a,b,c,d: Longint;
	s1,s2,s3,s4: string;
	i: Longint;
	p: Boolean;

begin
	readln(a);
	readln(b);
	c:=(a+b);
	str(c,s1);
	str(a,s2);
	str(b,s3);
	i:=1;
	while (i<=Length(s1)) do 
		begin
			if (s1[i]='0') then 
				delete(s1,i,1);
		end;
	val(s1,c);
	i:=1;
	while (i<=Length(s2)) do
		begin
			if (s2[i]='0') then 
				delete(s2,i,1);
		end;
	val(s2,a);
	i:=1;
	while (i<=Length(s3)) do
		begin
			if (s3[i]='0') then 
				delete(s3,i,1);
		end;
	val(s3,b);
	if (a+b=c) then
		writeln('YES')
	else
		writeln('NO');
end.