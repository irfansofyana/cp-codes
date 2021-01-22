#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
bool bil[10000005];
vector<ll> primes;

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 10000000; i++) {
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i*j<=10000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

ll jumlah(ll x){
	ll ans = 0;
	while (x>0) {
		ans += x%10;
		x /= 10;
	}
	return ans;
}

ll hasil(ll x){
	ll res = 0;
	ll idx = 0;
	while (x>1) {
		if (x%primes[idx]!=0) idx++;
		else {
			ll frek = 0;
			while (x%primes[idx]==0) {
				frek++;
				x /= primes[idx];
			}
			res += jumlah(primes[idx]);
			idx++;
		}
	}
	return res;
}

bool cek(ll x){
	if (jumlah(x)==hasil(x)) return true;
	return false;
}

int main(){
	sieve();
	for (i = 1 ; i > 0 ; i++) {
		if (!bil[i] && !bil[i+1] && !bil[i+2] && !bil[i+3]) {
			if (cek(i) && cek(i+1) && cek(i+2) && cek(i+3)) {
				cout << i << '\n'; return 0;
			}
		}
	}
}