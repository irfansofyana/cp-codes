#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int N = 16384;

int t,tc,i,j,n;
ll sum[N + 5],x;
map<ii,int> dp;
map<ii,bool> sudah;

inline int cari(int awal,int akhir){
	ll jumlah = sum[akhir] + (awal == 0 ? 0 : sum[awal-1]);
	ll lo,hi;
	if (jumlah % 2 != 0) return 0;
	if (akhir - awal == 1) return 1;
	if (awal >= akhir) return 0;
	else {
		jumlah /= 2;
		lo = lower_bound(sum + awal, sum + akhir + 1, jumlah) - sum;
		hi = upper_bound(sum + awal, sum + akhir + 1, jumlah) - sum;
		hi--;
	//s	cout << "batas " << lo << " " << hi << '\n';
		if (lo > hi) return 0;
		else {
			if (sudah[{awal,akhir}]) return dp[{awal,akhir}];
			int maks = 0;
			maks = max(maks,cari(awal,lo) + 1);
			maks = max(maks,cari(lo + 1, akhir) + 1);
			maks = max(maks,cari(awal, hi) + 1);
			maks = max(maks,cari(hi + 1, akhir) + 1);
			sudah[{awal,akhir}] = true;
			return dp[{awal,akhir}] = maks; 
 		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		bool adad = false;
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			if (i == 0) sum[i] = x;
			else sum[i] = sum[i-1] + x;
			if (sum[i] > 0) adad = true;
		}
		if (!adad) {
			cout << n-1 << '\n';
		}
		else {
			dp.clear(); sudah.clear();
			cout << cari(0, n-1) << '\n';
		}
	}
}
