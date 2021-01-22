var
	a: Integer;

function f(a,b,c:longint):longint;
	var i:integer;
	begin
		if b=0 then f:=1 else
		begin
		f := 0;
		for i:=a to c do f := f + f(i+1,b‐1,c);
		end;
	end;
	
function g(x:longint):longint;
	var i:integer;
	begin
	g := 0;
	for i:=0 to x do g := g + f(1,i,x);
	end;

begin
	writeln(f(1,1,3));
end.