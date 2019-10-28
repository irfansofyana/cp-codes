#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1000000007;

int t;
ll n,i,j;
ll dp[1000005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> t;
	//memset(dp, -1 , sizeof dp);
	dp[1] = 0; dp[2] = 1; dp[3] = 1;
	for (i = 4 ; i <= 1000000; i++) {
		dp[i] = (dp[i-2] + dp[i-3])%mod;
	}
	while (t--) {
		cin >> n;
		cout << dp[n] << '\n';
	}
	return 0;
}
