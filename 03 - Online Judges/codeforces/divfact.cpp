#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9+7;

int t;
ll n;
vector<ll> primes;
bitset<50005> bil;

void sieve(){
	bil.set();
	bil[0] = bil[1] = false;
	for (ll i = 2; i <= 50000; i++) {
		if (bil[i]) {
			primes.pb(i);
			for (ll j = i * i; j <= 50000; j += i)
				bil[j] = false;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	//cout << primes.size() << '\n';
	cin >> t;
	while (t--) {
		cin >> n;
		ll ans = 1;
		for (int i = 0 ; i < primes.size() && primes[i] <= n; i++) {
			ll tmp = 0; ll num = primes[i];
			while (num <= n) {
				tmp += n/num;
				num *= primes[i];
			}
			ans *= (tmp + 1);
			if (ans > MOD) ans %= MOD;
		}
		cout << ans << '\n';
	}
	return 0;
}