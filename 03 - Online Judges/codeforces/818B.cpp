	#include <bits/stdc++.h>

	#define fi first
	#define se second
	#define pb push_back

	using namespace std;

	int n, m;
	int arr[105], ans[105];

	int main(){
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		cin >> n >> m;
		for (int i = 1 ; i <= m ; i++) 
			cin >> arr[i];
		memset(ans, -1, sizeof ans);
		int used[105];
		memset(used, -1, sizeof used);
		for (int i = 2; i <= m ; i++) {
			int target = arr[i];
			int prev = arr[i-1];
			if (target <= prev) target += n;
			
			if (ans[prev] != -1 && ans[prev] + prev != target) {
				cout << -1 << '\n'; return 0;
			}

			else if (ans[prev] == -1) {
				int harus = target - prev;
				if (used[harus] == -1) {
					used[harus] = prev;
					ans[prev] = harus;
				}
				else if (used[harus] != prev) {
					cout << -1 << '\n';
					return 0;
				}
			}
		}

		for (int i = 1; i <= n ; i++) {
			if (ans[i] == -1) {
				for (int j = 1; j <= n ; j++) {
					if (used[j] == -1) {
						ans[i] = j;
						used[j] = true;
						break;
					}
				}
			}
		}	
		for (int i = 1;  i <= n ; i++) {
			cout << ans[i] ;
			cout << (i == n ? '\n' : ' ');
		}
		return 0;
	}