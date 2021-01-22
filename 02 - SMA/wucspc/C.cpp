#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int k;
bool A[15][15];
int dx[]={0,0,1,-1};
int dy[]={-1,1,0,0};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n >> m;
	memset(A,false,sizeof A);
	for (i = 0 ; i < m ; i++) {
		int x,y;
		cin >> x >> y;
		x--; y--;
		A[x][y] = true;
	}
	cin >> k;
	while (k--) {
		int x,y;
		cin >> x >> y;
		x--; y--;
		if (A[x][y]==false) A[x][y] = true;
		else A[x][y] = false;
		for (i = 0 ; i < 4 ; i++) {
			if (dx[i]+x>=0 && dx[i]+x<n && dy[i]+y>=0 && dy[i]+y<n) {
				if (A[dx[i]+x][dy[i]+y]==true) A[dx[i]+x][dy[i]+y] = false;
				else A[dx[i]+x][dy[i]+y] = true;
			}
		}
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				if (A[i][j]) break;
			}
			if (j!=n) break;
		}
		if (i==n) {
			puts("SELESAI"); return 0;
		}
	}
	puts("LELAH");
	return 0;
}