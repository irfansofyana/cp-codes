var
	nama: array[1..1010] of ansistring;
	n,i,j: Integer;
	s,temp:string;
	ditemukan:Boolean;

begin
	readln(n);
	for i:=1 to n do begin
		readln(s);
		nama[i]:=s;
		if (i=1) then writeln(1)
		else begin
			j:=i; ditemukan:=false;
			while ((j>=2) and not(ditemukan)) do begin
				if (nama[j-1]>nama[j]) then
					begin
						temp:=nama[j-1];
						nama[j-1]:=nama[j];
						nama[j]:=temp;
						j:=j-1;
					end
				else begin
					ditemukan:=true;
				end;
			end;
			writeln(j);
		end;
	end;
end.