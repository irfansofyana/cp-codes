var
    a,b:integer;

function brokoli(x,y: integer): integer;
begin
    if ((x = 0) and (y = 0)) then brokoli := 0
    else if (x > y) then 
    begin
        if (x > -y) then brokoli := brokoli(x – 1, y) + 1
        else brokoli := brokoli(x, y+1) + 1;
    end 
    else 
    begin
        if (x > -y) then brokoli := brokoli(x, y – 1) + 1
        else brokoli:= brokoli(x + 1, y) + 1;
    end;
end;
begin
    writeln('irfan');
end.