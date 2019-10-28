#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,maks;
ll A[200010];
ll dp[200010];

ll cari(int idx){
	ll &tmp = dp[idx];
	if (idx > maks) return tmp = 0;
	if (tmp != -1) return tmp;
	return tmp = max(cari(idx+1),(ll)idx*A[idx]+cari(idx+2));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	memset(A,0,sizeof A);
	memset(dp,-1,sizeof (dp));
	for (i = 1 ; i <= n ; i++) {
		cin >> m;
		maks = max(maks,m);
		A[m]++;
	}
	ll ans = cari(1);
	cout << ans << '\n';
	return 0;
}