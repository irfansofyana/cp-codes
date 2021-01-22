#include <bits/stdc++.h>
using namespace std;

int dp[105][105];
string a,b;
int tc;

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
	while (getline(cin,a) && a!="#") {
		getline(cin,b);
		memset(dp,-1,sizeof dp);
		cout << "Case " << "#" << ++tc << ": you can visit at most " << LCS(0,0) << " cities." << endl;  
	}
	return 0;
}