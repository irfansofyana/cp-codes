#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const int MAXN=(int)1e5;

int t, n, c;
ll arr[MAXN+2];

bool can(ll x){
	int udah = 1;
	ll now = arr[0];
	for (int i = 1; i < n ; i++) {
		if (arr[i] - now >= x) {
			udah++;
			now = arr[i];
		}
		if (udah == c) return 1;
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> c;
		for (int i = 0 ; i < n ; i++) cin >> arr[i];
		sort(arr, arr+n);
		ll lo = 0, hi = arr[n-1];
		ll ans = 0;
		while (lo <= hi) {
			ll mid = (lo + hi)>>1;
			if (can(mid)) {
				ans = mid;
				lo = mid+1;
			}
			else hi = mid-1;
		} 
		cout << ans << '\n';
	}
	return 0;
}