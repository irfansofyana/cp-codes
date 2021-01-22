var
	A,jumlah: array[0..100] of Integer;
	n,m,k,i,penghasilan: Integer;

begin
	readln(n,m);
	jumlah[0]:=0;
	for i:=1 to n do 
		begin
		if (i<>n) then
			read(A[i])
		else
			readln(A[i]);
		jumlah[i]:=jumlah[i-1]+A[i];
		end;
	readln(k);
	if (k<n) then
		begin
			penghasilan:=jumlah[k];
			writeln(penghasilan);
		end
	else if (k=n) then
		begin
			penghasilan:=jumlah[k];
			writeln(penghasilan);
		end
	else if (k>n) then
		begin
			penghasilan:=jumlah[n]-(m*(k-n));
			if (penghasilan<0) then
				writeln('Pak Dengklek Rapopo')
			else
				writeln(penghasilan);
		end;

end.