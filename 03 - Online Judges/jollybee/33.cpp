#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,m,i,j;
char A[105][105];

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m && A[x][y]=='.') return true;
	return false;
}

void dfs(int x,int y){
	A[x][y] = '#';
	if (cek(x-1,y)) dfs(x-1,y);
	if (cek(x+1,y)) dfs(x+1,y);
	if (cek(x,y+1)) dfs(x,y+1);
	if (cek(x,y-1)) dfs(x,y-1);
}

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n >> m;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < m ; j++)
				cin >> A[i][j];
		}
		for (i = 0 ; i < n ; i++) {
			if (A[i][0]=='.') dfs(i,0);
			if (A[i][m-1]=='.') dfs(i,m-1);
		}
		for (i = 0 ; i < m ; i++){
			if (A[0][i]=='.') dfs(0,i);
			if (A[n-1][i]=='.') dfs(n-1,i);
		}
		bool ans = false;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < m ; j++){
				if (A[i][j]=='.') {
					ans = true;
					break;
				}
			}
			if (ans) break;
		}
		cout << "Case #" << ++tc << ": " << (ans?"YA":"TIDAK") << '\n';
	}
	return 0;
}