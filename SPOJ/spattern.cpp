#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define MOD 10000009
using namespace std;

typedef unsigned long long ll;

int t;
ll n,x,i;

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll power(ll a,ll b){
	if (b == 0) return 1;
	if (b == 1) return a%MOD;
	if (b%2 == 0) return sqr(power(a,b/2));
	return ((a%MOD)*sqr(power(a,(b-1)/2)))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> x >> n;
		if (x == 1) {
			cout << 1 << '\n';
			continue;
		}
		ll ans = 0;
		ll j = 1;
		for (i = 0 ; i <= 63; i++) {
			if ((n&(1ll << i)) != 0) {
				ans += j;
				ans %= MOD;
			}
			j *= x; j %= MOD;
		}
		cout << ans << '\n';
	}
	return 0;
}