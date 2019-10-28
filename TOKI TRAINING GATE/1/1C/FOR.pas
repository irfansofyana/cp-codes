uses crt;
 
var
i,jbil:integer;
bil:integer;
jml:integer;
 
begin
jml:=0;
read(jbil);
 for i:=1 to jbil do
 begin
  read(bil);
  jml:=jml+bil;
 end;
 writeln(jml);
end.