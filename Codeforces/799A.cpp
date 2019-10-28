	#include <bits/stdc++.h>
	#define fi first
	#define se second
	#define pb push_back

	using namespace std;

	int n, t, k, d;
	int ans1, ans2;

	int main(){
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		cin >> n >> t >> k >> d;
		if (n%k == 0) ans1 = (n/k)*t;
		else ans1 = ((n/k)+1)*t;
		ans2 = d;
		int cnt = 0;
		for (int i = 0; i < d; i++) {
			cnt++;
			if (cnt == t) {
				n -= min(n,k);
				cnt = 0;
			}
		}
		int cnt2 = 0;
		while (n > 0) {
			cnt++;
			cnt2++;
			ans2++;
			if (cnt == t) {
				n -= min(n,k);
				cnt = 0;
			}
			if (cnt2 == t) {
				n -= min(n,k);
				cnt2 = 0;
			}
		}
		//cout << ans1 << " " << ans2 << '\n';
		if (ans2 < ans1) cout << "YES\n";
		else cout << "NO\n";
		return 0;
	}