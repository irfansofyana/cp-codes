#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll t,n,i,j;
map<pair<ll, pair<ll, ll> >, ll> dp;
ll arr[1005];
vector<pair<ll,ll> > vec;

ll cari(ll idx, pair<ll,ll> bil){
	if (idx == n) return 0;
	if (dp.find({idx,bil}) != dp.end()) return dp[{idx,bil}];
	ll m1 = (bil.fi == vec[idx].se ? cari(idx + 1, {bil.fi,bil.se + vec[idx].se }))
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> arr[i];
		vec.clear(); dp.clear();
		i = 0;
		while (i < n) {
			j = i+1;
			while (j < n && arr[j] == arr[i]) {
				j++;
			}
			vec.pb({j-i+1, arr[i]});
			i = j;
		}
		n = (ll)vec.size();
	}
	return 0;
}
