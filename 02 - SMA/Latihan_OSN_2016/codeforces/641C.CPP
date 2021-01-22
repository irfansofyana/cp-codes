#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll q,ubah;
ll ans[1000005];

ll cari(ll a,ll b){
	ll tmp = a+b;
	if (tmp >= 0) {
		if (tmp%n == 0) return n;
		return tmp%n;
	}
	else {
		if (abs(tmp)%n == 0) return n;
		return n*((abs(tmp)/n)+1) + tmp;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> q;
	int puter = 0;
	for (i = 0 ; i < q ; i++) {
		char c;
		ll x;
		cin >> c ;
		if (c == '1') cin >> x;
		if (c == '2') puter++;
		else {
			if (x >= 0) ubah += x;
			else ubah -= abs(x);
		}
	}
	for (i = 1 ; i <= n ; i+=2) {
		//cout << cari(i,ubah) << " " << cari(i+1,ubah) << '\n';
		if (puter%2 == 0) {
			ans[cari(i,ubah)] = i;
			ans[cari(i+1,ubah)] = i+1;
		}
		else {
			ans[cari(i+1,ubah)] = i;
			ans[cari(i,ubah)] = i+1;
		}
	}
	for (i = 1 ; i <= n ; i++) {
		cout << ans[i];
		cout << (i == n ? '\n' : ' ');
	}
	return 0;
}