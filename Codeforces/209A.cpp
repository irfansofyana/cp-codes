#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

const LL mod = 1e9 + 7;

LL n;
LL dp[2][2];


int main(){
	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
	#endif
	cin >> n;
	for (int i = 1; i <= n; i++){
		if (i == 1){
			//0 -> r, 1 -> b
			dp[0][0] = dp[1][0] = dp[1][1] = 0;
			dp[0][1] = 1;
		}else {
			LL tmp[2][2];
			memset(tmp, 0, sizeof tmp);
			if (i % 2 == 0){
				//b
				tmp[0][0] = dp[0][0];
				tmp[0][1] = dp[0][1];
				tmp[1][0] = (dp[1][0] + dp[0][1]) % mod;
				tmp[1][1] = (dp[1][1] + dp[0][0] + 1) % mod;
			}else {
				//r
				tmp[0][0] = (dp[0][0] + dp[1][1])%mod;
				tmp[0][1] = (dp[0][1] + dp[1][0] + 1) %mod;
				tmp[1][0] = dp[1][0];
				tmp[1][1] = dp[1][1];
			}
			for (int j = 0; j < 2; j++){
				for (int k = 0; k < 2; k++){
					dp[j][k] = tmp[j][k];
				}
			}
		}
	}
	LL ans = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++){
			ans = (ans + dp[i][j]) % mod;
		}
	}
	cout << ans << '\n';
	return 0;
}