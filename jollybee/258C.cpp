#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = (int)1e9 + 7;

int n,i,j,k,m;
int x,dp[21][(1 << 20) + 1];
bool udah[25];
vector<int> arr[25];

int cari(int idx, int bitmask){
	if (idx == n) return 1;
	if (dp[idx][bitmask] != -1) return dp[idx][bitmask];
	int res = 0;
	for (int z = 0 ; z < arr[idx].size(); z++) {	//untuk setiap orang, cek bisa ke kelompok apa aja yang belum 
		if ((bitmask & (1 << arr[idx][z])) == 0) {
			res = (res +  cari(idx + 1,(bitmask |  (1 << arr[idx][z]))))%MOD;
		}
	}
	return dp[idx][bitmask] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> m;
		memset(udah, false, sizeof udah);
		for (j = 0 ; j < m ; j++) {
			cin >> x;
			x--;
			if (!udah[x]) {
				udah[x] = true;
				arr[i].push_back(x);
			}
		}
	}
	memset(dp, -1, sizeof dp);
	cout << cari(0,0) << '\n';
	return 0;
}
