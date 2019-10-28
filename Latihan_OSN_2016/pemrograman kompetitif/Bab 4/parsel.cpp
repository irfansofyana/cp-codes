#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll bil,_low,_high;
vector<ll> A;

ll f(ll x){
	ll res = 0;
	for (ll z =0 ; z < n ; z++) {
		res += (x/A[z]);
	}
	return res;
}

ll binser1(ll awal,ll akhir){
	ll mid = (awal+akhir)/2;
	if (awal > akhir) return _low;
	if (f(mid) >= bil) return binser1(awal,mid-1);
	else if (f(mid) < bil) {
		_low = mid;
		return binser1(mid+1,akhir);
	}
}

ll binser2(ll awal,ll akhir) {
	ll mid = (awal+akhir)/2;
	if (awal > akhir) return _high;
	if (f(mid) <= bil) return binser2(mid+1,akhir);
	else if (f(mid) > bil) {
		_high = mid;
		return binser2(awal,mid-1);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		ll x;
		cin >> x;
		A.push_back(x);
	}
	_low = 0; _high = 0; bil = m;
	_low = binser1(0,2000000000000);
	_high = binser2(0,2000000000000);
	//cout << _low << " " << _high << '\n';
	cout << (_high-1)-(_low+1) + 1 << '\n';
	return 0;
}