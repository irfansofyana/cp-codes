#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll t;
bool bil[1000005];
vector<ll> primes;
vector<ll> ada;
ll A[1000005];

void sieve(){
	memset(bil,true,sizeof bil);
	for (i = 2 ; i <= 1000000; i++) {
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i*j<=1000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> t;
	while (t--) {
		cin >> n;
		ada.clear(); memset(A,0,sizeof A);
		for (i = 0 ; i < n ; i++) {
			ll x;
			cin >> x;
			j = 0;
			while (x>1) {
				while (j < primes.size() && x%primes[j]!=0 ) {j++;}
				while (x%primes[j]==0) {
					A[primes[j]]++;
					if (A[primes[j]]==1) ada.push_back(primes[j]); 
					x /= primes[j];
				}
				j++;
			}
		}
		ll hasil = 1;
		for (i = 0 ; i < ada.size(); i++) {
			hasil *= A[ada[i]]+1;
		}
		cout << hasil << '\n';
	}
	return 0;
}