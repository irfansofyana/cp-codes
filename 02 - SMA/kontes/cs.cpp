#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char A[105][105];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m && A[x][y]=='-') return true;
	return false;
}

void dfs(int x,int y){
	A[x][y] = '#';
	for (int z =0 ; z < 4 ;z++) {
		if (cek(x+dx[z],y+dy[z])) {
			dfs(x+dx[z],y+dy[z]);
		} 
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int tc = 0;
	while (cin >> n >> m){
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < m; j++) {
				cin >> A[i][j];
			}
		}
		int ans = 0;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < m ; j++) {
				if (A[i][j]=='-') {
					ans++;
					dfs(i,j);
				}
			}
		}
		cout << "Case " << ++tc << ": " << ans << '\n';	
	}
	return 0;
}