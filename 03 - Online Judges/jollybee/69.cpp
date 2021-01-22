#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll t,tc,n,m,i,j;
ll A[10005];
ll kiri,kanan,mid;

ll func(ll x){
	ll temp = 0;
	for (i = 0 ; i < n ; i++) {
		temp += (A[i]>x?x:A[i]);
	}
	return temp;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		ll sum = 0;
		for (i = 0 ; i < n ; i++) {cin >> A[i]; sum+=A[i];}
		if (sum<=m) cout << -1 << '\n';
		else {
			ll ans=1e9;
			kiri = 0; kanan = 1e9;
			while (kiri<=kanan) {
				mid = (kiri+kanan)/2;
				if (func(mid)>m) kanan = mid-1;
				else if (func(mid)==m) {
					ans = mid;
					break;
				}
				else {
					ans = mid;
					kiri = mid+1;
				}
			}
			cout << ans << '\n';
		}
	}
	return 0;
}