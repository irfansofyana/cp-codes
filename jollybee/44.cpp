#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int t,tc,prev;
int dp[205][205];
string a,b;

int LCS(int i,int j){
	if (i>=a.size() || j>=b.size()) return 0;
	else if (dp[i][j]!=-1) return dp[i][j];
	else {
		if (a[i]==b[j]) {
			if (prev==-1) {
				prev = i;
				return dp[i][j] = LCS(i+1,j+1)+1;
			}
			else if (i-prev!=1) return dp[i][j] = LCS(i+1,j+1);
			else if (i-prev==1) {
				prev = i;
				return dp[i][j] = LCS(i+1,j+1)+1;
			}
		}
		else {
			return dp[i][j] = max(LCS(i+1,j),LCS(i,j+1));
		}
	}
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		int x,y;
		cin >> x >> y;
		cin >> a >> b;
		memset(dp,-1,sizeof dp);
		cout << "Kasus " << ++tc << ": " << a.size()+b.size()-LCS(0,0) << '\n'; 
	}
	return 0;
}