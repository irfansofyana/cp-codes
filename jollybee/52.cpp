#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
int A[10005];

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ;i  < n; i++) cin >> A[i];
		sort(A,A+n);
		int ans = 0;
		for (i = 0 ;i < n ; i++) {
			ans += abs(A[i]-i-1);
		}
		cout << ans << '\n';
	}
	return 0;
}