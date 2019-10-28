var
	s1,s2: String;
	i: Integer;
	p:Boolean;

begin
	readln(s1);
	readln(s2);

	if (Length(s1)<>Length(s2)) then
		p:=true
	else
		begin
		p:=false;
			i:=1;
			while (i<=Length(s1)) and (not p) do 
				begin
					if ((ord(s1[i])=ord(s2[i])) or (ord(s1[i])=ord(s2[i])+32)) or (((ord(s2[i])=ord(s1[i])) or (ord(s2[i])=ord(s1[i])+32))) then 
						i:=i+1
					else
						p:=true;
				end;
		end;
	if p then
	begin
		if (ord(s1[Length(s1)])>=65) and (ord(s1[Length(s1)])<=90) then
			begin
				if (ord(s2[Length(s2)])>=65) and (ord(s2[Length(s2)])<=90) then
				 	begin
				 	if (ord(s1[Length(s1)])>ord(s2[Length(s2)])) then
						writeln(1)
					else
						writeln(-1);
					end
				else
				begin
					if (ord(s2[Length(s2)])>=97) and (ord(s2[Length(s2)])<=122) then
						begin
							s2[Length(2)]:=chr(ord(s2[Length(s2)])-32);
							if (ord(s1[Length(s1)])>ord(s2[Length(s2)])) then
								writeln(1)
							else
								writeln(-1);
						end;
				end;

			end
		else
			begin
				if (ord(s2[Length(s2)])>=65) and (ord(s2[Length(s2)])<=90) then
				 	begin
				 	s2[Length(s2)]:=chr(ord(s2[Length(s2)])+32);
				 	if (ord(s1[Length(s1)])>ord(s2[Length(s2)])) then
						writeln(1)
					else
						writeln(-1);
					end
				else
					begin
						if (ord(s1[Length(s1)])>ord(s2[Length(s2)])) then
								writeln(1)
							else
								writeln(-1);
					end;
			end;
	end
	else
		writeln(0);
end.