#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

typedef long long ll;
const ll MOD = (ll)1e9 + 7;

int t;
ll n,m,i,j;

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	if (b == 1) return (a%MOD);
	if (b%2 == 0) return sqr(pangkat(a,b/2));
	return ((a%MOD)*sqr(pangkat(a,(b-1)/2)))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		ll ans1 = (pangkat(n,m) - 1 + MOD)%MOD;
		ll ans2 = pangkat(n,m);
		ans1 *= pangkat(n-1,MOD-2); ans1%=MOD;
		cout << ans1 << " " << ans2 << '\n';
	}
	return 0;
}
