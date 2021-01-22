#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 5000011;

ll dp[100005], n, k;


void solve(ll n,ll k){
	dp[1] = 2;
	for (int i = 2; i <= 100000; i++) {
		if (i-k-1 <= 0) dp[i] = dp[i-1] + 1;
		else dp[i] = dp[i-1] + dp[i-k-1];
		dp[i] %= MOD;
	}
	cout << dp[n] << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		solve(n,k);
	}
	return 0;
}