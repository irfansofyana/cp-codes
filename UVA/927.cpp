#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,i,j;
ll f[35];
ll n,d,k,ansbin;

ll sqr(ll x){
	return x*x;
}

ll pangkat(ll a,ll b){
	if (b==0) return 1;
	else if (b==1) return a;
	else if (b%2==0) return (sqr(pangkat(a,(b/2))));
	else if (b%2==1) return a*sqr(pangkat(a,(b-1)/2));
}

ll fungsi(ll x){
	ll res = 0;
	for (int z = 0 ; z<= n ; z++) {
		res += f[z]*pangkat(x,z);
	}
	return res;
}

ll binser(ll le,ll ri){
	ll tengah = (le+ri)/2;
	if (le>ri) return ansbin;
	ll temp = tengah*(tengah+1);
	temp/=2;
	if (d*temp>k) return binser(le,tengah-1);
	else if (d*temp<=k){
		ansbin = tengah;
		return binser(tengah+1,ri);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i <= n ; i++) cin >> f[i];
		cin >> d >> k;
		ansbin = 0;
		ll nn = binser(0,10000000);
		nn = nn*(nn+1);
		nn/=2;
		nn*=d;
		if (nn<k) {
			nn = binser(0,10000000)+1;
		}
		else nn = binser(0,10000000);
		cout << fungsi(nn) << '\n';
	}
	return 0;
}