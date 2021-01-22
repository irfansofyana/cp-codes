#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,k;
ll ans[55][55];

ll cari(ll idx,ll sum) {
	if (ans[idx][sum]!=-1) return ans[idx][sum];
	if (idx==k && sum==0) return 1;
	if (idx==k) return 0;
	ll ret = 0;
	for (ll z = 1 ; z <= m ; z++) {
		if (sum >= z) 
			ret += cari(idx+1,sum-z);
	}
	return ans[idx][sum] = ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> k >> m) {
		memset(ans,-1,sizeof ans);
		cout << cari(0,n) << '\n';
	}
	return 0;
}