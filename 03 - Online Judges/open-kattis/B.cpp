#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[1000005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1 ; i <= n ; i++) cin >> A[i];
		j = 1;
		int ans = 0;
		for (i = 1 ; i <= n; i++) {
			if (A[i]!=j) {
				ans++;
			}
			else {j++;}
		}
		cout << ans << '\n';
	}
	return 0;
}