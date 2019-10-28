#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int t,dummy;
ll n,k;
ll dp[105][105][2];

void isi(){
	dp[1][1][1] = 1; dp[1][1][0] = 0; dp[1][0][1] = 1; dp[1][0][0] = 2;
	dp[2][0][0] = 3; dp[2][0][1] = 2; dp[2][1][0] = 1; dp[2][1][1] = 1; dp[2][2][0] = 0; dp[2][2][1] = 1;
	for (ll i = 3; i <= 100; i++) {
		for (ll j = 0 ; j <= i; j++){
			dp[i][j][0] = dp[i-1][j][1] + dp[i-1][j][0];
			dp[i][j][1] = dp[i-1][j-1][1] + dp[i-2][j][1] + dp[i-2][j][0];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> t;
	while (t--) {
		cin >> dummy >> n >> k;
		//cout << cari(n-1,k,0) + cari(n-1,k,1) << '\n''
		cout << dummy << " " << dp[n-1][k][0] + dp[n-1][k][1] << '\n';
	}
	return 0;
}