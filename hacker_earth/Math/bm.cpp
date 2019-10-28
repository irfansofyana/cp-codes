#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9 + 7;
ll comb[1005][1005], dua[1005];
bitset<1000005> bil;
ll n,i,j,t;
ll prima, bukan_prima;

void sieve(){
	bil.set();
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 1000000; i++) {
		if (bil[i]) {
			j = i;
			while (i * j <= 1000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

void compute(){
	comb[0][0] = 1;
	for (i = 1; i <= 1000; i++) {
		for (j = 0 ; j <= i ; j++) {
			if (j == 0 || j == i) comb[i][j] = 1;
			else comb[i][j] = comb[i-1][j] + comb[i-1][j-1];
			comb[i][j] %= (MOD-1);
		}
	}
	dua[0] = 1;
	for (i = 1 ; i <= 1000 ; i++) {
		dua[i] = 2 * dua[i-1];
		dua[i] %= (MOD-1);
	}
}

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1%MOD;
	if (b == 1) return a%MOD;
	if (b%2 == 0) return sqr(pangkat(a,b/2));
	return ((a%MOD)*sqr(pangkat(a,(b-1)/2)))%MOD;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve(); compute();
	cin >> t;
	while (t--) {
		cin >> n;
		prima = 0;
		for (i = 0 ; i < n; i++) {
			ll x;
			cin >> x;
			if (bil[x]) prima++;
		}
		//cout << prima << '\n';
		bukan_prima = n - prima;
		ll ans = 1;
		for (i = 0 ; i <= prima; i++) {
			ll tmp = comb[prima][i] * dua[bukan_prima];
			tmp %= (MOD - 1);
			tmp = pangkat(i + 2, tmp);
			tmp %= MOD;
			ans *= tmp;
			ans %= MOD;
		}
		cout << ans << '\n';
	}
	return 0;
}