#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int n1, n2, k1, k2;
ll dp[105][105][5][15];

const ll MOD = (ll)1e8;

ll cari(int sol1,int sol2,int aktif,int sblm){
	if (sol1 == n1 && sol2 == n2) {
		ll res = 0;
		if (sol1 != 0) res += cari(sol1 - 1, sol2, 1, 1);
		res %= MOD;
		if (sol2 != 0) res += cari(sol1, sol2 - 1, 2, 1);
		res %= MOD;
		return dp[sol1][sol2][aktif][sblm] = res; 
	}
	else {
		if (sol1 == 0 && sol2 == 0) return 1;
		if (sol1 == 0 && aktif == 2 && sblm == k2) return 0;
		if (sol2 == 0 && aktif == 1 && sblm == k1) return 0;
		if (dp[sol1][sol2][aktif][sblm] != -1) return dp[sol1][sol2][aktif][sblm];
		ll res = 0;
		if (sol1 > 0) {
			if (aktif == 2) {
				res += cari(sol1-1,sol2,1,1);
				res %= MOD;
			}
			else {
				if (sblm < k1) res +=  cari(sol1-1, sol2, 1, sblm+1);
				res %= MOD;
			}
		}
		if (sol2 > 0) {
			if (aktif == 1) {
				res += cari(sol1,sol2-1,2,1);
				res %= MOD;
			}
			else {
				if (sblm < k2) res +=  cari(sol1, sol2-1, 2, sblm+1);
				res %= MOD;
			}	
		}
		return dp[sol1][sol2][aktif][sblm] = res;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n1 >> n2 >> k1 >> k2;
	memset(dp, -1, sizeof dp);
	cout << cari(n1, n2, 0, 0) << '\n';
	return 0;
}