#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, arr[2002];
ll dp[2002][2002];

ll cari(ll le,ll ri){
	if (le > ri) return 0;
	if (dp[le][ri] != -1) return dp[le][ri];
	ll bil = n - (ri-le);
	ll maks = arr[le]*bil + cari(le + 1, ri);
	maks = max(arr[ri]*bil + cari(le, ri-1), maks);
	return dp[le][ri] = maks;	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	memset(dp, -1, sizeof dp);
	cout << cari(0, n-1) << '\n';

	return 0;
}