var
	n: Integer;
	s:String;
	p: String;

begin
	readln(s);
	n:=pos('WUB',s);
	while (n<>0) do 
		begin
			if (n=1) then
				
			delete(s,n,3);
		end;
	writeln(s);
end.