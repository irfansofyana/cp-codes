#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define MOD 1000000007
using namespace std;

typedef long long ll;
ll n,i,j,k,mini;
ll A[100005];
ll dp[100005];

ll jaw(ll idx){
	if (idx==1) return dp[idx] = A[1];
	if (dp[idx]!=-1) return dp[idx];
	ll minii = 200000000000;
	for (ll z = idx-k ; z <= idx-1; z++) {
		if (z>=1) minii = min(minii,jaw(z));
	}
	dp[idx] = (minii*A[idx])%MOD;
	return dp[idx];
}

int main(){
	OPTIMASI
	cin >> n >> k;
	memset(dp,-1,sizeof dp);
	for (i = 1 ; i <= n ; i++) cin >> A[i];
	cout << jaw(n) << '\n';
	return 0;
}