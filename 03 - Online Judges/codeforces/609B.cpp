#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int A[15];
int dp[15];

int main(){
	OPTIMASI
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		A[x]++;
	}
	for (i = m-1; i >= 1; i--) {
		dp[i] = dp[i+1]+A[i+1];
	}
	int ans = 0;
	for (i = 1 ; i <= m ;i++) {
		ans += dp[i]*A[i];
	}
	cout << ans << '\n';
	return 0;
}