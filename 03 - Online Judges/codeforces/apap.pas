var
	n,i,maks,m: Longint;
	s: String;
	idx:Integer;
begin
	readln(n);
	if (n>0) then
		writeln(n)
	else
	begin
		maks:=0;
		str(n,s);
		for i:=2 to Length(s) do
		begin
		 	val(s[i],m);
		 	if (m>=maks) then
		 		begin
		 			idx:=i;
		 			maks:=m;
		 		end;
		end;
		delete(s,idx,1);
		val(s,n);
		writeln(n);

	end;
end.