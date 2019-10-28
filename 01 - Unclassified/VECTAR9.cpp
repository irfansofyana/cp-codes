#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int t;
ll n,m,i,j,lo,hi,mid;
ll arr[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
vector<ll> ada[200];

ll cari(ll x){
	if (x == 1) return 0;
	ll res = 0;
	ll kali = 1;
	ll akhir = -1;
	for (i = 0 ; i < 13 ; i++) {
		kali *= arr[i];
		if (kali > x) {
			akhir = i - 1;
			break;
		}
	}
	if (akhir == -1) akhir = 12;
	for (i = 0 ; i <= akhir; i++) {
		for (j = 0 ; j < ada[i+1].size(); j++) {
			if (i%2 == 0) res += (x/ada[i+1][j]);
			else res -= (x/ada[i+1][j]);
		}
	}
	return res;
}

bool cek(ll x){
	ll i;
	for (i = 0 ; i < 13; i++) {
		if (x%arr[i] == 0) return true;
	}
	return false;
}

void generate(){
	for (i = 1; i < (1 << 13); i++){
		ll frek = 0;
		ll kali = 1;
		for (j = 0 ; j < 13 ; j++) {
			if ((i&(1<<j)) > 0) {
				frek++;
				kali *= arr[j];
			}
		}
		ada[frek].pb(kali);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	cin >> t;
	while (t--) {
		cin >> n;
		lo = 1; hi = (ll)1e18;
		while (lo <= hi) {
			mid = ((lo + hi)>>1);
			if (cek(mid) && cari(mid) == n) {
				cout << mid << '\n';
				break;
			}
			else if (cari(mid) < n) {
				lo = mid + 1;
			}
			else hi = mid - 1;
		}
	}
	return 0;
}
