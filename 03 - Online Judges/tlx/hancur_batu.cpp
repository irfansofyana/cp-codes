#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,i,j;
pll arr[1000005];

struct paket{
	ll kiri,kanan;
	ll nilai_asli;
}arr_baru[20000005];

ll cnt;
bool udah[1000005];

bool comp(pll a,pll b){
	if (a.se == b.se) return a.fi < b.fi;
	return a.se < b.se;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	cnt = 100001;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i].fi;
		arr[i].se = arr[i].fi;
		if (udah[arr[i].fi]) {
			arr[i].fi = cnt++;
		}
		udah[arr[i].fi] = true;
	}
	if (n == 1) {
		cout << arr[0].fi << '\n';
		return 0;
	}
	for (i = 0 ; i < n ; i++) {
		if (i == 0) {
			arr_baru[arr[i].fi].kiri = -1;
			arr_baru[arr[i].fi].kanan = arr[i+1].fi;
			arr_baru[arr[i].fi].nilai_asli = arr[i].se;
		}
		else if (i == n-1) {
			arr_baru[arr[i].fi].kanan = -1;
			arr_baru[arr[i].fi].kiri = arr[i-1].fi;
			arr_baru[arr[i].fi].nilai_asli = arr[i].se;			
		}
		else {
			arr_baru[arr[i].fi].kanan = arr[i+1].fi;
			arr_baru[arr[i].fi].kiri = arr[i-1].fi;
			arr_baru[arr[i].fi].nilai_asli = arr[i].se;
		}
	}
	sort(arr,arr+n,comp);
/*	for (i = 0 ; i < n ; i++) {
		cout << arr[i].fi << " " << arr[i].se << '\n';
	}
	cout << '\n';
	for (i = 0 ; i < n ; i++) {
		cout << arr_baru[arr[i].fi].kiri << " " << arr_baru[arr[i].fi].kanan << " " << arr_baru[arr[i].fi].nilai_asli << '\n';
	}
	cout << '\n';*/
	ll ans = 0;
	for (i = 0 ; i < n-1 ; i++) {
		ll smt = arr[i].fi;
		ll kiri_ = arr_baru[smt].kiri;
		ll kanan_ = arr_baru[smt].kanan;
		if (kiri_ == -1) {
			ans += arr_baru[kanan_].nilai_asli;
			arr_baru[kanan_].kiri = kiri_;
		}
		else if (kanan_ == -1) {
			ans += arr_baru[kiri_].nilai_asli;
			arr_baru[kiri_].kanan = kanan_;
		}
		else {
			ans += min(arr_baru[kiri_].nilai_asli, arr_baru[kanan_].nilai_asli);
			arr_baru[kiri_].kanan = kanan_;
			arr_baru[kanan_].kiri = kiri_;
 		}
	}
	cout << ans << '\n';
	return 0;
}