var
	n,i,j: Longint;
	A: array[1..100000] of ansistring;
	bener,p: ansistring;

begin
	readln(n);
	bener:='<3';
	for i:=1 to n do 
		begin
			readln(A[i]);
			bener:=bener+A[i]+'<3';
		end;
	readln(p);
	j:=1;
	for i:=1 to Length(p) do 
		begin
			if (p[i]=bener[j]) then
				j:=j+1;
		end;
	if (j=Length(bener)) then
		writeln('yes')
	else
		writeln('no');
end.