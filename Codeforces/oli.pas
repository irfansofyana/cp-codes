var
	n,i,posisi: Integer;
	A: array[1..100000] of string;
	p:string;
	cek:Boolean;

begin
	readln(n);
	for i:=1 to n do 
		readln(A[i]);
	readln(p);
	cek:=true;
	for i:=1 to n do 
		begin
			posisi:=pos(A[i],p);
				if (posisi=0) then
					begin
						cek:=false;
						break;
					end;
		end;
	if (cek) then
		writeln('yes')
	else
		writeln('no');
end.