#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,x,m;
ll i,j,k;
ll bil;

ll binser(ll l,ll r){
	ll ret;
	while (l<=r) {
		ll mid = (l+r)/2;
		if (mid*mid >= bil) {
			ret = mid;
			r = mid-1;
		}
		else if (mid * mid < bil) {
			l = mid+1;
		}
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x;
	bil = 8*x+1;
	n = binser(1,1000000000);
	//cout << binser(1,1000000000) << '\n';
	while (1) {
		if ((n*n-bil)%16!=0) n++;
		else {
			ll p = (n*n-bil)/16;
			k = (n-1)/2;
			if (p>= 0 && p <= (k*(k+1)/2)) break;
			else n++;
		}
	}
	cout << k << '\n';
	return 0;
}