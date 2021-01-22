#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,ans,tmp;
map<ll,ll> mep;
ll pangkat[40];

ll binser(ll l,ll r){
	ll res;
	while (l <= r) {
		ll mid = (l + r)/2;
		if (pangkat[mid] >= tmp) {
			res = mid;
			r = mid-1;
		}
		else l = mid+1;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (i = 0 ; i < 40 ; i++) {
		if (i == 0) pangkat[i] = 1;
		else pangkat[i] = 2*pangkat[i-1];
	}
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> tmp;
		if (i == 0) {
			mep[tmp]++;
		}
		else {
			ll smt = pangkat[binser(0,39)];
			for (j = smt ; j <= 2000000000; j *= 2) {
				ans += mep[j-tmp];
			}
			mep[tmp]++;
		}
	}
	cout << ans << '\n';
	return 0;
}
