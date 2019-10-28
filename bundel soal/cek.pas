 uses crt, math;
 var ndig : real;
 count5 : longint;
 n, i, j, k, max : integer;
 fakt : array [1..60000] of integer;
 digit : array [0..10000] of real;

 begin
	clrscr;
 	max := 0; count5 := 0; ndig := 0.0;
 	readln(n);
 	for i:= 1 to n do
 		begin
			readln(fakt[i]);
 			if (fakt[i] > max) then max := fakt[i]; 
 		end;	
	for i:= 1 to max do begin
		writeln(log10(i));
		digit[i] := digit[i-1] + log10(i);
		writeln(digit[i]);
	end;
	for i:= 1 to n do begin
 	k:=1;
 	while k <= fakt[i] do
 	begin
 	j := k; // menghitung berapa banyak kemunculan faktor 5 dalam
	// fakt[i]
 	if (j mod 5) = 0 then
 	begin
 	while ( j mod 5) = 0 do begin
 	j := j div 5;
 	inc(count5);
 	end;
 	end;
 	inc(k);
 	end;
 ndig := ndig + digit[fakt[i]];
 end;
 writeln(floor(ndig + 1.0), ' ', count5);
 readkey;
 end.