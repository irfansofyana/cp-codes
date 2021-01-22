#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MOD =  1000000007;

ll ans, n;

ll sum(ll a, ll b){
	ll res = b*(b+1); res /= 2;
	return res - ((a-1)*a)/2;	
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &n);
		ans = 0;
		ll last;
		for (ll i = 1; i <= (ll)sqrt(n); i++) {
			ans += ((sum((n/(i+1))+1, n/i)%MOD)*(i))%MOD;
			ans %= MOD;
			if (i == (ll)sqrt(n)) {
				last = n/(i+1);
			}
		}
		for (ll i = 1; i <= last; i++) {
			ll bagi = n/i;
			ans += (bagi*i)%MOD;
			ans %= MOD;
		}
		cout << ans << '\n';
	}	
}