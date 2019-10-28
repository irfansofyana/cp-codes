#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define irfan using
#define sofyana namespace
#define putra std

irfan sofyana putra;

typedef long long ll;
const ll INF = (ll)1e15;

ll t,n,m,i,j,k;
ll dp[105][105][505];
ll arr[105][105];

bool cek(ll r, ll c){
	return (r >= 0 && r < n && c >= 0 && c < m);
}

ll cari(ll r,ll c,ll maks){
	if (r == n-1 && c == m-1 && maks >= arr[r][c]) return arr[r][c];
	if (r == n-1 && c == m-1) return -INF;
	if (dp[r][c][maks] != -1) return dp[r][c][maks]; 
	ll Q1 = -INF;
	ll Q2 = -INF;
	ll Q3 = -INF;
	if (cek(r,c+1)) {
		if (arr[r][c] <= maks) Q1 = cari(r, c+1, maks-arr[r][c]) + arr[r][c];
	}
	if (cek(r+1,c)) {
		if (arr[r][c] <= maks) Q2 = cari(r+1, c, maks-arr[r][c]) + arr[r][c];
	}
	if (cek(r+1,c+1)) {
		if (arr[r][c] <= maks) Q3 = cari(r+1, c+1, maks-arr[r][c]) + arr[r][c];
	}
	return dp[r][c][maks] = max(max(Q1,Q2), Q3);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m >> k;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < m ; j++)
				cin >> arr[i][j];
		}
		memset(dp, -1, sizeof dp);
		cout << (cari(0,0,k) <= 0 ? -1 : cari(0,0,k)) << '\n';
	}
	return 0;
}
