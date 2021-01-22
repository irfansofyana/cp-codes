#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9 + 7;

ll a, b, ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	if (b == 1) ans = 0;
	else {
		ll kalia = (a*(a+1))/2; kalia %= MOD;
		kalia *= b; kalia %= MOD; kalia += a; kalia %= MOD;
		for (ll i = 1; i < b; i++) {
			ll bil = i*kalia;
			bil %= MOD;
			ans += bil;
			ans %= MOD;
		}
	}
	cout << ans << '\n';
	return 0;
}