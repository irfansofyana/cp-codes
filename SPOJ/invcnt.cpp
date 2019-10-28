#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MAXX = (ll)1e7;
const ll MAXN = (ll)2e5;

ll n,i,j;
ll BIT[MAXX + 5];
ll arr[MAXN + 5];
int t;

ll Query(ll x){
	ll res = 0;
	while (x > 0) {
		res += BIT[x];
		x -= (x&(-x));
	}
	return res;
}

void update(ll x,ll frek){
	while (x < MAXX) {
		BIT[x] += frek;
		x += (x&(-x));
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> arr[i];
		memset(BIT,0,sizeof BIT);
		ll ans = 0;
		for (i = n-1; i >= 0 ; i--) {
			ans += Query(arr[i]-1);
			update(arr[i],1);
		}
		cout << ans << '\n';
	}
	return 0;
}