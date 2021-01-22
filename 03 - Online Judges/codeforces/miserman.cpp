#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int dp[105][105];
int n, m, ans;

bool cek(int x,int y){
	return (x >= 0 && x < n && y >= 0 & y < m);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++) 
		for (int j = 0 ; j < m ; j++)
			cin >> dp[i][j];
	for (int i = 1; i < n ; i++) {
		for (int j = 0 ; j < m; j++) {
			int mini = dp[i-1][j];
			if (cek(i-1,j-1)) mini = min(mini, dp[i-1][j-1]);
			if (cek(i-1,j+1)) mini = min(mini, dp[i-1][j+1]); 
			dp[i][j]+=mini;
		}
		if (i == n-1) {
			for (int j = 0 ; j < m ; j++) {
				if (j == 0) ans = dp[i][j];
				else ans = min(ans, dp[i][j]);
			}
		}
	}
	cout << ans << '\n';
	return 0;
}