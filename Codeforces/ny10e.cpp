#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;
ll dp[65][15];

ll cari(ll digit,ll prev){
	if (digit == 0) return 1;
	if (dp[digit][prev] != -1) return dp[digit][prev];
	ll res = 0;
	for (ll i = prev; i <= 9; i++) {
		res += cari(digit-1, i);
	}
	return dp[digit][prev] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t,tc;
	cin >> t;
	while (t--) {
		cin >> tc >> n;
		memset(dp,-1, sizeof dp);
		ll ans = 0;
		for (int i = 0 ; i <= 9; i++) {
			ans += cari(n-1, i);
		}
		cout << tc << " " << ans << '\n';
	}
	return 0;
}