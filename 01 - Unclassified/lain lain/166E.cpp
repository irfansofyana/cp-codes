#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long LL;
const LL MOD = (LL)1e9 + 7;

LL n,a,b,i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	a = 0; b = 3;
	if (n == 1) {
		cout << 0 << '\n';
		return 0;
	}
	for (i = 1 ; i <= n - 2 ; i++) {
		LL tmp = b;
		b = 2*b + 3*a;
		a = tmp;
		a %= MOD; b%= MOD;
	}
	cout << b << '\n';
	return 0;
}