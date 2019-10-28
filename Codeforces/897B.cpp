#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, p;

ll solve(ll n,ll p) {
	ll ress = 0;
	for (int i = 1; i <= n ; i++) {
		ll bil = i;
		ll res = 0;
		ll kali = 1;
		while (bil > 0) {
			res = 10 * res + bil%10;
			bil /= 10;
			kali *= 10;
		}
		bil = i;
		while (bil > 0) {
			res = kali*(bil%10) + res;
			bil /= 10;
			kali *= 10;
		}
		//cout << res << '\n';
		ress += res;
		ress %= p;
	}
	return ress;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> p;
	cout << solve(n,p) << '\n';
	return 0;	
}