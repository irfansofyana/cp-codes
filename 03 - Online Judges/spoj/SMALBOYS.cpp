#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int t,x,i,j,n;
int arr[1005],ans[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1 ; i <= n ; i++) {
			cin >> arr[i];
			ans[i] = -1;
		}
		for (i = n; i >= 1; i--) {
			x = 0;
			for (j = 1 ; j <= n ; j++) {
				if (ans[j] == -1) x++;
				if (x == arr[i] + 1) {
					ans[j] = i;
					break;
				}
			}
		}
		for (i = 1 ; i <= n ; i++) {
			cout << ans[i];
			cout << (i == n ? '\n' : ' ');
		}
	}
	return 0;
}
