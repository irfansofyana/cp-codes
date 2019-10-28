#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,t,i,j;

ll binser(ll l,ll r){
	ll ret;
	while (l<=r) {
		ll mid = (l+r)/2;
		ll temp = (mid*(mid+1))/2;
		if (temp > n) {
			r = mid-1;
		}
		else {
			ret = mid;
			l = mid+1;
		}
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		cout << binser(0,1000000) << '\n';
	}
	return 0;
}