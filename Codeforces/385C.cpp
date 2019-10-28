#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
const ll MAXX = (ll)1e7;

int n, m;
int freq[MAXX+2];
ll F[MAXX+2];
vector<int> primes;
bitset<MAXX> bs;

void modif_sieve(){
	bs.set();
	bs[0] = false; bs[1] = false;
	for (ll i = 2; i <= MAXX; i++) {
		if (bs[i]) {
			primes.pb(i);
			ll tmp = 1ll*freq[i];
			ll bil = i*2;
			while (bil <= MAXX){
				bs[bil] = false;
				tmp += 1ll*freq[bil];
				bil += i;
			}
			int noww = (int)primes.size();
			if (noww == 1) F[noww - 1] = tmp;
			else F[noww - 1] = F[noww - 2] + tmp;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		int tm;
		cin >> tm; freq[tm]++;
	}
	modif_sieve();
	cin >> m;
	int akhir = (int)primes.size()-1;
	while (m--) {
		int l, r;
		cin >> l >> r;
		if (l > primes[akhir]) cout << 0 << '\n';
		else {
			if (r > primes[akhir]) {
				r = primes[akhir];	
			}
			int lo = lower_bound(primes.begin(), primes.end(), l) - primes.begin();
			int hi = upper_bound(primes.begin(), primes.end(), r) - primes.begin();
			hi--;
			cout << (lo == 0 ? F[hi] : F[hi] - F[lo - 1]) << '\n';
		} 
	}
	return 0;	
}