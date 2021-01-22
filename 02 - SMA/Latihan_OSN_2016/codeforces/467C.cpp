#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct paket{
	ll kiri,kanan;
	ll jumlah;
};

vector<paket> A;
paket tmp;
ll n,i,j,m,k;
ll sum[5005];
ll jum,terakhir;
ll dp[5005][5005];

ll cari(ll idx,ll udah){
	if (idx >= (ll)A.size()) return 0;
	if (udah == k) return 0;
	if (dp[idx][udah]!=-1) return dp[idx][udah];
	return dp[idx][udah] = max(cari(A[idx].kanan,udah+1)+A[idx].jumlah,cari(idx+1,udah));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	for (i = 1 ; i <= n ; i++) {
		ll x;
		cin >> x;
		sum[i] += sum[i-1] + x;
	}
	for (i = 1 ; i <= n ; i++) {
		if (i + m - 1 <= n) {
			jum = sum[i+m-1]-sum[i-1];
			tmp.jumlah = jum;
			tmp.kiri = i;
			tmp.kanan = i+m-1;
			A.push_back(tmp);
		}
	}
	memset(dp,-1,sizeof dp);
	cout << cari(0,0) << '\n';
	return 0;
}