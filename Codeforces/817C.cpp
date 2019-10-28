//817C
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n, s;

ll f(ll x){
	ll res = 0;
	ll tmp = x;
	while (x > 0) {
		res += x%10;
		x /= 10;
	}
	return tmp - res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	if (f(n) < s) cout << 0 << '\n';
	else {
		ll lo = 1, hi = n;
		ll ans = n;
		while (lo <= hi) {
			ll mid = (lo + hi)>>1;
			if (f(mid) >= s) {
				ans = mid;
				hi = mid - 1;
			}
			else lo = mid + 1;
		}
		cout << n - ans + 1 << '\n';
	}
	return 0;
}