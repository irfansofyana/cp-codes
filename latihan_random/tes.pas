var 
hasil: ansistring; 
a,bil : integer;
temp : integer;

procedure terjemahan (x:integer; var y:integer);
begin
	if (x<=y) then
		begin
			terjemahan(x*3,y);
			temp := y div x;
			hasil := char(temp+48)+hasil;
			y:=y mod x;
		end;
end;

begin
	hasil:=''; {strinng kosong}
	a := 1; bil := 80;
	terjemahan(a,bil);
	writeln(hasil);
	writeln(bil);
end.