#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef pair<int,int> ii;

int n, m, maks[100005];
vector<ii> arr;

int cari(int x){
	int ki = 0, ka = (int)arr.size()-1;
	int res = 0;
	while (ki <= ka) {
		int mid = (ki + ka)>>1;
		if (arr[mid].fi > x) {
			ka = mid - 1;
		}
		else if (arr[mid].fi <= x){
			res = mid;
			ki = mid + 1;
		}
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	int grid[n+5][m+5];
	for (int i = 1; i <= n ; i++) 
		for (int j = 1; j <= m ; j++)
			cin >> grid[i][j];
	
	for (int i = 1 ; i <= m ; i++) {
		int j = 1;
		while (j <= n) {
			int curr = grid[j][i];
			int jj = j + 1;
			while (jj <= n && grid[jj][i] >= curr) {
				curr = grid[jj][i];
				jj++;
			}
			arr.pb({j,jj-1});
			j = jj;
		}
	}
	sort(arr.begin(), arr.end());
	for (int i = 0 ; i < (int)arr.size(); i++) {
		if (i == 0) maks[i] = arr[i].se;
		else maks[i] = max(maks[i-1], arr[i].se);
	}
	int t;
	cin >> t;
	while (t--) {
		int l,r;
		cin >> l >> r;
		int batas = cari(l);
		if (maks[batas] >= r) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;	
}