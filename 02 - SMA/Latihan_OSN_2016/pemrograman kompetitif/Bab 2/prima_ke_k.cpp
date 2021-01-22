#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t;
ll n,i,j;
vector<ll> primes;
bool bil[10000005];

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 10000000 ; i++) {
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

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	sieve();
	cin >> t;
	while (t--) {
		cin >> n;
		n--;
		cout << primes[n] << '\n';
	}
	return 0;
}