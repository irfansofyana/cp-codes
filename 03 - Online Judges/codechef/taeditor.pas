var
	s,k,p,q:ansistring;
	n,i,j,m,l: Longint;


begin
	readln(n);
	for i:=1 to n do 
		begin
			k:='';
			readln(k);
			p:='';
			q:='';
			val(k[3],m);
			m:=m+1;
			val(k[5],m);
			for j:=4 to length(k) do 
				p:=p+k[j];
			if (k[1]='+') then
				begin
					insert(p,s,m);
				end
			else begin
				if (k[1]='?') then begin
						for j:=m to	 m+ do 
							q:=q+k[j];   
					end;
				writeln(q);
			end;
		end;
end.