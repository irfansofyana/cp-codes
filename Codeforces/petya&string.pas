var
	s1,s2: String;
	i: Integer;
	p:Boolean;

begin
	readln(s1);
	readln(s2);

	if (Length(s1)<>Length(s2)) then
		p:=false
	else
		p:=false;
		begin
			i:=1;
			while (i<=Length(s1)) and (not p) do 
				begin
					if ((ord(s1[i])=ord(s2[i])) or (ord(s1[i])=ord(s2[i])+32)) then 
						i:=i+1
					else
						p:=true;
				end;
		end;
	if p then
		writeln(0)
	else
		writeln(-1);
end.