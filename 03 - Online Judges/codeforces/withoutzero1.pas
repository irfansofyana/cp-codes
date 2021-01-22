var
	a,b,c,d,e,f,i: longint;
	s1,s2,s3,s4,s5,s6: string;

begin
	readln(a);
	readln(b);
	c:=a+b;
	s4:='';
	s5:='';
	s6:='';
	str(a,s1);
	str(b,s2);
	str(c,s3);
	for i:=1 to length(s1) do 
		begin
			if (s1[i]<>'0') then
				s4:=s4+s1[i];
		end;
	val(s4,d);

	for i:=1 to length(s2) do 
		begin
			if (s2[i]<>'0') then
				s5:=s5+s2[i];
		end;
	val(s5,e);

	for i:=1 to length(s3) do 
		begin
			if (s3[i]<>'0') then
				s6:=s6+s3[i];
		end;
	val(s6,f);
	if ((d+e=f)) then
		writeln('YES')
	else
		writeln('NO');
end.