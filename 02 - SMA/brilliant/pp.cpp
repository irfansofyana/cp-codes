#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
vector<ll> primes;
bool bil[100005];

void sieve(){
	memset(bil,true,sizeof bil);
	bil[1] = false;
	bil[0] = false;
	for (i = 2 ; i <= 100000; i++) {
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i*j <= 100000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	sieve();
	ll ans = 0;
	for (i = 0 ; i < primes.size(); i++){
		j = primes[i];
		if (j>=2016) break;
		if (bil[j+4] && bil[j+12]) ans++;
	}
	cout << ans << '\n';
}