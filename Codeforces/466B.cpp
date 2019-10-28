//466B
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n, a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n >> a >> b;
	ll mini = min(a, b);
	ll maks = max(a, b);
	ll aawal = a;
	ll bawal = b;
	if (a * b >= 6*n) {
		cout << a*b << '\n';
		cout << a << " " << b << '\n';
		return 0;
	}
	a = mini; b = maks;
	ll ans = (ll)1e18;
	ll ans1=-1, ans2 = -1;
	while (a <= (ll)sqrt(6*n)) {
		ll tmp = 6*n;
		if (tmp % a==0) tmp /= a;
		else {
			tmp /= a;
			tmp++;
		}
		if (a * tmp >= 6*n && tmp >= b && a*tmp < ans) {
			ans1 = a; ans2 = tmp;
			ans = a*tmp;
		}
		a++;
	}
	cout << ans << '\n';
	if (ans1 >= aawal && ans2 >= bawal) {
		cout << ans1 << " " << ans2 << '\n';
	}
	else cout << ans2 << " " << ans1 << '\n';
	return 0;
}