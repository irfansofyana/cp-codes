function yolo(x,y:integer):integer;
begin
if (y = 0) then yolo:=x
else yolo:= yolo(y,x mod y)*yolo(y mod x, x mod y)*y;
end;
begin
writeln(yolo(19,5));
end.