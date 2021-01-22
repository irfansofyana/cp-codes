#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int MAXN = 200000;
typedef pair<int,int> ii;

struct paket{
	int kiri,kanan,harga;
};

int n, target;
int r[MAXN+5], l[MAXN+5], cost[MAXN+5];
vector<paket> x[MAXN+5], y[MAXN+5];
map<ii,int> xx,yy;

bool cmp(paket a, paket b){
	if (a.kiri == b.kiri) return a.kanan < b.kanan;
	return a.kiri < b.kiri;
}

bool kmp(paket a,paket b){
	if (a.kanan == b.kanan) return a.kiri < b.kiri;
	return a.kanan < b.kanan;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> target;
	for (int i = 0 ; i < n ; i++) {
		cin >> l[i] >> r[i] >> cost[i];
		int durr = r[i] - l[i] + 1;
		paket tmp;
		tmp.kiri = l[i]; tmp.kanan = r[i]; tmp.harga = cost[i];
		x[durr].pb(tmp); y[durr].pb(tmp);
	}
	for (int i = 1 ; i <= MAXN; i++) {
		sort(x[i].begin(), x[i].end(), cmp);
		sort(y[i].begin(), y[i].end(), kmp);
	}
	for (int i = 1; i <= MAXN; i++) {
		if ((int)x[i].size() == 0) continue;

		for (int j = (int)x[i].size()-1 ; j >= 0; j--) {
			if (j + 1 == (int)x[i].size()) xx[{i,j}] = x[i][j].harga;
			else xx[{i,j}] = min(xx[{i,j+1}], x[i][j].harga);
		}
		
		for (int j = 0 ; j < (int)y[i].size(); j++) {
			if (j == 0) yy[{i,j}] = y[i][j].harga;
			else yy[{i,j}] = min(yy[{i,j-1}], y[i][j].harga);
		}
	}
	int ans = -1;
	
	for (int i = 0 ; i < n ; i++) {
		int cari = target - (r[i] - l[i] + 1);
		if (cari < 0) continue;
		int mid = 0;
		int ki = 0, ka = (int)x[cari].size()-1;
		int t1 = -1;
		while (ki <= ka){
			mid = (ki + ka)>>1;
			if (x[cari][mid].kiri > r[i]) {
				t1 = mid;
				ka = mid - 1;
			}
			else ki = mid + 1;
		}
		if (t1 != -1) {
			if (ans == -1) ans = xx[{cari,t1}] + cost[i];
			else ans = min(ans, xx[{cari,t1}] + cost[i]);
		}

		ki = 0; ka = (int)y[cari].size()-1;
		int t2 = -1;
		mid = 0;
		while (ki <= ka) {
			mid = (ki + ka)>>1;
			if (y[cari][mid].kanan < l[i]) {
				t2 = mid;
				ki = mid + 1;
			}
			else ka = mid - 1;
		}

		if (t2 != -1) {
			if (ans == -1) ans = yy[{cari,t2}] + cost[i];
			else ans = min(ans, yy[{cari,t2}] + cost[i]);
		}
	}

	cout << ans << '\n';
	return 0;
}
