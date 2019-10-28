uses crt;
 
var
x1,y1,x2,y2:longint; {-1000000000,..,1000000000}
p1,p2,p3:longint;
 
begin
readln(x1,y1,x2,y2);
p1:=x1-x2;
 if p1 >= 0 then
  begin
   p2:=y2-y1;
    if p2>=0 then
     begin
      p3:=p1+p2;
      writeln(p3);
     end
    else
     begin
     p3:=p1-p2;
     writeln(p3);
     end;
   end;
 if p1 < 0 then
  begin
   p2:=y2-y1;
    if p2>=0 then
     begin
     p3:=(-p1+p2);
     writeln(p3);
     end
    else
     begin
     p3:=(-p1-p2);
     writeln(p3);
     end;
  end;
end.
 