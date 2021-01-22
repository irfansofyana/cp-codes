#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define sz(a) (int)a.size()
using namespace std;

typedef long long ll;
const ll INF = (ll)1e15;

ll n,m,k,i,j;
ll dp[105][105][105];
ll arr[105], harga[105][105];

inline ll cari(ll idx,ll cantik,ll last) {
	if (idx == 0) {
		if (arr[idx] == 0) {
			ll mini = INF;
			for (ll z = 1; z <= m; z++) {
				mini = min(mini, cari(idx + 1, cantik - 1, z) + harga[idx][z-1]);
			}
			return dp[idx][cantik][last] = mini;
		}
		else return dp[idx][cantik][last] = cari(idx + 1, cantik - 1, arr[idx]);
	}
	else {
		if (dp[idx][cantik][last]!=-1) return dp[idx][cantik][last];
		ll mini = INF;
		if (idx == n && cantik == 0) return 0;
		if (idx == n) return INF;
		if (cantik > 0) {
			if (arr[idx] != 0) {
				if (arr[idx] == last) mini = min(mini, cari(idx + 1, cantik, last));
				else mini = min(mini, cari(idx + 1, cantik - 1,  arr[idx] ));
			}
			else {
				for (ll z = 1 ; z <= m ; z++) {
					if (z == last) {
						mini = min(mini, cari(idx + 1, cantik, z) + harga[idx][z-1]);
					}
					else mini = min(mini, cari(idx + 1, cantik - 1, z) + harga[idx][z-1]);
				}
			}
			return dp[idx][cantik][last] = mini;
		}
		else if (cantik == 0) {
			if (arr[idx] == 0) mini = min(mini, cari(idx + 1, cantik, last) + harga[idx][last-1]);
			else {
				if (arr[idx] == last) mini = min(mini, cari(idx + 1, cantik, last));
			}
			return dp[idx][cantik][last] = mini;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) 
			cin >> harga[i][j];
	}
	//cout << INF << '\n';
	memset(dp, -1, sizeof dp);
	ll ans = cari(0,k,0);
	cout << (ans == INF ? -1 : ans) << '\n';
	return 0;
}
