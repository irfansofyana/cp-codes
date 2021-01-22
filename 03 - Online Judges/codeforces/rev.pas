var
    n,i,maks,m: Longint;
    s: String;
    idx:Integer;
begin
    readln(n);
    if (n>0) then
        writeln(n)
    else
    begin
        maks:=0;
        str(n,s);
        m:=Length(s);
        if (((Length(s)=3) and (s[1]='-')) and (s[3]='0')) then
            begin
            delete(s,1,2);
            end
        else if (ord(s[m-1])>=ord(s[m])) then
            delete(s,m-1,1)
        else if (ord(s[m-1])<ord(s[m])) then
            delete(s,m,1);
        writeln(s);
    end;
end.