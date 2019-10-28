#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, m, ans;
ll arr[1000005];

bool f(ll x){
	ll res = 0;
	for (int i = 0 ; i < n ; i++) {
		if (arr[i] > x) res += arr[i]-x;
	}
	return res >= m;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	ll awal = 0; ll akhir = (ll)2e9+5;
	ans = 0;
	while (awal <= akhir) {
		ll mid = (awal + akhir) >> 1;
		if (f(mid)) {
			ans = mid;
			awal = mid + 1;
		}
		else akhir = mid - 1;
	} 
	cout << ans << '\n';
	return 0;
}