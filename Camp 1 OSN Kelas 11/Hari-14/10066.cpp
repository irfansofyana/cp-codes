#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int dp[105][105];
int A[105],B[105];
int tc;

int LCS(int x,int y){
	if (x>=n || y>=m) return 0;
	if (dp[x][y]==-1) {
		if (A[x]==B[y]) dp[x][y] = LCS(x+1,y+1)+1;
		else dp[x][y] = max(LCS(x+1,y),LCS(x,y+1));
	}
	return dp[x][y];
}

int main(){
	cin.tie(0);
	while (cin >> n >> m && n!=0 && m!=0) {
		for (i = 0 ; i < n ; i++) cin >> A[i];
		for (i = 0 ; i < m ; i++) cin >> B[i];
		memset(dp,-1,sizeof dp);
		cout << "Twin Towers #" << ++tc << endl;
		cout << "Number of Tiles : " << LCS(0,0) << endl;
		cout << endl;
	}
	return 0;
}