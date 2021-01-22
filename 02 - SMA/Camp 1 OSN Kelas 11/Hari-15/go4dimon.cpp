#include <bits/stdc++.h>
using namespace std;

int tc,n,i,j,m;
int dp[210][210];
int A[210][210];

int cari(int x,int y){
	int smt = A[x][y];
	int tmp;
	if (smt==-1) return 0;
	if (x>=n || y>=((n-1)/2)+1 || x<0 || y<0) return 0;
	if (dp[x][y]==-1) {
		if (x<(n-1)/2) {
			dp[x][y] = max(cari(x+1,y),cari(x+1,y+1))+smt;
		}
		else if (x==(n-1)/2 && y==0) dp[x][y] = cari(x+1,y)+smt;
		else dp[x][y] = max(cari(x+1,y-1),cari(x+1,y))+smt;
	}
	return dp[x][y];
}

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n;
		memset(A,-1,sizeof A);
		memset(dp,-1,sizeof dp);
		for (i = 0 ; i<=(n-1)/2 ; i++) {
			for (j = 0 ; j <= i ; j++) {
				cin >> A[i][j];
			}
		}
		for (i = ((n-1)/2)+1 ; i < n ; i++) {
			for (j = 0 ; j<n-i ; j++) 
				cin >> A[i][j];
		}
		cout << cari(0,0) << endl;
	}
	return 0;
}