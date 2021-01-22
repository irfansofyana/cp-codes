#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

int T, N;
ll dp[(1 << 20) + 5];
int arr[25][25];
 
ll cari(ll bitmask){
	if (bitmask == (1 << N) - 1) return 1;
	if (dp[bitmask] != -1) return dp[bitmask];
	int now = 0;
	for (int i = 0 ; i < N; i++) {
		if ((bitmask&(1<<i)) > 0) now++;
	}
	ll res = 0;
	for (int i = 0 ; i < N; i++) {
		if (arr[now][i] == 1 && ((bitmask&(1<<i)) == 0)) {
			res += cari((bitmask|(1<<i)));
		}
	}
	return dp[bitmask] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 0 ; i < N; i++)
			for (int j = 0 ; j < N; j++)
				cin >> arr[i][j];
		memset(dp, -1 , sizeof dp);
		cout << cari(0) << '\n';
	}
	return 0;
}