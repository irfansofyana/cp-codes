#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll T,d;

const ll MOD = (ll)1e9 + 7;

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	if (b == 1) return a%MOD;
	if (b%2 == 0) return sqr(pangkat(a,(b/2)));
	if (b%2 == 1) return ((a%MOD)*sqr(pangkat(a,(b-1)/2)))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> d;
		cout << (8 * pangkat(9,d-1) ) %MOD << '\n';
	}
	return 0;
}