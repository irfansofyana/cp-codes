#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

int t;
ll lo,hi,i,j,ans,n;
ll arr[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
vector<ll> jum;

void generate(){
	for (i = 1 ; i < (1 << 13); i++) {
		ll sum = 1;
		for (j = 0 ; j < 13 ; j++) {
			if ((i & (1 << j)) > 0) {
				sum *= arr[j];
			}
		}
		jum.pb(sum);
	}
	sort(jum.begin(),jum.end());
}

bool can(ll x,ll bil){
	ll tmp = upper_bound(jum.begin(),jum.end(),x) - jum.begin();
	tmp--;
	return (x - tmp >= bil);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	for (i = 0 ;i < 24; i++) {
		cout << jum[i] << '\n';
	}
	cin >> t;
	while (t--) {
		cin >> n;
		lo = 1; hi = (ll)1e18;
		while (lo <= hi) {
			ll mid = (lo + hi) /2;
			if (can(mid, n)) {
				ans = mid;
				hi = mid - 1;
			}
			else lo = mid + 1;
		}
		cout << ans << '\n';
	}
	return 0;
}
