#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = (int)1e5;

typedef pair<int,int> ii;

int n;
int dp[MAXN+5];
ii arr[MAXN+5];

int cari(int x){
	if (x <= 0) return 0;
	if (dp[x] != -1) return dp[x];

	int ccari = arr[x].fi - arr[x].se;
	// cari indeks terakhir yang arr[indeks] < cari
	int lo = 0, hi = x;
	int ans = -1;
	while (lo <= hi) {
		int mid = (lo + hi) >> 1;
		if (arr[mid].fi < ccari) {
			ans = mid;
			lo = mid + 1;
		}
		else hi = mid - 1;
	}
	return dp[x] = cari(ans) + (x-1-(ans+1)+1);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) cin >> arr[i].fi >> arr[i].se;
	sort(arr, arr + n);
	memset(dp, -1, sizeof dp);
	int ans = n;
	for (int i = n-1; i >= 0; i--) {
		ans = min(ans, n-1-i + cari(i));
	}
	cout << ans << '\n';
	return 0;
}