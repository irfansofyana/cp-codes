#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int N = 100000;

int t,n,i,j,w;
int arr[N + 5], lr[N + 5], rl[N + 5];
int k;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> w;
		k = n-w+1;
		for (i = 1 ; i <= n ; i++) cin >> arr[i];
		if (k == n) {
			for (i = 1 ; i <= n ; i++) {
				cout << arr[i] ;
				cout << (i == n ? '\n' : ' ');
			}
		}
		else {
			for (i = 1 ; i <= n ; i++) {
				if (i%w == 1) {
					lr[i] = arr[i];
				}
				else lr[i] = max(lr[i-1], arr[i]);
			}
			for (i = n ; i >= 1; i--) {
				if (i == n) {
					rl[i] = arr[i];
				}
				else if (i%w == 0) {
					rl[i] = arr[i];
				}
				else rl[i] = max(rl[i+1], arr[i]);
			}
			for (i = 1 ; i <= k ; i++) {
				cout << max(rl[i],lr[i+w-1]) ;
				cout << (i == k ? '\n' : ' ');
			}
		}
		//if (t > 0) cout << '\n';
	}
	return 0;
}
