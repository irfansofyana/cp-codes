#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long ll;

int t;
ll n,i,j,tmp;
ll dp[25][(1 << 20) + 5];
int arr[25][25];

ll cari(ll orang,ll curr){
	if (orang == n) return 1;
	if (dp[orang][curr] != -1) return dp[orang][curr];
	ll res = 0;
	for (int z = 0 ; z < n ; z++) {
		if (arr[orang][z] == 1 && (curr & (1 << z)) == 0) 
			res += cari(orang + 1, (curr | (1 << z)));
	}
	return dp[orang][curr] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				cin >> arr[i][j];
			}
		}
		memset(dp, -1, sizeof dp);
		cout << cari(0,0) << '\n';
	}
	return 0;
}
