#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char A[1005][1005];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m && A[x][y]=='0') return true;
	return false;
}

void dfs(int x,int y){
	A[x][y] = 'x';
	for (int z = 0 ; z < 4; z++) {
		if (cek(x+dx[z],y+dy[z])) dfs(x+dx[z],y+dy[z]);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) 
		for (j = 0 ; j < m ; j++) 
			cin >> A[i][j];
	for (i = 0 ; i < m ; i++) if (A[0][i]=='0') dfs(0,i);
	for (i = 0 ; i < n ; i++) if (A[i][0]=='0') dfs(i,0);
	for (i = 0 ; i < m; i++) if (A[n-1][i]=='0') dfs(n-1,i);
	for (i = 0 ; i < n ; i++) if (A[i][m-1]=='0')  dfs(i,m-1);
	int ans = 0;
	/*for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++)
			cout << A[i][j];
		cout << '\n';
	}*/
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m; j++) {
			if (A[i][j]=='1') {
				int temp = 0;
				for (int z = 0 ; z < 4 ; z++) {
					if (i+dx[z]>=0 && i+dx[z]<n && j+dy[z]>=0 && j+dy[z]<m) {
						if (A[i+dx[z]][j+dy[z]]=='1' || A[i+dx[z]][j+dy[z]]=='0') temp++;
					}
				}
				ans += 4-temp;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}