#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[35],B[35];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		for (i = 0 ; i < n ; i++) cin >> B[i];
		sort(A,A+n); sort(B,B+n);
		int ans = 0;
		i = 0; j = 0;
		while (i<n && j < n) {
			if (A[i]<=B[j]) {
				ans++; i++; j++;
			}
			else j++;
		}
		cout << ans << '\n';
	}
	return 0;
}