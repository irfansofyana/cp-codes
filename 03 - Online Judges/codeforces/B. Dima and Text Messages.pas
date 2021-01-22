var
	n,i,j,posisi: Integer;
	A: array[1..100000] of string;
	p,q:string;
	cek:Boolean;

begin
	readln(n);
	for i:=1 to n do 
		readln(A[i]);
	readln(p);
	cek:=true;
	for (i:=1 to n) do 
		begin
			posisi:=pos(A[i],n);
				if (posisi=0) then
					begin
						cek:=false;
						break;
					end;
		end;
	if (cek) then
		writeln('YES')
	else
		writeln('NO');
end.