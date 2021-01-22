#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int T;
	scanf("%d", &T);
	while (T--) {
		ll n;
		scanf("%lld", &n);
		ll ans;
		if (n == 1) ans = 0;
		else if ((n&1) > 0) ans = n/2;
		else {
			ll tmp = n/2;
			if (tmp % 2 == 0) ans = tmp-1;
			else ans = tmp-2;
		} 
		printf("%lld\n", ans);
	}
	return 0;
}