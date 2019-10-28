#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define MOD 1000000007
using namespace std;

typedef long long ll;
int t,tc,n,k,i,j;
ll dp[1005];

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> k >> n;
		memset(dp,0,sizeof dp);
		dp[1] = 1; dp[0] = 1;
		for (i = 2 ; i <= n ; i++) {
			for (j = 1 ; j <= k ; j++) {
				if (i<j) break;
				dp[i] += dp[i-j];
				dp[i] %= MOD;
			}
		}
		cout << "Kasus " << ++tc << ": " << dp[n] << '\n';
	}
	return 0;
}