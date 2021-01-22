var	
	n, i, it1, it2, j: integer;
	tambah1, tambah2 : integer;

begin
	readln(n);
	for i := 1 to 2*n do begin 
		if ((i = 1) or (i = 2*n)) then begin
			for j := 1 to 2*n do write('*');
			writeln;
			it1 := 2; it2 := 2*n-1;
			tambah1 := 1; tambah2 := -1;
		end
		else if (i <= n) then begin
			for j := 1 to 2*n do begin
				if ((j = 1) or (j = 2*n) or (j = it1) or (j = it2)) then write('*')
				else write(' ');
			end;
			writeln;
			if (i < n) then begin
				it1 := it1 + tambah1; 
				it2 := it2 + tambah2;
			end
			else begin
				tambah1 := -1; 
				tambah2 := 1;
			end;
		end
		else begin
			for j := 1 to 2*n do begin
				if ((j = 1) or (j = 2*n) or (j = it1) or (j = it2)) then write('*')
				else write(' ');
			end;
			writeln;
			it1 := it1 + tambah1;
			it2 := it2 + tambah2;
		end;
	end;		
end.