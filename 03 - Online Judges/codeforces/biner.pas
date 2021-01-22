var
	n,idx,maks:int64;
	i:Integer;
	s,k:ansistring;

function pengubah(l:string): int64;
var
	i,jumlah,k,b: Integer;
begin
	jumlah:=0;
	k:=1;
	for i:=Length(l) downto 1 do 
		begin
			jumlah:=jumlah+k*(ord(l[i])-48);
			k:=k*2;
		end;
	pengubah:=jumlah;
end;

begin
	readln(s);
	maks:=0;
	k:=s;
	for i:=1 to Length(s) do 
		begin
			delete(s,i,1);
		
					if (pengubah(s)>maks) then
					begin
						maks:=pengubah(s);
						idx:=i;
					end;
			s:=k;
		end;
	delete(s,idx,1);
	writeln(s);
end.