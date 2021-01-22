var
	s,p: ansistring;
	n,i:Integer;

begin
	readln(s);
	p:='';
	if (Length(s)>=2) then 
		begin
			for i:=1 to 2 do 
				begin
					p:=p+s[Length(s)+i-2];	
				end;
				val(p,n);
				if (n mod 2=1) then
					writeln(0)
				else
				begin
				if (n mod 4=2) then
					writeln(0)
				else if (n mod 4=0) then 
					writeln(4);
				end;
		end
		else 
		begin
			val(s,n);
				if (n mod 2=1) then
				writeln(0)
				else
				begin
				if (n mod 4=2) then
					writeln(0)
				else if (n mod 4=0) then 
					writeln(4);
		end;
end;
end.