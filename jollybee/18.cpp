#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
int ans;
int A[105],B[105];

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0;
	while (t--) {
		int m;
		cin >> n >> m;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		for (i = 0 ; i < m ; i++) cin >> B[i];
		ans = 1e9;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < m; j++) {
				ans = min(ans,abs(A[i]-B[j]));
			}
		}
		cout << "Kasus #" << ++tc << ": " << ans << '\n';
	}
	return 0;
}