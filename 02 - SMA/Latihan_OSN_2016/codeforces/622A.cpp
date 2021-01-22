#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;

ll binser(ll l,ll r){
	ll ret;
	while (l<=r){
		ll mid = (l+r)/2;
		if (((mid*(mid+1))/2) > n) r = mid-1;
		else {
			ret = mid;
			l = mid+1;
		}
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	//cout << binser(0,100000000) << '\n';
	ll bil = binser(0,100000000);
	if (n-((bil*(bil+1))/2)==0) {
		cout << bil << '\n';
		return 0;
	}
	else {
		ll cari = (n-((bil*(bil+1))/2));
		cout << cari << '\n';
	}
	return 0;
}