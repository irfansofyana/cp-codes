program apa;

//type arr = array[1..100] of integer;

var
//	a : arr;
	fin : text;
	n , x, i, idx: integer;
	arr : array[1..1000] of integer;

begin
	//writeln('coba');
	assign(fin, 'inp.txt');
	reset(fin);
	readln(fin, n);
	idx := 1;
	for i := 1 to n do begin
		readln(fin, x);
		if (x mod 2 = 0) then begin
		arr[idx] := x;
		idx := idx + 1;
		end;
	end;
	close(fin);
	assign(fin, 'inp.txt');
	rewrite(fin);
	for i := 1 to idx-1 do begin
		writeln(arr[i]);
		writeln(fin, arr[i]);
	end;
	close(fin);
end.