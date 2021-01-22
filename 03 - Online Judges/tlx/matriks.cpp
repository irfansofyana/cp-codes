#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<ll,pll> plll;

const ll MOD = 26101991;

ll n,i,j;
plll dp[105][105];
ll arr[105];

plll cari(ll awal,ll akhir){	//fi -> cost se.fi -> ways optimal se.se -> ways
	if (awal == akhir) return {0,{1,1}};
	if (dp[awal][akhir].fi != -1 && dp[awal][akhir].se.fi != -1 && dp[awal][akhir].se.se != -1)  return dp[awal][akhir];
	ll mini = (ll)1e18;
	//map<ll,ll> mep;
	for (int z = awal ; z < akhir ; z++) {
		ll tmp;
		tmp = (cari(awal,z).fi + cari(z+1,akhir).fi + arr[awal-1]*arr[z]*arr[akhir]);
		if (tmp < mini) mini = tmp;
		//mep[tmp]++;
	}
	ll banyak = 0;
	ll tot = 0;
	for (int z = awal ; z < akhir; z++) {
		ll tmp;
		tmp = (cari(awal,z).fi + cari(z+1,akhir).fi + arr[awal-1]*arr[z]*arr[akhir]);
		if (tmp == mini) {
			banyak +=((cari(awal,z).se.fi %MOD) * (cari(z+1,akhir).se.fi %MOD))%MOD;
			banyak %= MOD;
		}
		tot += ((cari(awal,z).se.se%MOD)*(cari(z+1,akhir).se.se%MOD))%MOD;
		tot %= MOD;
	}
	return dp[awal][akhir] = {mini, {banyak,tot}};
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n+1; i++) {
		cin >> arr[i];
	}
	for (i = 0 ; i <= 100 ; i++) {
		for (j = 0; j <= 100 ; j++)
			dp[i][j] = {-1,{-1,-1}};
	}
	int x;
	cin >> x;
	if (x == 1) cout << cari(1,n).fi << '\n';
	else if (x == 2) cout << cari(1,n).se.fi << '\n';
	else cout << cari(1,n).se.se << '\n';
	return 0;
}	