#include <bits/stdc++.h>
#define OPTIMASI 
using namespace std;

typedef long long ll;

ll n,k,i,mod;
ll ans,sum;

ll sqr(ll x){
	return ((x%mod)*(x%mod))%mod;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	if (b == 1) return (a%mod);
	if (b%2 == 0) return (sqr(pangkat(a,b/2)));
	if (b%2 == 1) return ((a%mod)*(sqr(pangkat(a,(b-1)/2))))%mod;
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	int t,tc=0;
	cin >> t;
	while (t--) {
		cin >> n >> k >> mod;
		sum = 0;
		for (i = 0 ; i < n ; i++) {
			ll tmp;
			cin >> tmp;
			sum += tmp;
			sum %= mod;
		}
		cout << "Case " << ++tc << ": ";
		ans = ((((k%mod)*(pangkat(n,k-1)))%mod)*sum)%mod;
		cout << ans << '\n';
	}
	return 0;
}