var
	A, B, smt : array[1..1000, 1..1000] of integer;
	n, i, j, k, ans : integer;
	cek : boolean;

procedure putar();
var
	i, j : integer;

begin
	for i := 1 to n do 
		for j := 1 to n do 
			smt[i,j] := A[n+1-j, i];
	for i := 1 to n do 
		for j := 1 to n do
			A[i,j] := smt[i,j];
end;

begin
	write('Masukan nilai N: '); readln(n);
	writeln('Matriks A');
	for i:= 1 to n do begin
		for j := 1 to n do begin
			if (j = n) then readln(A[i,j])
			else read(A[i,j]);
		end;
	end;
	writeln('Matriks B');
	for i:= 1 to n do begin
		for j := 1 to n do begin
			if (j = n) then readln(B[i,j])
			else read(B[i,j]);
		end;
	end;
	i := 0; cek := true;
	while (i <= 3) and cek do begin
		for j := 1 to n do 
			for k := 1 to n do 
				if (A[j,k]<>B[j,k]) then cek := false;
		if (cek) then begin
			ans := i*90;
			cek := false;
		end
		else begin
			cek := true;
			putar();
			i := i+1;
		end;	
	end;
	writeln('Matriks B merupakan Matriks A yang diputar ', ans, ' derajat');
end.