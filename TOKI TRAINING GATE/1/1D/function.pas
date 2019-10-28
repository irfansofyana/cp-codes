var
bilangan:integer;
 
function faktorial(n:integer):longint;
 
var
i:integer;
bil:longint;
 
begin
bil:=1;
for i:=1 to n do
bil:=bil*i;
faktorial:=bil;
end;
 
 begin
 readln(bilangan);
  if (bilangan >=0) and (bilangan <=10) then
   begin
   writeln(faktorial(bilangan));
   end
  else
   writeln('ditolak');
  end.