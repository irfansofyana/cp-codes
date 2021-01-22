#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,x;
ll arr[1000005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> x;
	for (ll i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr, arr+n);
	ll sukses = 0;
	ll ans = 0;
	for (ll i = 0 ; i < n ; i++) {
		if (x >= arr[i]) {
			sukses++;
			ans++;
			x -= arr[i];
		}
		else if (x >= (arr[i]/2)) {
			sukses++;
			x = 0;
		}
	}
	cout << n-sukses << " " << ans << '\n';
	return 0;
}