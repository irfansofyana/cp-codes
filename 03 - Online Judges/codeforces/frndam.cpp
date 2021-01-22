#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int T;
ll n, m;

ll cari(ll x){
	ll res = 0;
	for (ll i = 1 ; i * i <= x; i++) {
		if (x%i == 0) {
			ll j = x/i;
			res += i;
			if (j != x && j!=i) res += j; 
		}
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> n >> m;
		bool ans = false;
		if (cari(n) == m && cari(m) == n)  ans = true;
		cout << "Friendship is " << (ans ? "ideal" : "not ideal") << '\n';
	}
	return 0;
}