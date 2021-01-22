var
n:longint;
 
procedure tulisjawaban(x:longint );
 
begin
 if x<=9 then
  writeln('satuan')
 else
 if x<=99 then
  writeln('puluhan')
 else
 if x<=999 then
  writeln('ratusan')
 else
 if x<=9999 then
  writeln('ribuan')
 else
 if x<=99999 then
  writeln('puluhribuan');
end;
 
begin
 
 while not eof(input) do
 begin
 readln(n);
 tulisjawaban(n);
 end;
end.