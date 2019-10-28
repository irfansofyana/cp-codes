#include <bits/stdc++.h>
using namespace std;

int t, n, m;
int arr[1005], brr[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n; i++)cin>>arr[i];
		cin >> m;
		for (int i = 0 ; i < m; i++)cin>>brr[i];
		sort(arr, arr+n); sort(brr, brr+m);
		int ans = (int)1e9;
		for (int i = 0 ; i < n; i++) {
			//>=arr[i]
			int lebih = lower_bound(brr, brr+m, arr[i]) - brr;
			if (lebih != m) {
				ans = min(ans, brr[lebih] - arr[i]);
			} 
			int kurang = upper_bound(brr, brr+m, arr[i]-1) - brr;
			kurang--;
			if (kurang != -1) {
				ans = min(ans, arr[i] - brr[kurang]);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}