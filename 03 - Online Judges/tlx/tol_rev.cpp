#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,m,t,awal,akhir,i,j;
vector<ll> arr[505];
bool tol[505][505];
ll x,y;
ll dp[505][2];
bool udah[505];

ll cari(ll idx,ll sisa){
	//udah[idx] = true;
	if (idx == akhir) return 0;
	//if (dp[idx][sisa] != -1) return dp[idx][sisa];
	ll mini = INT_MAX;
	udah[idx] = true;
	for (ll z = 0 ; z < arr[idx].size(); z++) {
		ll next_kota = arr[idx][z];
		//if (sisa == 0 && tol[idx][next_kota]) continue;
		if (sisa == 0 && !tol[idx][next_kota] && !udah[next_kota]) mini = min(mini, cari(next_kota, sisa) + 1);
		else if (sisa == 1 && tol[idx][next_kota] && !udah[next_kota]) {
			mini = min(mini, cari(next_kota, sisa - 1) + 1);
		}
		else if (sisa == 1 && !tol[idx][next_kota] && !udah[next_kota]) mini = min(mini, cari(next_kota, sisa) + 1);
		//if (idx == 7) cout << next_kota << " " << mini << '\n';
	}
	udah[idx] = false;
	//if (idx == 7) cout << mini << '\n';
	//return dp[idx][sisa] = mini;
	return mini;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> t >> awal >> akhir;
	for (i = 0 ; i  < m ; i++) {
		cin >> x >> y;
		arr[x].pb(y);
		arr[y].pb(x);
	}
	for (i = 0 ; i < t ; i++) {
		cin >> x >> y;
		arr[x].pb(y);
		arr[y].pb(x);
		tol[x][y] = true;
		tol[y][x] = true;
	}  
	memset(dp,-1,sizeof dp);
	ll ans1 = cari(awal, 0);
	//cout << ans1 << endl;
	memset(dp,-1,sizeof dp);
	memset(udah, false, sizeof udah);
	ll ans2 = cari(awal, 1); 
	//cout << cari(2,0) << '\n';
	//cout << cari(3,0) << '\n';
	cout << min(ans1, ans2) << '\n';
	return 0;
}