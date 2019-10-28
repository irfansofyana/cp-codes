#include <bits/stdc++.h>
using namespace std;

int n,i,j,t,depan,belakang;
string s;
int dp[1005][1005];

int cari(int x,int y){
	if (dp[x][y]!=-1) return dp[x][y];
	if (x>y) return 0;
	if (x==y) return 1;	
	if (s[x]==s[y] && x!=y) {
		dp[x][y] = cari(x+1,y-1)+2;
		return dp[x][y];
	} 
	if (s[x]!=s[y]) {
		dp[x][y] = max(cari(x,y-1),cari(x+1,y));
		dp[x][y] = max(dp[x][y],cari(x+1,y-1));
		return dp[x][y];
	}
}

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		depan = 0; belakang = s.size()-1;
		memset(dp,-1,sizeof dp);
		cout << cari(depan,belakang) << endl;
	}
	return 0;
}