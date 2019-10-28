var
	n,x,max: int64;
	i: Integer;
	s: string;

begin
	readln(n);
	str(n,s);
	max:=0;
	if (n>0) then
	begin
	for i:=1 to Length(s) do 
		begin
			delete(s,i,1);
			val(s,x);
				if (x>max) then
					max:=x;
		end;
	end
	else
	begin
		for i:=2 to Length(s) do
			begin
				delete(s,i,1);
				val(s,x);
					if (x>max) then
						max:=x; 	
			end; 

	end;
	if (max>n) then
		writeln(max)
	else
		writeln(n);
end.
