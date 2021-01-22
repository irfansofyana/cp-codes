var
	n,i,j,x,k: int64;
	A: array[1..1000000] of Boolean;

function cekprima(p:int64): Boolean;
var
	q: Boolean;
begin
	if (p<=1) then
		cekprima:=false
	else
		begin
			j:=2;
			q:=true;
			while ((j<=trunc(sqrt(p))) and (q)) do 
				begin
					if (p mod j=0) then
						q:=false
					else
						inc(j);
				end;
		end;
end;
procedure isiarray();
var
	i: int64;
begin
	for i:=2 to 1000000 do
		begin
			if (cekprima(i)) then
				A[i]:=true
			else
				A[i]:=false; 	
		end; 
end;
begin
	readln(n);
	isiarray;
	for j:=1 to n do 
		begin
			readln(x);
			k:=trunc(sqrt(x));
			if (k*k<>x) then
				writeln('NO')
			else
				begin
					if (A[k]) then
						writeln('Yes')
					else
						writeln('NO');
				end;
		end;
end.