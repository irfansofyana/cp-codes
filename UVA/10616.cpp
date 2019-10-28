#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const int N = 200;

ll n,q,m,d;
ll i,j;
ll arr[N + 5];
ll dp[N + 5][20 + 5][10 + 5];
int tc;

ll kurangin(ll a,ll b){
	return (d + a - b)%d;
}

ll cari(ll idx,ll target,ll m){
	if (dp[idx][target][m]!=-1) return dp[idx][target][m];
	if (m == 0 && target == 0) return 1;
	if (m == 0) return 0;
	if (idx == n) return 0;
	return dp[idx][target][m] = cari(idx + 1, kurangin(target,arr[idx]%d), m-1) + cari(idx + 1, target , m);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> q) {
		if (n == 0 && q == 0) return 0;
		for (i = 0 ; i < n ; i++) cin >> arr[i];
		cout << "SET " << ++tc << ":\n";
		int ttc = 0;
		while (q--) {
			cin >> d >> m;
			memset(dp,-1,sizeof dp);
			cout << "QUERY " << ++ttc << ": " << cari(0,0,m) << '\n';
		}
	}
	return 0;
}
