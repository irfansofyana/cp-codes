#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,x;
vector<ll> primes;
bool bil[10000005];

void sieve(){
	memset(bil,true,sizeof bil);
	bil[1] = false;
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

bool cek(ll k){
	if (k==1) return false;
	for (i = 2; i <= (ll)sqrt(k); i++){
		if (k%i==0) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> n;
	if (cek(n)) cout << 1 << '\n';
	else {
		ll ans = 0;
		for (i = 0 ; i < primes.size(); i++){
			if (n%primes[i]==0) {
				while (n%primes[i]==0) {
					ans++;
					n/=primes[i];
				}
			}
			if (n==1) break;
		}
		if (cek(n)) ans++;
		cout << ans << '\n';
	}
	return 0;
}