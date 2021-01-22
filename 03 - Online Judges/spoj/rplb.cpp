#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,k,i,j;
int t,tc;
int arr[1005];
int dp[1005][1005];

int cari(int idx,int sisa){
	if (idx >= n) return 0;
	if (dp[idx][sisa] != -1) return dp[idx][sisa];

	int maks = -1;
	//ambil : 
	if (sisa >= arr[idx])
		maks = max(maks, cari(idx + 2, sisa - arr[idx]) + arr[idx]);
	//ga ambil :
	maks = max(maks, cari(idx + 1, sisa));
	return dp[idx][sisa] = maks;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (i = 0 ; i < n ; i++) cin >> arr[i];
		memset(dp, -1, sizeof dp);
		cout << "Scenario #" << ++tc << ": " << cari(0,k) << '\n'; 
	}
	return 0;
}