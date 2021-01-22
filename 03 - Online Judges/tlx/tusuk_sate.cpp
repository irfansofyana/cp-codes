#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;


typedef long long ll;
const ll MOD = (ll)1e9 + 7;

int t;
ll dp[1100][1100][5];
ll n,m,i,j,k;

void pre_compute(){
	for (i = 1 ; i <= 3 ; i++) {
		if (i == 1) {
			for (j = 0 ; j <= 1000 ; j++)
				dp[1][j][i] = 1; 
		}
		else {
			for (j = 1; j <= 1000; j++)
				dp[1][j][i] = 1;
		}
	}

	for (i = 2 ; i <= 1000 ; i++) {
		for (j = 1; j <= 3 ; j++) {
			if (j == 1) {
				for (k = 0 ; k <= 1000; k++) {
					dp[i][k][j]  = dp[i-1][k][1] + dp[i-1][k][2] + dp[i-1][k][3];
					dp[i][k][j] %= MOD;
				}
			}
			else if (j == 2) {
				for (k = 1 ; k <= 1000; k++) {
					dp[i][k][j] = dp[i-1][k-1][1] + dp[i-1][k-1][3];
					dp[i][k][j] %= MOD;
				}
			}
			else {
				for (k = 1 ; k <= 1000 ; k++) {
					dp[i][k][j] = dp[i-1][k-1][1] + dp[i-1][k-1][2];
					dp[i][k][j] %= MOD; 
				}
			}
		}
	}
	//cout << dp[2][3][1] << " " << dp[2][3][2] << " " << dp[2][3][3] << endl;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre_compute();
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n <= 1) cout << 1 << '\n';
		else if (n == 2) cout << 1 << '\n';
		else {
			//cout << n << " " << m << endl;
			cout << (dp[n-2][m][1] + dp[n-2][m][2] + dp[n-2][m][3]) % MOD << '\n';
		}
	}
	return 0;
}