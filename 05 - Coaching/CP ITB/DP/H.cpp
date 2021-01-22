/*
	Problem 	: H - Blueberries
	created 	: 08-10-2017
	soluiton by	: cokguzel48(Irfan Sofyana Putra)
*/
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int t, n, k, tc;
int dp[1005][1005];
int arr[1005];

int cari(int idx,int kaps){
	if (idx >= n) return 0;
	if (dp[idx][kaps] != -1) return dp[idx][kaps];
	int x = 0;
	if (kaps >= arr[idx]) x = cari(idx + 2, kaps - arr[idx]) + arr[idx];
	x = max(x, cari(idx + 1, kaps));
	return dp[idx][kaps] = x;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0 ; i < n ; i++) 
			cin >> arr[i];
		memset(dp, -1 , sizeof dp);
		cout << "Scenario #" << ++tc << ": " << cari(0, k) << '\n';
	}
	return 0;
}