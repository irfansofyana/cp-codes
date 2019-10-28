#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n, m, k, lo, hi;

pll cari(ll bil){
	ll bawah = 0;
	ll banyak = 0;
	for (ll z = 1; z <= n ; z++){
		if (bil > z * m) bawah += m;
		else {
			if (bil % z == 0) {
				bawah += (bil/z) - 1;
				banyak++;
			}
			else bawah += bil/z;
		}
	}
	return {bawah, banyak};
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	lo = 1; hi = n*m;
	while (lo <= hi) {
		ll mid = (lo + hi)/2;
		pll tmp = cari(mid);
		if  (k >= tmp.fi + 1 && k <= tmp.fi + tmp.se){
			cout << mid << '\n';
			return 0;
		}
		else if (k < tmp.fi + 1) hi = mid - 1;
		else lo = mid + 1;
	}
	return 0;
}