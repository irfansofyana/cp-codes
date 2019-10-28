var
	i:integer;
	s,l:string;
	sum1,sum2:Integer;
	hasil:real;
begin
	while not eof do begin
		readln(s);
		readln(l); 
		sum1:=0; sum2:=0;
		for i:=1 to Length(s) do begin
			if ((ord(s[i])>=65) and (ord(s[i])<=90)) then begin
				sum1:=sum1+ord(s[i])-64;				
			end
			else if ((ord(s[i])>=97) and (ord(s[i])<=122)) then begin
				sum1:=sum1+ord(s[i])-96;	
			end;
		end;
		for i:=1 to Length(l) do begin
			if ((ord(l[i])>=65) and (ord(l[i])<=90)) then begin
				sum2:=sum2+ord(l[i])-64;				
			end
			else if ((ord(l[i])>=97) and (ord(l[i])<=122)) then begin
				sum2:=sum2+ord(l[i])-96;	
			end;
		end;
		if ((sum1 mod 9=0)) then sum1:=9
		else sum1:=(sum1 mod 9);
		if ((sum2 mod 9=0)) then sum2:=9
		else sum2:=(sum2 mod 9);
		
		if (sum1<sum2) then hasil:=(sum1/sum2)*100
		else hasil:=(sum2/sum1)*100;
		writeln(hasil:0:2,' %');
	end;
end.