var
	A, B: array[1..1005,1..1005] of integer;
	b1, b2, k1, k2 : integer;
	i, j, ingin , k, nilai: integer;

begin
	write('Input jumlah baris matriks A : '); readln(b1);
	write('Input jumlah kolom matriks A : '); readln(k1);
	writeln('Matriks A');
	for i := 1 to b1 do begin
		for j := 1 to k1 do begin
			if (j <> k1) then read(A[i,j])
			else readln(A[i,j]);
		end;
	end;

	write('Input jumlah baris matriks B : '); readln(b2);
	write('Input jumlah kolom matriks B : '); readln(k2);
	writeln('Matriks B');
	for i := 1 to b2 do begin
		for j := 1 to k2 do begin
			if (j <> k2) then read(B[i,j])
			else readln(B[i,j]);
		end;
	end;
	
	writeln('Operasi pada matriks :');
	writeln('1. Penjumlahan');
	writeln('2. Pengurangan');
	writeln('3. Perkalian');
	write('Masukan operasi yang diinginkan : '); readln(ingin);
	if (ingin = 1) then begin
		if (b1 = b2) and (k1 = k2) then begin
			for i := 1 to b1 do begin
				for j := 1 to k1 do begin
					if (j = k1) then writeln(A[i,j] + B[i,j])
					else write(A[i,j] + B[i,j], ' ');
				end;
			end;
		end
		else writeln('Tidak memenuhi syarat penjumlahan');
	end
	else if (ingin = 2) then begin
		if (b1 = b2) and (k1 = k2) then begin
			for i := 1 to b1 do begin
				for j := 1 to k1 do begin
					if (j = k2) then writeln(A[i,j] - B[i,j])
					else write(A[i,j] - B[i,j], ' ');
				end;
			end;
		end
		else writeln('Tidak memenuhi syarat pengurangan');
	end
	else begin
		if (k1 <> b2) then writeln('Tidak memenuhi syarat perkalian')
		else begin
			for i := 1 to b1 do begin
				for j := 1 to k2 do begin
					nilai := 0;
					for k := 1 to k1 do begin
						nilai := nilai + A[i,k] * B[k,j];
					end;
					if (j = k2) then writeln(nilai)
					else write(nilai, ' ');
				end;
			end;
		end;
	end;
end.	