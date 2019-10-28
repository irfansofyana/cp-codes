#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll arr[10005];
ll dp[10005];
int t,tc;

ll cari(ll idx) {
	if (dp[idx]!=-1) return dp[idx];
	if (idx >= n) return 0;
	return dp[idx] = max(arr[idx]+cari(idx+2),cari(idx+1));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) 
			cin >> arr[i];
		memset(dp,-1,sizeof dp);
		cout << "Case " << ++tc << ": " << cari(0) << '\n';
	}
	return 0;
}