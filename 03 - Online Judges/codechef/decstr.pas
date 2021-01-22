    const
    a='abcdefghijklmnopqrstuvwxyz';
    b='zyxwvutsrqponmlkjihgfedcba';
    var
    T,K,cv,i:byte;
    begin
        Readln(T);
        for cv:=1 to T do
            begin
                Readln(K);
                if K<=25 then begin
                    for i:=K+1 downto 1 do write(a[i]);
                    writeln;
                    end
     
                 else
                if K mod 25 <>0 then
                    begin
                    for i:=(K mod 25)+1 downto 1 do write(a[i]);
                    for i:=K div 25 downto 1 do write(b);
                    writeln;
                    end
     
                else
                begin
                    for i:=K div 25 downto 1 do write(b);
                    writeln;
                end;
             end;
    end. 