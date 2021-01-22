#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll w,m,k;
pll arr[20];
ll i,j,lo,hi,terakhir,mid;

void isi(){
	ll x = 1; 
	ll y = 9;
	for (i = 1 ; i <= 17; i++) {
		arr[i] = {x,y};
		x *= 10; 
		y *= 10; y += 9;
	}
}

ll cari(ll x){
	for (ll i = 1 ; i <= 17; i++){
		if (arr[i].fi <= x && x <= arr[i].se) return i;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> w >> m >> k;
	isi();
	ll banyak_digit = cari(m);
	ll cost_awal = (arr[banyak_digit].se-m+1)*banyak_digit;
	if ((double)banyak_digit > (double)w/k) {
		cout << 0 << '\n';
		return 0;
	}
	if ((double)cost_awal > (double)w/k) {
		//cout << "anjat" << '\n';
		lo = m; hi = arr[banyak_digit].se;
		terakhir = m;
		while (lo <= hi) {
			mid = (lo + hi)/2;
			if ((double)(mid - m + 1)*banyak_digit <= (double)w/k){
				terakhir = mid;
				lo = mid + 1;
			}
			else {
				hi = mid - 1;
			}
		}
		cout << terakhir-m+1 << '\n';
		return 0;
	}
	//588.235.294.117.647
	//10000000000000000 9.999.999.999.999.999 1

	else {
		w -= cost_awal*k;
		//cout << w << '\n';
		terakhir = arr[banyak_digit].se;
		//cout << "banyak digit " << banyak_digit << '\n';
		for (i = banyak_digit + 1; i <= 17; i++) {
			if ((double)w/k >= (double)((arr[i].se - arr[i].fi + 1)*i)) {
				//cout << (arr[i].se - arr[i].fi + 1) * i * k << '\n';
				w -= (arr[i].se - arr[i].fi + 1) * i * k;
				terakhir = arr[i].se;
			}
			else {
				j = i;
				break;
			}
		}
		terakhir = arr[j-1].se;
		//cout << "digit " << j << '\n';
		//cout << w << '\n';
		lo = arr[j].fi; hi = arr[j].se;
		//cout << (hi - lo + 1) * j * k << '\n';
		while (lo <= hi) {
			mid = (lo + hi) / 2;
			//cout << mid << '\n';
			if ((mid - arr[j].fi + 1) * j * k <= w) {
				terakhir = mid;
				lo = mid + 1;
			}
			else hi = mid - 1;
		}
		cout << terakhir - m + 1 << '\n';
	}
	return 0;
}