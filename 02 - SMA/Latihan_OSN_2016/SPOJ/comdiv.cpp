#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a,ll b){
	return (b==0 ? a:gcd(b,a%b));
}

ll a,b,i,j,tot;

int main(){
	ll t;
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld %lld", &a, &b);
		a = gcd(a,b);
		tot = 0;
		for (i = 1 ; i <= (ll)sqrt(a); i++){
			if (a%i==0) {
				j = a/i;
				if (i!=j) tot += 2;
				else tot++;
			}
		}
		printf("%lld\n", tot);
	}
	return 0;
}