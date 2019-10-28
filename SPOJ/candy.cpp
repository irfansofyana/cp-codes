#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[10005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n && n!=-1) {
		int sum = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> A[i];
			sum += A[i];
		}
		if (sum%n!=0) cout << -1 << '\n';
		else {
			int ans = 0;
			for (i = 0 ; i < n ; i++) {
				if (A[i]>(sum/n)) ans += A[i]-(sum/n);
			}
			cout << ans << '\n';
		}
	}
	return 0;
}