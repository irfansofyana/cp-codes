#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
const int MAXN = (int)1e5;

int T;
ll n, arr[MAXN+5];
ll ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) cin >> arr[i];
		ans = 0;
		for (ll i = 0 ; i < 20; i++) {
			ll bobot = (1ll << i);
			ll curr = 0;
			ll tes = 0;
			for (int j = 0 ; j < n ; j++) {
				bool nyala = false;
				if ((arr[j]&bobot)!=0) nyala = true;
				//cout << i << " " << (nyala ? 1 : 0) << " ";
				if (j == 0) {
					if (nyala) curr++;
				}
				else {
					if (nyala) curr++;
					else {
						ans += ((curr*(curr+1))/2)*bobot;
						tes += ((curr*(curr+1))/2)*bobot;
						curr = 0;
					}
				}
			}
			ans += ((curr*(curr+1))/2)*bobot;
			tes += ((curr*(curr+1))/2)*bobot;
			//cout << '\n';
			//cout << tes << '\n';
		}
		cout << ans << '\n';
	}
	return 0;
}