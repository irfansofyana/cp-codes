#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const int N = (int)1e6;

ll t,i,j,n;
ll a[N + 5], fac[N + 5];
bitset<N + 5> bil;
vector<ll> primes;

void sieve(){
	bil.set();
	bil[0] = bil[1] = 0;
	for (i = 2 ; i <= N ; i++) {
		if (bil[i]) {
			primes.pb(i);
			j = i;
			while (i * j <= N) {
				bil[i * j] = 0;
				j++;
			}
		}
	}
}

void generate_fac(){
	ll bil,res;
	for (i = 1 ; i <= N ; i++) {
		bil = i;
		j = 0;
		res = 1;
		while (primes[j] * primes[j] <= bil) {
			if (bil%primes[j] == 0) {
				ll k = primes[j];
				ll tmp = 1;
				while (bil%primes[j] == 0) {
					tmp += k;
					k *= primes[j];
					bil /= primes[j];
				}
				res *= tmp;
			}
			j++;
		}
		if (bil != 1) res *= (1 + bil);
		//if (i <= 10) cout << res << '\n';
		fac[i] = res;
	}
}

void solve(){
	sieve();
	generate_fac();
	a[0] = a[1] = 0;
	for (i = 2; i <= N ; i++) {
		a[i] = a[i-1] + (fac[i] - i);
	}
	cin >> t;
	while (t--) {
		cin >> n;
		cout << a[n] << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	solve();
	return 0;
}
