#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9 + 7;

ll n,k,i,j;
ll dp[2005][2005];

ll cari(ll sisa,ll prev){
	if (prev > n) return 0;
	if (sisa == 0) return 1;
	if (dp[sisa][prev] != -1) return dp[sisa][prev];

	ll sum = 0;
	for (ll z = prev; z <= n ; z += prev){
		sum += cari(sisa-1, z);
		sum %= MOD;
	}

	return dp[sisa][prev] = sum;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	ll ans = 0;
	memset(dp, -1, sizeof dp);
	for (i = 1 ; i <= n ; i++) {
		ans += cari(k-1, i);
		ans %= MOD;
	}
	cout << ans << '\n';
	return 0;
}