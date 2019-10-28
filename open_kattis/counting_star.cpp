#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char A[105][105];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};

bool cek(int x,int y){
	return (x>=0 && x<n && y>=0 && y < m && A[x][y] == '-');
}
void DFS(int x,int y){
	A[x][y] = '#';
	for (int z = 0 ; z < 4 ; z++) {
		if (cek(x+dx[z],y+dy[z])) DFS(x+dx[z],y+dy[z]);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int tc =0 ;
	while (cin >> n >> m){
		for (i = 0 ; i < n ; i++)
			for (j = 0; j < m ; j++) {
				cin >> A[i][j];
			}
		int ans = 0;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < m ; j++) {
				if (A[i][j] == '-') {
					ans++;
					DFS(i,j);
				}
			}
		}	
		cout << "Case " << ++tc << ": " << ans << '\n';
	}
	return 0;
}