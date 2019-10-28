#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t,i,j,idx;
ll freq[1005];
int n;
ll ans,dp[1005],arr[1005],duapangkat[105];

ll cari(ll curr){
	if (curr == idx) return 0;
	if (dp[curr] != -1) return dp[curr];
	ll res = 0;
	for (ll z = 0 ; z <= freq[arr[curr]]; z++) {
		res += z * arr[curr] * duapangkat[idx - curr - 1] + cari(curr + 1);
	}
	return dp[curr] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (i = 0 ; i <= 63; i++) {
		if (i == 0) duapangkat[i] = 1;
		e	lse duapangkat[i] = duapangkat[i-1] * 2;
	}
	cin >> t;
	while (t--) {
		cin >> n;
		idx = 0;
		memset(freq,0,sizeof freq);
		for (i = 0; i < n ; i++) {
			int x;
			cin >> x;
			freq[x]++;
			if (freq[x] == 1 && x > 0) arr[idx++] = x;
		}
		memset(dp,-1,sizeof dp);
		//cout << idx << '\n';
		cout << cari(0) << '\n';
	}
	return 0;
}
