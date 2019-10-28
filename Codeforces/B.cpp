#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9+7;

ll n, m, k, ans;

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a, ll b){
	if (b == 0) return 1;
	if (b == 1) return a%MOD;
	if (b%2 == 0) return sqr(pangkat(a, b/2));
	return ((a%MOD)*sqr(pangkat(a, (b-1)/2)))%MOD;
}

ll cari(ll x){
	return pangkat(2, x-1);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	if (k == -1) {
		if (n%2 ==0 && m%2 == 1) {
			cout << 0 << '\n';
			return 0;
		}
		else if (n%2 == 1 && m%2 == 0) {
			cout << 0 << '\n';
			return 0;
		}
	}
	ans = 1;
	ll bil1 = (n-1)%(MOD-1);
	ll bil2 = (m-1)%(MOD-1);
	bil1 *= bil2;
	bil1 %= (MOD-1);
	ans = (pangkat(2, bil1)*ans)%MOD;
	cout << ans << '\n';
	return 0;
}