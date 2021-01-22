#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9+7;

ll a, b, n, x;

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a,ll b){
	if (b==0) return 1;
	else if (b==1) return a%MOD;
	else if ((b&1)==0) return sqr(pangkat(a,b>>1));
	return ((a%MOD)*sqr(pangkat(a,(b-1)>>1)))%MOD;
}

ll solve() {
	ll res = 0;
	if (a == 1) {
		n %= MOD;
		return (x + ((n*b)%MOD))%MOD;
	}
	n %= (MOD-1);

	ll pkt = pangkat(a, n);
	res += (pkt*x)%MOD;

	res %= MOD;

	ll pkt2 = pangkat(a-1, MOD-2);

	res += (((b*(pkt-1))%MOD)*pkt2)%MOD;
	return res%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b >> n >> x;
	cout << solve() << '\n';
	return 0;
}