#include <bits/stdc++.h>
using namespace std;

int n,ans;
int i,j;
int A[1005],B[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0; i < n ; i++) cin >> A[i];
		for (i = 0 ; i < n; i++) cin >> B[i];
		sort(A,A+n); sort(B,B+n);
		ans = 0;
		for (i = 0 ; i < n ; i++) ans += A[i]*B[i];
		cout << ans << '\n';
	}
	return 0;
}