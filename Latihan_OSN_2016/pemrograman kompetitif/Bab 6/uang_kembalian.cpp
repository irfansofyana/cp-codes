#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int koin[505];
int dp[50005];

int cari(int duit) {
	if (dp[duit]!=-1) return dp[duit];
	if (duit == 0) return 0;
	int mini = (int)1e+9;
	for (int z = 0 ; z < n; z++) {
		if (koin[z] <= duit) mini = min(mini,cari(duit-koin[z]) + 1);
	}
	return dp[duit] = mini;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) 
		cin >> koin[i];
	sort(koin,koin+n);
	cin >> m;
	memset(dp,-1,sizeof dp);
	cout << (cari(m) == (int)1e+9 ? -1 : cari(m)) << '\n';
	return 0;
}