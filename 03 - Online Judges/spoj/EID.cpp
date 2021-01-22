#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll t,i,j;
ll dp[1000005];
ll n;

void pre(){
	for (i = 0 ; i <= 1000000; i++) {
		if (i == 0) dp[i] = 0;
		else dp[i] = dp[i-1] + (i/2);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre();
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n;
		i = (n-3)/3;
		ll genap = (i/2);
		ll ganjil = (i%2 == 1 ? (i/2) + 1 : i/2);
		ll satu = (n%2 == 0 ? genap : ganjil);

		ll ans = 0;
		ans += dp[n-1] - dp[n-i-1];
	//	cout << ans << '\n';
		ans -= (i * (i+1))/2;
		ans -= satu;
		cout << "Case " << ++tc << ": " << ans << '\n';
	}
	return 0;
}