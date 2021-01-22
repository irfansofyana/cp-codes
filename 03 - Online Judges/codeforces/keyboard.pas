var
	A: array[1..30] of char = ('q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',':','z','x','c','v','b','n','m',',','.','/');
	i,j:Integer;
	s,s2: String;
	p:Boolean;
	c: char;
begin
	readln(c);
	readln(s);
	if (c='R') then
		begin
		s2:='';
				for i:=1 to Length(s) do 
					begin
						p:=false;
						j:=1;
						while ((j<=30) and not p) do 
							begin
								if (s[i]=A[j]) then
									p:=true
								else
									j:=j+1;
							end;
						s2:=s2+A[j-1];
					end;
		end
	else
		begin
		s2:='';
			for i:=1 to Length(s) do 
					begin
						p:=false;
						j:=1;
						while ((j<=30) and not p) do 
							begin
								if (s[i]=A[j]) then
									p:=true
								else
									j:=j+1;
							end;
					s2:=s2+A[j+1];		
		end;	
	writeln(s2);

end;
end.	