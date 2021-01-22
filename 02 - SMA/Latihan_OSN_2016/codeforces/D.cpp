#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,i,j;
ll arr[100005];
ll brr[100005];
ll l,r;

bool bisa(ll x){
	ll ret = 0;
	for (ll z = 0 ; z < n ; z++){
		ll butuh = x*arr[z];
		if (butuh > brr[z]) ret += butuh-brr[z];
		if (ret > k) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++)
		cin >> arr[i];
	for (i = 0 ; i < n ; i++)
		cin >> brr[i];
	l = 0; r = (ll)2e+9;
	ll ans = 0;
	while (l<=r){
		ll mid = (l+r)/2;
		if (bisa(mid)){
			ans = mid;
			l = mid+1;
		}
		else r = mid-1;
	}
	cout << ans << '\n';
	return 0;
}