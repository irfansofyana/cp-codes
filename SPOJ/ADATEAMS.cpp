#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9 + 7;
const ll N = (ll)1e6;

ll fak[N + 5];
ll n,a,b,d;
ll i,j,ans;

void pre(){
	fak[0] = 1;
	for (i = 1 ; i <= N; i++) {
		fak[i] = i * fak[i-1];
		fak[i] %= MOD;
	}
}

ll sqr(ll x){
	return ((x%MOD) * (x%MOD))%MOD;
}

ll pangkat(ll a, ll b){
	if (b == 0) return 1;
	if (b == 1) return a%MOD;
	if (b%2 == 0) return sqr(pangkat(a,b/2));
	if (b%2 == 1) return ((a%MOD) * sqr(pangkat(a, (b-1)/2)) )%MOD;
}

ll com(ll n, ll k){
	ll res;
	res = (fak[k] * fak[n-k])%MOD;
	res = pangkat(res, MOD-2);
	return (fak[n] * res)%MOD;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre();
	while (cin >> n >> a >> b >> d) {
		cout << (com(n,a) * pangkat(com(b,d),a))%MOD << '\n';
	}
	return 0;
}
