#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,m,i,j;
pll benda[2005];
pll dp[2005][2005];
bool path[2005];

pll cari(ll idx,ll berat){	//nilai, berat
	if (idx == n) return {0,0};
	if (dp[idx][berat].fi != -1 && dp[idx][berat].se != -1) return dp[idx][berat];
	
	if (benda[idx].fi > berat) return dp[idx][berat] = cari(idx + 1, berat);
	//ambil 
	
	pll tmp1,tmp2,tmp3;
	if (benda[idx].fi <= berat) {
		tmp1 = cari(idx + 1, berat - benda[idx].fi);
		tmp2 = {benda[idx].se + tmp1.fi, benda[idx].fi + tmp1.se};
	}
	tmp3 = cari(idx + 1, berat);
	
	if (tmp2.fi > tmp3.fi) {
		//path.pb(idx);
		return dp[idx][berat] = tmp2;
	}
	else if (tmp2.fi == tmp3.fi) {
		if (tmp2.se < tmp3.se) {
			//path.pb(idx);
			return dp[idx][berat] = tmp2;
		}
		else if (tmp2.se == tmp3.se) return dp[idx][berat] = tmp2;
		else return dp[idx][berat] = tmp3;
	}
	else if (tmp2.fi < tmp3.fi) return dp[idx][berat] = tmp3;
}

void print(ll idx,ll berat){
	if (idx == n) return;
	if (benda[idx].fi > berat) {
		print(idx + 1, berat); 
		return;
	}

	pll tmp1 = dp[idx + 1][berat - benda[idx].fi];
	tmp1 = {tmp1.fi + benda[idx].se, benda[idx].fi + tmp1.se};

	pll tmp2 = dp[idx + 1][berat];

	if (tmp1.fi > tmp2.fi) {
		cout << idx + 1 << '\n';
		print(idx + 1, berat - benda[idx].fi);
		return;
	}
	else if (tmp1.fi == tmp2.fi) {
		if (tmp1.se < tmp2.se) {
			cout << idx + 1 << '\n';
			print(idx + 1, berat - benda[idx].fi);
			return;
		}
		else if (tmp1.se == tmp2.se) {
			cout << idx + 1 << '\n';
			print(idx + 1, berat - benda[idx].fi);
			return;
		}
		else print(idx + 1, berat);
		return;
	}else
	if (tmp1.fi < tmp2.fi) print(idx + 1, berat);
	return;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> m >> n;
	for (i = 0 ; i < n ; i++) 
		cin >> benda[i].fi >> benda[i].se;
	//memset(dp, -1, sizeof dp);
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j <= 2000; j++)
			dp[i][j] = {-1,-1};
	}
	//cout << cari(0,m).fi << " " << cari(0,m).se << '\n';
	pll ans = cari(0,m);
	print((ll)0,m);
	return 0;
}