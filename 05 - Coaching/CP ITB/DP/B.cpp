/*	
	Problem		: B - Treats for the Cows 
	created		: 08-10-2017
	solution by	: cokguzel48 (Irfan Sofyana Putra)
*/

#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;


ll N, dp[2005][2005];
ll arr[2005];

ll cari(ll depan,ll belakang) {
	if (depan > belakang) return 0;
	if (dp[depan][belakang] != -1) return dp[depan][belakang];
	ll idx = depan + N - belakang;
	ll maju = arr[depan]*idx + cari(depan + 1, belakang);
	ll mundur = arr[belakang]*idx + cari(depan, belakang - 1);
	return dp[depan][belakang] = max(maju, mundur);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0 ; i < N; i++) cin >> arr[i];
	memset(dp, -1, sizeof dp);
	cout << cari(0, N-1) << '\n';
	return 0;
}