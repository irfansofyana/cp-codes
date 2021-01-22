#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const int N = (int)2e6;

int t;
ll n,m,i,j;
bitset<N + 5> bil;
vector<ll> himp;
ll dp[20005][5];

void sieve(){
	bil.set();
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= N; i++){
		if (bil[i]) {
			j = i;
			while (i * j <= N) {
				bil[i * j] = false;
				j++;
			}
		}
	}
}

void pre_compute(){
	sieve();
	for (i = 1; i <= 1000; i++) {
		for (j = 1 ; j <= 1000 ; j++){
			if (bil[i*i + j*j]) {
				himp.pb(i * i + j * j);
				bil[i * i + j  * j] = false;
			}
		}
	}
	sort(himp.begin(),himp.end());
	//cout << himp.size() << '\n';
}

ll cari(ll bil,ll maks){
	ll res = 0;
	if (dp[bil][maks] != -1) return dp[bil][maks];
	if (bil == 0) return 1;
	for (ll z = min(maks,bil) ; z >= 1; z--) {
		res += cari(bil-z, z);
	}
	return dp[bil][maks] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	sieve();
	pre_compute();
	cin >> t;
	while (t--) {
		cin >> n >> m;
		n--;
		//cout << himp[n] << '\n';
		memset(dp, -1, sizeof dp);
		cout << cari(himp[n],m) << '\n';
	}
	return 0;
}
