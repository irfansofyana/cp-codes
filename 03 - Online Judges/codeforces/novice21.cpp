#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


ll a, b, n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> a >> b >> n;
		ll ans = b/n;
		if (a == 1) {
			cout << b/n << '\n';
		}
		else {
			if (a%n == 0) ans = ans - (a/n) + 1;
			else ans -= a/n;
			cout << ans << '\n';
		}
	}
	return 0;
}