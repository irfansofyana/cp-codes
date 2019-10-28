#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MAXN = (ll)1e6+5;
const ll MOD = (ll)1e9+7;

int q;
ll x, y, fak[2*MAXN+5];
vector<ll> primes;
bitset<MAXN> bs;

void sieve(){
	bs.set();
	bs[0] = bs[1] = false;
	for (ll i = 2; i <= MAXN; i++) {
		if (bs[i]) {
			primes.pb(i);
			ll j = i;
			while (i * j <= MAXN) {
				bs[i*j] = false;
				j += i;
			}
		}
	}
	fak[0] = 1;
	for (ll i = 1; i <= 2*MAXN; i++) {
		fak[i] = i*fak[i-1];
		if (fak[i] > MOD) fak[i]%=MOD;
	}
}

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	if (b == 1) return a%MOD;
	if (b%2 == 0) return sqr(pangkat(a,b>>1));
	return ((a%MOD)*sqr(pangkat(a,(b-1)>>1)))%MOD;
}

ll kom(ll x,ll y){
	ll ans = fak[x];
	ans = (ans*pangkat(fak[y], MOD-2))%MOD;
	ans = (ans*pangkat(fak[x-y], MOD-2))%MOD;
	return ans;
}

ll cari(ll x, ll y) {
	ll ans = pangkat(2, y-1);
	ll idx = 0;
	//cout << ans << '\n';
	while (x > 1) {
		if (x%primes[idx] == 0) {
			ll cnt = 0;
			while (x%primes[idx] == 0) {
				cnt++;
				x /= primes[idx];
			}
			ans *= kom(cnt + y - 1, cnt);
			ans %= MOD;
			idx++;
		}
		else idx++;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> q;
	//cout << kom(5,2) << '\n';
	while (q--) {
		cin >> x >> y;
		cout << cari(x,y) << '\n';
	}
	return 0;
}