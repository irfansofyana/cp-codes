#include <bits/stdc++.h>
#define MOD 10000007
using namespace std;

typedef long long ll;

ll n,k,ans;
ll tmp;

ll sqr(ll x){
	return x*x;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	if (b == 1) return a%MOD;
	if (b%2 == 0) return sqr(pangkat(a,b/2)%MOD)%MOD;
	if (b%2 == 1) return ((a%MOD)*(sqr(pangkat(a,(b-1)/2)%MOD)%MOD))%MOD;
}

int main(){
	while (scanf("%lld %lld", &n, &k)){
		if (n == 0 && k == 0) return 0;
		ans = 2*pangkat(n-1,k) + pangkat(n,k) + 2*pangkat(n-1,n-1) + pangkat(n,n);
		ans %= MOD;
		printf("%lld\n", ans);
	}
	return 0;
}