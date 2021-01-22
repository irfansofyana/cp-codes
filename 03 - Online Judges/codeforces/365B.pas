var
	n,i,j,maks : Longint;
	A: array[1..100005] of Longint;
	ans : array[1..100005] of Longint;
	putus : Boolean;

begin
	readln(n);
	putus := false;
	for i:=1 to n do begin
		read(A[i]);
		if (i<=2) then begin
			ans[i] := i;
		end
		else begin
			if ((A[i]=A[i-1]+A[i-2]) and (not putus)) then begin
				ans[i] := ans[i-1]+1;
			end
			else if ((A[i]=A[i-1]+A[i-2]) and (putus)) then begin
				ans[i] := 3;
				putus := false;
			end
			else if ((A[i]<>A[i-1]+A[i-2])) then begin
				ans[i] := ans[i-1];
				putus := true;
			end;
		end;
	end;
	readln;
	for i:=1 to n do begin
		if (i=1) then maks:=ans[i]
		else if (ans[i]>maks) then maks := ans[i];
	end;
	writeln(maks);
end.