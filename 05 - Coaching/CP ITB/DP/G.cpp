/*	
	Problem		: G-The Bridges of Kolsberg
	created		: 08-10-2017
	solution by	: cokguzel48 (Irfan Sofyana Putra)
*/

#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

struct paket{
	ll cost;
	string nama, os;
};

ll t, n, m;
pll dp[1005][1005];
string s;
paket north[1005], south[1005];

pll cari(ll atas,ll bawah) {
	if (atas >= n || bawah >= m) return {0,0};
	if (dp[atas][bawah].fi != -1 && dp[atas][bawah].se != -1) return dp[atas][bawah];
	pll tmp = {0,0};
	if (north[atas].os == south[bawah].os) {
		//maju semua
		tmp.fi = cari(atas+1,bawah+1).fi + north[atas].cost + south[bawah].cost;
		tmp.se = cari(atas+1,bawah+1).se + 1;
	}
	else {
		//maju semua
		tmp.fi = cari(atas + 1, bawah + 1).fi;
		tmp.se = cari(atas + 1, bawah + 1).se;
	}
	//atas + 1, bawah tetep
	if (cari(atas + 1, bawah).fi > tmp.fi) {
		tmp.fi = cari(atas + 1, bawah).fi;
		tmp.se = cari(atas + 1, bawah).se;
	}
	else if (cari(atas + 1, bawah).fi == tmp.fi && cari(atas+1, bawah).se < tmp.se) {
		tmp.fi = cari(atas + 1, bawah).fi;
		tmp.se = cari(atas + 1, bawah).se;
	}
	//atas tetep, bawah+1;

	if (cari(atas, bawah+1).fi > tmp.fi) {
		tmp.fi = cari(atas, bawah+1).fi;
		tmp.se = cari(atas, bawah+1).se;
	}
	else if (cari(atas, bawah+1).fi == tmp.fi && cari(atas, bawah+1).se < tmp.se) {
		tmp.fi = cari(atas, bawah+1).fi;
		tmp.se = cari(atas, bawah+1).se;
	}
	return dp[atas][bawah] = tmp;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) 
			cin >> north[i].nama >> north[i].os >> north[i].cost;
		cin >> m;
		for (int i = 0 ; i < m ; i++) 
			cin >> south[i].nama >> south[i].os >> south[i].cost;
		memset(dp, -1, sizeof dp);
		cout << cari(0,0).fi << " " << cari(0,0).se << '\n';
	}
	return 0;
}