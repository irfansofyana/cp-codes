var
	s: ansistring;
	n: int64;
begin
	readln(s);
	val(s,n);
	if ((n=0) and (s<>'0')) then writeln('BigInteger')
	else if ((n>=-128) and (n<=127)) then writeln('byte')
	else if ((n>= -32768) and (n<=32767)) then writeln('short')
	else if ((n>= -2147483648) and (n<=2147483647)) then writeln('int')
	else if ((n>= -9223372036854775808) and (n<=9223372036854775807)) then writeln('long');
end.