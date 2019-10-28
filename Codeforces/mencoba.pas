var
	r,b,t,d: Longint;
	A: array[1..1000000] of Longint;

function cek(p:Longint): Boolean;
var
	j: Longint;
begin
	if (p=1) then
		cek:=false
	else
		begin
		cek:=true;
			for j:=2 to trunc(sqrt(p)) do 
				begin
					if (p mod j=0) then
						begin
							cek:=false;
							break;				
						end;			
				end;		
		end;	
end;

procedure daftar;
var
	idx: Longint;
begin
	idx:=1;
	for r:=2 to 1000000 do 
		begin
			if (cek(r)) then
				begin
				A[idx]:=r;
				inc(idx);
				end;
		end;
end;
begin
	readln(t);
	daftar;
	for b:=1 to t do 
		begin
			readln(d);
			writeln(A[d]);
		end;
end.