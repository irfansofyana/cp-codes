#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;

ll banyak(ll n){
	ll res = 0;
	for (ll z = 1 ; z <= (ll)sqrt(n); z++){
		if (n%z==0) {
			ll temp = n/z;
			if (temp!=z) res+=2;
			else res++;
		}
	}
	return res;
}

int main(){
	ll ans = 0;
	for (i = 1 ; i <= 500000; i++) {
		n = banyak(i);
		if (i+n==n*n) ans+=i;
	}
	cout << ans << '\n';
}