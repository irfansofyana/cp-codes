#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,tc,n,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		ll sum = 0;
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			ll x;
			cin >> x;
			x %= n;
			sum += x;
			sum %= n;
		}
		cout << (sum%n==0?"YES":"NO") << '\n';
	}
	return 0;
}