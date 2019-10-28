#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const ll MOD = (ll)1e9 + 7;

ll n,k,d;
ll dp[105][2];

ll cari(ll sum,ll sudah){
	if (sum < 0) return 0;
	if (sum == 0 && sudah == 1) return 0;
	if (sum == 0) return 1;
	if (dp[sum][sudah] != -1) return dp[sum][sudah];
	ll jaw = 0;
	for (ll z = 1; z <= k; z++) {
		if (sum - z >= 0) {
			if (z >= d && sudah == 1) {
				jaw += cari(sum - z, sudah - 1);
			}
			else if (z >= d && sudah == 0) {
				jaw += cari(sum - z, sudah);
			}
			else if (z < d && sudah == 1) {
				jaw += cari(sum - z, sudah);
			}
			else if (z < d && sudah == 0) {
				jaw += cari(sum - z, sudah);
			}
			jaw %= MOD;
		}
		else break;
	}
	return dp[sum][sudah] = jaw;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k >> d;
	memset(dp, -1, sizeof dp);
	cout << cari(n,1) << '\n';
	return 0;
}