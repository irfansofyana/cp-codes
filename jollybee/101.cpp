#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9 + 7;

int t,tc,n,i;
ll fac[1000005];

void pre_compute(){
	fac[1] = 1;
	for (i = 2;  i <= 1000000; i++) {
		fac[i] = i * fac[i-1];
		if (fac[i] >= MOD) fac[i] %= MOD;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre_compute();
	cin >> t;
	while (t--) {
		cin >> n;
		cout << "Kasus " << ++tc << ": " << fac[n] << '\n';
	}
	return 0;
}
