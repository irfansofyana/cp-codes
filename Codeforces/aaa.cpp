#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;
 
const int N = (int)1e5;
 
typedef long long ll;
typedef pair<ll,ll> pll;
 
ll n,i,j;
vector<pll> pos,neg;
ll ans;
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		ans = 0;
		if (n == 0) return 0;
		pos.clear(); neg.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> j;
			if (j >= 0) pos.pb({j,i});
			else neg.pb({j,i});
		}
		i = 0; j = 0;
		while (i < pos.size() && j < neg.size()){
			ll a = pos[i].fi;
			ll b = abs(neg[j].fi);
			if (a >= b) {	//kalo toko yang jual punya barang lebih dari yang dibutuhkan sekarang:
				ans += b*(abs(pos[i].se - neg[j].se));
				pos[i].fi -= b; //dikurang b barang
				j++; //kebutuhan udah terpenuhi maka pindah ke kebutuhan selanjutnya
			}
			else if (b > a) {
				ans += a*(abs(pos[i].se - neg[j].se));
				neg[j].fi += a; //kita baru mendapatkan a barang. 
				i++; //kita coba ke toko berikutnya
			}
		}
		cout << ans << '\n';
	}
	return 0;
} 