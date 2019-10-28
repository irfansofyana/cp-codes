#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,m,i,j;
ll arr[500005];
ll frek[1000005];
bitset<1000005> bs;
vector<ll> primes;
vector<pll> bil[1000005];

void sieve(){
	bs.set();
	bs[0] = bs[1] = false;
	for (i = 2 ; i <= 1000000; i++) {
		if (bs[i]) {
			primes.pb(i);
			j = i;
			while (i * j <= 1000000) {
				bs[i * j] = false;
				j++;
			}
		}
	}
}

void lakukan(ll x){
	ll idx = 0;
	ll asal = x;
	ll pf = primes[idx];
	while (pf * pf <= x){
		if (x % pf == 0) {
			ll z = 0;
			while (x%pf == 0) {
				frek[pf]++;
				z++;
				x /= pf;
			}
			bil[asal].pb({pf,z});
		}
		pf = primes[idx++];
	}
	if (x != 1) frek[x]++;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	for (i = 0 ; i < n ; i++) {
		lakukan(arr[i]);
	}
	//for (i = 1 ; i <= 5 ; i++){
	//	cout << frek[i] << '\n';
	//}
 	for (i = 0 ; i < n ; i++) {
		ll x = 0;
		for (j = 0 ; j < bil[arr[i]].size(); j++) {
			if (2*bil[arr[i]][j].se <=  frek[bil[arr[i]][j].se]) x++;
		}
		if (x != (ll)bil[arr[i]].size()) {
			cout << i + 1 << '\n';
			return 0;
		} 
	}
	cout << -1 << '\n';
	return 0;
}