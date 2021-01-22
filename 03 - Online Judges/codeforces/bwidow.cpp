#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int t, n;
int atas[1005], bawah[1005];
pair<int,int> arr[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i].fi >> arr[i].se;
			if (i == 0) atas[i] = arr[i].se;
			else atas[i] = max(atas[i-1], arr[i].se);
		}
		for (int i = n-1; i >= 0; i--) {
			if (i == n-1) bawah[i] = arr[i].se;
			else bawah[i] = max(bawah[i+1], arr[i].se);
		}
		bool ans = false;
		for (int i = 0 ; i < n ; i++) {
			if (i == 0) {
				if (arr[i].fi > bawah[i+1]) {
					ans = 1;
					cout << i+1 << '\n'; break;
				}
			}
			else if (i == n-1) {
				if (arr[i].fi > atas[i-1]) {
					ans = 1;
					cout << i+1 << '\n'; break;
				}
			}
			else {
				if (arr[i].fi > max(atas[i-1], bawah[i+1])) {
					ans = 1;
					cout << i+1 << '\n'; break;
				}
			}
		}
		if (!ans) cout << "-1\n";
	}
	return 0;
}