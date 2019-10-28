#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

typedef long long ll;

ll a,b,p,q;
int t;
ll bil;

using namespace std;

ll cari_mod(ll y,ll q){
	if (q-y < 0) {
		return ((q-y) + q)%q;
	}
	return (q-y)%q;
}

ll gcd(ll a,ll b){
	return (b == 0 ? a : gcd(b,a%b));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> a >> b >> p >> q;
		if (p == 1 && q == 1) {
			if (a > b) cout << 1 << '\n';
			else if (a == b) cout << 0 << '\n';
			else cout << -1 << '\n';
		}
		else {
			ll ta = a; ll tb = b;
			ta /= gcd(a,b); tb /= gcd(a,b);
			if (ta == p && tb == q) cout << 0 << '\n';
			else {
				bil = cari_mod(b,q);
				ll bawah = 0;
				ll atas = (ll)1e9;
				ll ans = -(ll)1e9;
				while (bawah <= atas) {
					ll tengah = (bawah + atas)/2;
					ll bil_uji = q*tengah + bil;
					ll bil_smt = (bil_uji + b)/q;
					ll cek_a = p*bil_smt - a;
					if (cek_a >= 0 && cek_a <= bil_uji) {
						ans = bil_uji;
						atas = tengah-1;
					}
					else bawah = tengah + 1;
				}
				cout << (ans == -(ll)1e9 ? -1 : ans) << '\n';
			}
		}
	}
	return 0;
}