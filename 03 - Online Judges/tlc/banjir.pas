var
	n,m,i,j,banyak,t,k,l,idx:Integer;
	A: array[1..100,1..100] of char;
	dx:array[1..8] of Integer=(1,-1,0,0,-1,-1,1,1);
	dy:array[1..8] of Integer=(0,0,-1,1,-1,1,-1,1);
	dikunjungi:array[1..100,1..100] of Integer; 
	kena: array[1..100,1..100] of Integer;
	ans: Boolean;
procedure dfs(x,y:Integer);
var
	z,temp1,temp2: Integer;
begin
	for z:=1 to 8 do begin
		if (((x+dx[z]>=1) and (x+dx[z]<=n)) and ((y+dy[z]>=1) and (y+dy[z]<=m))) then begin
			if ((dikunjungi[x+dx[z],y+dy[z]]=0) and (A[x+dx[z],y+dy[z]]<>'#') ) then begin
				temp1:=x+dx[z];
				temp2:=y+dy[z];
				dikunjungi[x+dx[z],y+dy[z]]=dikunjungi[x+dx[z],y+dy[z]]+1;
 				dfs(temp1,temp2);
			end;
		end;
	end;
end;
begin
	readln(t);
	for k:=1 to t do begin
		readln(n,m); ans:=true;
		fillchar(kena,sizeof(kena),0);
		fillchar(A,sizeof(A),'0');
		fillchar(dikunjungi,sizeof(dikunjungi),0);
		for i:=1 to n  do begin
			for j:=1 to m do begin
				read(A[i,j]);
			end;
			readln;
		end;
		for i:=1 to m do begin
			if (A[1,i]<>'#') then begin
				dfs(1,i);
			end;
		end;
		for i:=1 to m do begin
			if (A[n,i]<>'#') then begin
				dfs(n,i);
			end;
		end;
		for i:=1 to n do begin
			if (A[i,1]<>'#') then begin
				dfs(1,i);
			end;
		end;
		for i:=1 to n do begin
			if (A[i,n]<>'#') then begin
				dfs(i,n);
			end;
		end;
		for i:=1 to n do begin
			for j:=1 to m do begin
				if (kena[i,j]=0) then begin
					ans:=false;
					break;
				end;
			end;
			if (not(ans)) then break;
		end;
		if (ans) then writeln('YA')
		else writeln('TIDAK');
	end;
end.