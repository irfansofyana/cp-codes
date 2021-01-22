var
	n: Integer;
	i : Integer;
	s: string;
	a,b,c: Integer;

begin
	readln(n);
	readln(s);

	a:=0;
	b:=0;
	c:=0;
	for i:=1 to n do 
		begin
			case (i mod 3) of
			0: if (s[i]='C') then a:=a+1;
			1: if (s[i]='A') then a:=a+1;
			2: if (s[i]='B') then a:=a+1;
			end;
			case (i mod 4) of 
			0: if (s[i]='C') then b:=b+1;
			1: if (s[i]='B') then b:=b+1;
			2: if (s[i]='A') then b:=b+1;
			3: if (s[i]='B') then b:=b+1;
			end;
			case (i mod 6) of 
			0: if (s[i]='B') then c:=c+1;
			1: if (s[i]='C') then c:=c+1;
			2: if (s[i]='C') then c:=c+1;
			3: if (s[i]='A') then c:=c+1;
			4: if (s[i]='A') then c:=c+1;
			5: if (S[i]='B') then c:=c+1;
			end;
		end;
	if (a=b) and (b=c) then 
		begin
			writeln(a);
			writeln('Adrian');
			writeln('Bruno');
			writeln('Candy');
		end
	else
	if ((a=b) and (b<>c)) then 
		begin
			writeln(a);
			writeln('Adrian');
			writeln('Bruno');
		end
	else
	if ((a=c) and (b<>c)) then 
		begin
			writeln(a);
			writeln('Adrian');
			writeln('Candy');
		end
	else
	if ((b=c) and (a<>b)) then
		begin
			writeln(b);
			writeln('Bruno');
			writeln('Candy');
		end
	else
		if (a>b) then 
			begin
				if (c>a) then 
					begin
						writeln(c);
						writeln('Candy');
					end
				else
					begin
						writeln(a);
						writeln('Adrian');
					end;
			end
		else
			begin
				if (c>b) then 
					begin
						writeln(c);
						writeln('Candy');
					end
				else
					begin
						writeln(b);
						writeln('Bruno');
					end;
			end;
end.