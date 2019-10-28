/*
	Problem 	: J. Finding password
	created		: 07-10-2017
	solution by : cokguzel48 (Irfan Sofyana Putra)
*/

#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef pair<int,int> ii;

const int NMAX = 100;

int T;
int k, n, dp[NMAX+3][NMAX+3][13];
ii arr[NMAX+5];
vector<int> ans;

int banyak(int x){
	int dig = 0;
	while (x > 0) {
		dig++;
		x/=10;
	}
	return dig;
}

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

bool comp(ii a, ii b){
	string x = ubah(a.fi);
	string y = ubah(b.fi);
	string tt = ""; tt = tt + x; tt = tt + y;
	string t = ""; t = t+y; t = t+x;
	return (tt > t);
}

int cari(int idx,int sisa,int target) {
	if (idx == n && sisa == 0 && target == 0) return 0;
	if (idx == n && (sisa != 0 || target != 0)) return -(int)1e7;
	if (dp[idx][sisa][target] != -1) return dp[idx][sisa][target];
	//ambil
	int nilai1 = -(int)1e9;
	int nilai2 = -(int)1e9;
	if (sisa > 0) nilai1 = arr[idx].se + cari(idx + 1, sisa - 1, (target - (arr[idx].fi)%9 + 9)%9);
	nilai2 = cari(idx+1, sisa, target);
	return dp[idx][sisa][target] = max(nilai1, nilai2);
}

void jelajah(int idx,int sisa,int target) {
	if (idx == n) return;
	int n1 = -(int)1e9, n2 = -(int)1e9;
	if (sisa > 0) n1 = arr[idx].se + cari(idx + 1, sisa - 1, (target - (arr[idx].fi)%9 + 9)%9);
	n2 = cari(idx + 1, sisa, target);
	if (n1 > n2) {
		ans.pb(arr[idx].fi);
		jelajah(idx + 1, sisa - 1, (target - (arr[idx].fi)%9 + 9)%9);
	}
	else if (n1 == n2 && n1 != -(int)1e9) {
		ans.pb(arr[idx].fi);
		jelajah(idx + 1, sisa - 1, (target - (arr[idx].fi)%9 + 9)%9);
	}
	else jelajah(idx + 1, sisa, target);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> n >> k;
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i].fi;
			arr[i].se = banyak(arr[i].fi);
		}
		sort(arr, arr+n, comp);
		memset(dp, -1, sizeof dp);
		if (cari(0, k , 0) <= 0) cout << -1 << '\n';
		else {
			ans.clear();
			jelajah(0, k , 0);
			for (int i = 0 ; i < ans.size(); i++) cout << ans[i];
			cout << '\n';
		}	
	}
	return 0;
}