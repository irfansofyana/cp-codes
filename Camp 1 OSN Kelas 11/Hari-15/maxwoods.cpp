#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,tc;
int dp[210][210];
char A[210][210];

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m) return true;
	return false;
}

int cari(int x,int y,int hadap) {
	int smt = 0;
	if (!cek(x,y)) return 0; //diluar border
	if (A[x][y]=='#') return 0;
	if (A[x][y]=='T') smt++;
	if (dp[x][y]==-1) {
		if (hadap==1) 
			dp[x][y] = max(cari(x,y+1,1),cari(x+1,y,2))+smt;
		else if (hadap==2) 
			dp[x][y] = max(cari(x,y-1,2),cari(x+1,y,1))+smt;
	}
	return dp[x][y];
}

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n >> m;
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < m ; j++)
				cin >> A[i][j];
		memset(dp,-1,sizeof dp);
		cout << cari(0,0,1) << endl;
	}
	return 0;
}