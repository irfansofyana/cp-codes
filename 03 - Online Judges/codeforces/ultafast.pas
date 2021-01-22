var
	s1,s2,s3: string;
	i,a,b,c: Integer;

begin
	readln(s1);
	readln(s2);
	s3:='';
	for i:=Length(s1) downto 1 do 
		begin
			val(s1[i],a);
			val(s2[i],b);
			c:=(a xor b);
			if (c=1) then
				s3:='1'+s3
			else if (c=0) then
				s3:='0'+s3;
		end;
	writeln(s3);
end.