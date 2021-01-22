var
	i, tot, n : longint;
	pa, pb, pab : longint;
	a, b : longint;

begin
	i := 0; tot := 0;
	n := 1000;
	a := 2; b := 3; pa := 1; pb := 2; pab := 3;
	while (i < n) do begin
		if (i mod a = 0) and (i mod b = 0) then
			tot := tot + pab
		else if (i mod a = 0) then
			tot := tot + pa
		else if (i mod b = 0) then
			tot := tot + pb;
		inc(i);
	end;
	writeln(tot);
end.
