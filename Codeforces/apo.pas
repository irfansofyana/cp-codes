var
	s: string;

function banyak(k: string): Integer;
var
	i: Integer;
	frek: Integer;
begin
	frek:=0;
	for i:=1 to Length(k) do 
		if (k[i]='4') or (k[i]='7') then
			frek:=frek+1;
	banyak:=frek;
end;
function cek(n:Integer): Boolean;
var
	i: Integer;
	s: string;
	p:Boolean;

begin
	str(n,s);
	i:=1;
	p:=false;
	while ((i<=Length(s)) and not p ) do
		begin
			if ((s[i]<>'4') and (s[i]<>'7')) then
				p:=true
			else
			i:=i+1;
		end;
	if p then 
		cek:=false
	else
		cek:=true;
end;
begin
	readln(s);
	if (cek(banyak(s))) then
		writeln('YES')
	else
		writeln('NO');
end.