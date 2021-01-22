var
	n,i,j,ans : Longint;
	sum : real;

begin
	readln(n);
	sum := 0; ans := 0;
	for i := n downto 1 do  begin
		sum := sum+(1/i);
		if (sum>0.5) then begin
			ans := ans+1;
			sum := sum-(1/i);
		end;
	end;
	writeln(ans);
end.