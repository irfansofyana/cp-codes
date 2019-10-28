#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll arr[100005];

ll cari(ll x) {
	if (x%5 == 0) return x;
	if (x%5 <= 2) return x-(x%5);
	return x-(x%5) + 5;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++)
		cin >> arr[i];
	ll ans = (ll)1e10;
	if (n <= 3) {
		ll tmp;
		tmp = cari(arr[0]) + cari(arr[1]) + cari(arr[2]);
		ans = min(ans,tmp);
		tmp = cari(arr[0]+arr[1]) + cari(arr[2]);
		ans = min(ans,tmp);
		tmp = cari(arr[0]+arr[1]+arr[2]);
		ans = min(ans,tmp);
		tmp = cari(arr[0]+arr[2]) + cari(arr[1]);
		ans = min(ans,tmp);
		tmp = cari(arr[1]+arr[2]) + cari(arr[0]);
		ans = min(ans,tmp);
		cout << ans << '\n';
	}
	else {
		
	}
	return 0;
}