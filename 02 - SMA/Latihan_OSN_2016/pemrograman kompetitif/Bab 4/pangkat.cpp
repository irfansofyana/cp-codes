#include <bits/stdc++.h>
#define MOD 1000000
using namespace std;

typedef long long ll;

ll a,b;
ll ans,bdig;
ll i,j;

ll sqr(ll x){
	return x*x;
}

ll pangkat(ll a,ll b){
	if (b==0) return 1;
	else if (b==1) return a%MOD;
	else if (b%2==0) return sqr(pangkat(a,b/2)%MOD)%MOD;
	else if (b%2==1) return ((a%MOD)*(sqr(pangkat(a,(b-1)/2)%MOD)%MOD))%MOD;
}

bool _can(ll a,ll b){
	ll res = 1;
	for (ll zz = 1; zz <= b ; zz++) {
		res *= a;
		if (res > 999999) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	ans = pangkat(a,b);
	if (ans==0) bdig = 1;
	while (ans>0) {
		bdig++;
		ans/=10;		
	}
	if (_can(a,b)) cout << pangkat(a,b) << '\n';
	else if (ans!=6) {
		for (i = 0 ; i < 6-bdig; i++) cout << '0';
		cout << pangkat(a,b) << '\n';
	}
	else cout << pangkat(a,b) << '\n';
	return 0;
}