var
	idx,n,i,j,idx2: Longint;
	keluarin,jawaban,input,cidx,cjawab: ansistring;

procedure cari1();
begin
	j:=3;
		while (input[j]<>' ') do begin
			cidx:=cidx+input[j];
			j:=j+1;
		end;
	val(cidx,idx);
end;
procedure cari2();
begin
	j:=j+1;
		while (j<=Length(input)) do begin
				cjawab:=cjawab+input[j];
				j:=j+1;
		end;
end;
procedure cari3();
begin
		j:=j+1;
		while (j<=Length(input)) do begin
			cjawab:=cjawab+input[j];
			j:=j+1;
		end;
	val(cjawab,idx2);
end;
begin
	readln(n);
	for i:=1 to n do 
		begin
			input:='';
			cidx:='';
			cjawab:='';
			readln(input);
			if (input[1]='+') then begin
				cari1;
				cari2;
				insert(cjawab,jawaban,idx+1);
			end
			else begin
				keluarin:='';
				cari1;
				cari3;				
				for j:=idx to idx+idx2-1 do 
					keluarin:=keluarin+jawaban[j];	
				writeln(keluarin);
			end;
		end;
end.