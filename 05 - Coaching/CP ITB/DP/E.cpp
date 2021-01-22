/*
	Problem 	: E. The Knapsack Problem
	created 	: 08-10-2017
	solution y 	: cokguzel48 (irfan sofyana Putra)
*/ 

#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n, s;
pll arr[2005];
ll dp[2005][2005];

ll cari(ll idx,ll kaps){
	if (idx == n) return 0;
	if (dp[idx][kaps] != -1) return dp[idx][kaps];
	ll nilai = 0;
	if (kaps >= arr[idx].fi) nilai = cari(idx + 1, kaps - arr[idx].fi) + arr[idx].se;
	nilai = max(nilai, cari(idx+1, kaps));
	return dp[idx][kaps] = nilai; 
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i].fi >> arr[i].se;
	}
	memset(dp, -1, sizeof dp);
	cout << cari(0,s) << '\n';
	return 0;
}