#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll arr[300005];
ll prefix[300005];
ll x,idx;

ll binser(ll l,ll r){
	ll ret ;
	while (l<=r){
		ll mid = (l+r)/2;
		if (prefix[mid] >= x) {
			ret = mid;
			r = mid-1;
		}
		else if (prefix[mid] < x) l = mid+1;
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 1; i <= n ; i++) {
		cin >> arr[i];
		prefix[i] = prefix[i-1] + arr[i];
	}
	ll ans = 0;
	for (i = 1 ; i <= n ; i++) {
		if (prefix[i] < m) ans = max(ans,prefix[j]);
		else {
			x = prefix[i]-m;
			idx = binser(1,n);
			ans = max(ans,prefix[i]-prefix[idx]);
		}
	}
	cout << ans << '\n';
	return 0;
}