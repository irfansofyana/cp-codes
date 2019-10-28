#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll dp[1005][1005];
ll berat[1005],harga[1005];
ll t,x;

ll knapsack(ll idx,ll noww) {
	if (dp[idx][noww]!=-1) return dp[idx][noww];
	if (idx==n) return 0;
	if (berat[idx]>noww) {
		dp[idx][noww] = knapsack(idx+1,noww);
		return dp[idx][noww];
	}
	dp[idx][noww] = max(knapsack(idx+1,noww-berat[idx])+harga[idx],knapsack(idx+1,noww));
	return dp[idx][noww];
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0; i < n ; i++) {
			cin >> harga[i] >> berat[i];
		}
		ll ans = 0;
		cin >> m;
		while (m--) {
			cin >> x;
			memset(dp,-1,sizeof dp);
			ans += knapsack(0,x);
		}
		cout << ans << '\n';
	}
	return 0;
}