#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll N, K, last_;
ll dp[5005][5005];

ll cari(ll target,ll sisa){
	if (sisa == 0 && target == 0) return 1;
	if (sisa == 0) return 0;
	if (dp[target][sisa] != -1) return dp[target][sisa];
	ll res = 0;
	for (int z = last_; z <= target; z++) {
		last_ = z;
		res += cari(target - z, sisa - 1);
		res %= 1988;
	}
	return dp[target][sisa] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> N >> K) {
		if (N == 0 && K == 0) return 0;
		memset(dp, -1, sizeof dp);
		last_ = 1;
		cout << cari(N, K) << '\n';
	}
	return 0;
}