#include <bits/stdc++.h>
#define MOD  1000000003
using namespace std;

typedef long long ll;

ll n;
ll dp[1000003];

ll f(ll x){
	ll res = x*(x+1);
	res /= 2;
	res %= MOD;
	return (res*res)%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	for (int i = 1; i <= 1000000; i++) {
		dp[i] = dp[i-1]+f(i);
		dp[i] %= MOD;
	}
	cin >> t;
	while (t--) {
		cin >> n;
		cout << dp[n]%MOD << '\n';
	}
	return 0;
}