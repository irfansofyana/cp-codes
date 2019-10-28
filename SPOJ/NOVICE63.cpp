#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n,i,j;
ll com[65][65];

void pre_compute(){
	com[0][0] = 1;
	for (i = 1 ; i <= 60 ; i++) {
		for (j = 0 ; j <= i ; j++) {
			if (j == 0 || j == i) com[i][j] = 1;
			else com[i][j] = com[i-1][j] + com[i-1][j-1];
		}
	}
}

ll cari(ll n) {
	ll res = 0;
	while (n%2 == 0) {
		res++;
		n /= 2;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre_compute();
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		n = cari(n) + 1;
		ll ans = 0;
		if (n == 2) cout << 1 << '\n';
		else {
			for (i = n-1 ; i >= 2; i--) {
				if (i%2 != 0) continue;
				else{
					ans += com[i-1][(i/2)-1];
				}
			}
			cout << ans << '\n';
		}
	}
	return 0;
}
