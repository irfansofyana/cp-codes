var
	n,i,j: Integer;

begin
	for i := 1001 to 2000 do 
		if (i mod 2 = 0) or (i mod 3 = 0 ) or (i mod 5 = 0) then inc(n);
	writeln(n);	
end.