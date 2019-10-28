#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll ans, n, m;
int t;

ll cari(ll x) {
	if (x == 2) return 1;
	ll t = (x-2)/3;
	if (3*t >= (x-2)) return t;
	return t+1;
}

int main(){
	scanf("%d", &t);
	while (t--) {
		scanf("%lld %lld", &n, &m);
		//cout << cari(n) << " " << cari(m) << '\n';
		printf("%lld\n", cari(n)*cari(m));
	}
	return 0;
}