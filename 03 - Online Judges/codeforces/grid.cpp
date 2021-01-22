#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
char A[505][505];
int dp[505][505];
bool visit[505][505];
int ans;

bool cek(int x,int y,int z){
	if (x>=0 && x<n && y>=0 && y<m && (!visit[x][y] || (z<dp[x][y]))) return true;
	return false;
}

void jelajah(int x,int y,int langkah){
	dp[x][y] = min(dp[x][y],langkah);
	visit[x][y] = true;
	if (cek(x+(int)A[x][y]-'0',y,dp[x][y]+1)) jelajah(x+(int)A[x][y]-'0',y,dp[x][y]+1);
	if (cek(x-(int)A[x][y]+'0',y,dp[x][y]+1)) jelajah(x-(int)A[x][y]+'0',y,dp[x][y]+1);
	if (cek(x,y+(int)A[x][y]-'0',dp[x][y]+1)) jelajah(x,y+(int)A[x][y]-'0',dp[x][y]+1);
	if (cek(x,y-(int)A[x][y]+'0',dp[x][y]+1)) jelajah(x,y-(int)A[x][y]+'0',dp[x][y]+1);
}

int main(){
	OPTIMASI
	cin >> n >> m;
	for (i = 0 ; i < n; i++) {
		for (j = 0; j < m ;j++){
			cin >> A[i][j];
			dp[i][j] = 1000000000;
		}
	}
	memset(visit,false,sizeof visit);
	jelajah(0,0,0);
	if (dp[n-1][m-1]==1000000000) cout << "IMPOSSIBLE" << '\n';
	else cout << dp[n-1][m-1] << '\n';
	return 0;
}