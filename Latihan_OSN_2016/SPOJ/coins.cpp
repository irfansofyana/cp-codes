#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

map<ll,ll> mep;

ll cari(ll x){
	if (x < 12) return x;
	if (mep[x]!=0) return mep[x];
	return mep[x] = cari(x/2)+cari(x/3)+cari(x/4);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll x;
	while (cin >> x){
		cout << cari(x) << '\n';
	}
	return 0;
}