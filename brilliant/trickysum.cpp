#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll dp[10005];
ll ans;

int main(){
	dp[1] = -1;
	for (i = 2 ; i <= 10000; i++) {
		if ((i&(i-1))==0) dp[i] = dp[i-1]-i;
		else dp[i] = dp[i-1]+i;
		if (i >= 4) ans += dp[i];
	}
	cout << ans << '\n';
}