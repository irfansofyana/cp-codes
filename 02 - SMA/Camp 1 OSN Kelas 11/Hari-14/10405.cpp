#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int dp[1005][1005];
string a,b;

int LCS(int x,int y){
	if (x>=a.size() || y>=b.size()) return 0;
	if (dp[x][y]==-1) {
		if (a[x]==b[y]) dp[x][y] = LCS(x+1,y+1)+1;
		else dp[x][y] = max(LCS(x+1,y),LCS(x,y+1));
	}
	return dp[x][y];
}

int main(){
	cin.tie(0);
	while (getline(cin,a)) {
		getline(cin,b);
		memset(dp,-1,sizeof dp);
		cout << LCS(0,0) << endl;
	}
	return 0;
}