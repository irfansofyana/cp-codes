#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int T;
ll n, m, arr[25];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> n >> m;
		for (int i = 0 ; i < n ; i++) 
			cin >> arr[i];
		ll ans = 0;
		for (int i = 1; i < (1 << n); i++) {
			ll ambil = 0;
			for (int j = 0 ; j < n; j++) {
				if ((i&(1<<j)) > 0) 
					ambil += arr[j];
			}
			if (ambil <= m) {
				ans = max(ans, ambil);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}