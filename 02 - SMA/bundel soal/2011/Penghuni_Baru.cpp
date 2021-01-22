#include <bits/stdc++.h>
using namespace std;

int r,c,p,i,j,k;
char A[110][110];
int x,y,itx,ity;

int main(){
	cin >> r >> c >> p;
	memset(A,'0',sizeof A);
	for (i=0;i<p;i++) {
		cin >> x >> y;
		x--; y--;
		A[x][y] = 'O';
	}
	itx = 0; ity = 0;
	for (i=0;i<2*r+1;i++) {
		if (i%2==0) {
			for (j=0;j<2*c+1;j++)
				if (j%2==0) cout<<'+';
				else cout<<'-';
		}
		else {
			ity = 0;
			for (j=0;j<2*c+1;j++) {
				if (j%2==0) cout<<'|';
				else {
					if (A[itx][ity]=='O') cout<<'O';
					else cout<<" ";
					ity++;
				}
			}
			itx++;
		}
		cout<<"\n";
	}
	return 0;		
}
