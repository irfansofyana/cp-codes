#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MAXN = (ll)1e6;

ll a, b, k;
ll prefix[MAXN+5];
bitset<MAXN+5> bil; 

void sieve(){
	bil.set();
	bil[0] = bil[1] = false;
	for (int i = 2; i <= MAXN; i++) {
		if (bil[i]) {
			for (ll j = i; i * j <= MAXN; j++) {
				bil[i*j] = false;
			}
		}
	}
	prefix[0] = 0; prefix[1] = 0; 
	for(int i = 2; i <= MAXN; i++) {
		prefix[i] = prefix[i-1] + (bil[i] ? 1 : 0);
	}
}

bool cek(ll x){
	for (int i = a; i <= b-x+1; i++) {
		if (prefix[i+x-1] - prefix[i-1] < k) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> a >> b >> k;
	ll awal = 1; ll akhir = b-a+1; ll ans = (ll)1e9;
	while (awal <= akhir) {
		ll mid = (awal + akhir)>>1;
		if (cek(mid)) {
			ans = mid;
			akhir = mid-1;
		}
		else awal = mid+1;
	}
	cout << (ans == (ll)1e9 ? -1 : ans) << '\n';
	return 0;
}
