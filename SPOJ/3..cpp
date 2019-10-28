#include <bits/stdc++.h>
#define MOD  1000000003
using namespace std;

typedef long long ll;

ll n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	while (t--) {
		cin >> n;
		ll ans = (n*(n+1))/2;
		ans %= MOD;
		cout << (ans*ans)%MOD << '\n';
	}
	return 0;
}