#include <bits/stdc++.h>
using namespace std;

int t,i,j,n;
int dp[105][105];
int tmp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1 ; i <= n ; i++) {
			if (i == 1) {
				for (j = 1 ; j <= i ; j++) 
					cin >> dp[i][j];
			}
			else {
				for (j = 1 ; j <= i ; j++) {
					cin >> tmp;
					int maks = dp[i-1][j];
					if (j-1 >= 1) maks = max(maks,dp[i-1][j-1]);
					dp[i][j] = maks + tmp;
				}
			}
		}
		int ans = -1;
		for (i = 1 ; i <= n ; i++) {
			ans = max(ans,dp[n][i]);
		}
		cout << ans << '\n';
	}
	return 0;
}
