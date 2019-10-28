var
	s: string;
	i: Longint;

function cek(s: string): Boolean;
var
	k: string;
	banyak: Integer;
begin
	i:=1;
	banyak:=0;
	while ((i<=Length(s))) do 
		begin
			if (s[i]='4') or (s[i]='7')	then
				banyak:=banyak+1;
		end;	
	str(banyak,k);
	if (cek(k)) then
		cek:=true
	else
		cek:=false;
end;

begin
	readln(s);
	if (cek(s)) then
		writeln('YES')
	else
		writeln('NO');
end.
