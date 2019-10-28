#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,i,j;

bool cek(ll x){
	if (x <= 1) return false;
	for (ll z = 2 ; z <= (ll)sqrt(x); z++){
		if (x%z == 0) return false;
	}
	return true;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld %lld", &a, &b);
		for (i = a ; i <= b ; i++) {
			if (cek(i)) printf("%lld\n", i);
		}
		if (t > 0) printf("\n");
	}
}