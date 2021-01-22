var
	n, i, j, tsal: longint;
	awal : array[1..205] of boolean;
	akhir : array[1..205] of longint;

procedure cobain();
var
	i,j : longint;

begin
	tsal := 1;
	for i := 2 to n do awal[i] := true;
	for i := 2 to n do begin
		if (awal[i]) then begin
			j := i*i;
			while (j <= n) do begin
				awal[j] := false;
				j := j + i;
			end;
			akhir[tsal] := i;
			inc(tsal);
		end;
	end;
end;

begin
	readln(n);
	cobain();
	writeln(akhir[39]);
end.
