#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;
typedef long long ll;

ll n, k;
vector<ll> primes;
bool bil[100005];
vector<pair<ll,ll> > ans;
ll jaw[100005];

void sieve(){
	memset(bil, true, sizeof bil);
	bil[0] = false; bil[1] = false;
	for (ll i = 2; i <= 100000; i++) {
		if (bil[i]) {
			primes.pb(i);
			ll j = i;
			while (i * j <= 100000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

void faktor(ll x){
	ll idx = 0;
	while (x > 1) {
		if (x % primes[idx] == 0) {
			ll pkt = 0;
			while (x%primes[idx] == 0) {
				pkt++;
				x /= primes[idx];
			}
			ans.pb({pkt, primes[idx]});
			idx++;
		}
		else idx++;
	}
}

ll sqr(ll x){return x*x;}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	else if (b == 1) return a;
	else if (b % 2 == 0) return sqr(pangkat(a,b/2));
	else return a*sqr(pangkat(a,(b-1)/2));
}

void solve(){
	faktor(n);
	sort(ans.begin(), ans.end());
	/*for (ll i = 0 ; i < ans.size(); i++) {
		cout << ans[i].fi << " " << ans[i].se << '\n';
	}*/
	ll tot = 0;
	for (ll z = 0 ; z < ans.size(); z++) {
		tot += ans[z].fi;
	}
	if (k > tot) cout << -1 << '\n';
	else {
		for (ll i = 1;  i <= k ; i++) jaw[i] = 1;
		for (ll i = 0 ; i < ans.size(); i++) {
			ll tt = ans[i].fi;
			for (ll j = 1; j <= k; j++) {
				if (jaw[j] == 1 && tt > 0) {
					jaw[j] *= ans[i].se;
					tt--;
				}
			}
			if (tt > 0) {
				for (ll j = 1; j <= k ; j++) {
					jaw[j] *= pangkat(ans[i].se, (tt/k) + (j <= tt%k ? 1 : 0));
				}
			}
		}
		for (ll i = 1; i <= k ; i++) {
			cout << jaw[i];
			cout << (i == k ? '\n' : ' ');
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> n >> k;
	solve();	
	return 0;
}