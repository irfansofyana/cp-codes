//785C
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define EPS 1e-18
using namespace std;

typedef long long ll;

ll n, m, start;

bool can(ll x){
	ll tmp = (x-1)*x;
	tmp /= 2;
	return (n - x*start + (x-1)*m - tmp <= 0);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	if (m + 1 >= n) {
		cout << n << '\n';
		return 0;
	}
	else {
		n--; start = m + 2;
		ll lo = 1;
		ll hi = (ll)1e10;
		ll ans = 0;
		while (lo <= hi) {
			ll mid = (lo + hi)/2;
			if (!can(mid)) {
				lo = mid + 1;
			}
			else {
				ans = mid;
				hi = mid - 1;
			}
		}
		//cout << ans << '\n';
		cout << ans + m + 1 << '\n';
	}
	return 0;
}