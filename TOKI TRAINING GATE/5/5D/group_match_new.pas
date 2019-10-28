    type
    tim = array[1..5] of integer;
     
    var
    x,s : tim;
    n,i,t : longint;
    benar : boolean;
     
    procedure p(i,j : longint; s : tim);
    var
    cek : boolean;
     
    begin
    if not benar then
    begin
    if j > n then
    begin
    inc(i);
    j := i + 1;
    end;
    if i < n then
    begin
    s[i] := s[i] + 3;
    p(i,j+1,s);
    s[i] := s[i] - 2;
    s[j] := s[j] + 1;
    p(i,j+1,s);
    s[i] := s[i] - 1;
    s[j] := s[j] + 2;
    p(i,j+1,s);
    end
    else if i = n then
    begin
    cek := true;
    for i := 1 to n do
    if x[i] <> s[i] then
    begin
    cek := false;
    break;
    end;
    if cek then benar := true;
    end;
    end;
    end;
     
    begin
    readln(t);
    repeat
    benar := false;
    fillchar(s,sizeof(s),0);
    read(n);
    for i := 1 to n do
    read(x[i]);
    readln;
    p(0,n+1,s);
    if benar then writeln('YES')
    else writeln('NO');
    dec(t);
    until (t = 0);
    end.