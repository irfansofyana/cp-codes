#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const ll MOD = (ll)1e9 + 7;

ll n,m,i,j;
ll F[105][15][15];

ll cari(ll pos,ll a,ll b){
	if (F[pos][a][b]!=-1) return F[pos][a][b];
	if (pos == n-2) {
		if (n == 3) {
			ll res = 0;
			for (ll z = 1 ; z <= 9 ; z++) {
				for (ll zz = 0 ; zz + z <= 9 ; zz++) {
					for (ll zzz = 0 ; zzz + zz + z <= 9; zzz++) {
						res += 1;
						res %= MOD;
					}
				}
			}
			return F[pos][a][b] = res;	
		}
		ll res = 0;
		for (ll z = 0 ; z <= 9 - (a + b); z++) res++;
		return F[pos][a][b] = res;
	}
	if (pos == 1) {
		ll res = 0;
		for (ll z = 1 ; z <= 9 ; z++) {
			for (ll zz = 0 ; zz + z <= 9 ; zz++) {
				for (ll zzz = 0 ; zzz + zz + z <= 9; zzz++) {
					res += cari(pos + 1, zz, zzz);
					res %= MOD;
				}
			}
		}
		return F[pos][a][b] = res;
	}
	ll res = 0;
	for (ll z = 0 ; z <= 9 - (a + b); z++) {
		res += cari(pos + 1, b, z);
		res %= MOD;
	}
	return F[pos][a][b] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	memset(F,-1,sizeof F);
	cout << cari(1,0,0) << '\n';
	return 0;
}