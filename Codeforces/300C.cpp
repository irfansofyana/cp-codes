#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9+7;
const ll MAXN = (ll)1e6;

int a, b, n;
ll fac[MAXN+2], ifac[MAXN+2]; 

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	if (b == 1) return a%MOD;
	if (b%2 == 0) return sqr(pangkat(a, b>>1));
	return ((a%MOD)*(sqr(pangkat(a, (b-1) >> 1))))%MOD;
}

bool cek(int x){
	while (x > 0) {
		int dig = x%10;
		if (dig != a && dig != b) return false;
		x /= 10;
	}
	return true;
}

void isi(){	
	fac[0] = 1;
	ifac[0] = 1;
	for (int i = 1; i <= MAXN; i++) {
		fac[i] = (fac[i-1] * i)%MOD;
		ifac[i] = pangkat(fac[i], MOD-2);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> a >> b >> n;
	ll ans = 0;
	for (int i = 0 ; i <= n ; i++) {
		if (cek(a * i + b *(n-i))) {
			ll tmp = fac[n] * ifac[i];
			tmp %= MOD;
			tmp *= ifac[n-i];
			ans += tmp;
			ans %= MOD;
		}
	}
	cout << ans << '\n';
	return 0;
}