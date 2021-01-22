#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int dp[5005][5005];

int explore(int x,int y){
	if (x<=0 || y<=0) return 0;
	if (dp[x][y]!=-1) return dp[x][y];
	return dp[x][y] = max(explore(x+1,y-2),explore(x-2,y+1))+1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	memset(dp,-1,sizeof dp);
	if (n==1 && m==1) cout << 0 << '\n';
	else cout << explore(n,m) << '\n';
	return 0;
}