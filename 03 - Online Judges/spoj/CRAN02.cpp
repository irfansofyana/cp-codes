#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;
typedef long long ll;

const int N = (int)1e6;

ll t,i,j;
ll sum[N + 5];
ll ans,n;
map<ll,ll> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> j;
			if (i == 0) sum[i] = j;
			else sum[i] = sum[i-1] + j;
		}
		ans = 0; mep.clear();
		for (i = 0 ; i < n ; i++){
			if (i == 0) {
				if (sum[i] == 0) ans++;
				mep[sum[i]]++;
			}
			else {
				if (sum[i] == 0) ans++;
				ans += mep[sum[i]];
				mep[sum[i]]++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
