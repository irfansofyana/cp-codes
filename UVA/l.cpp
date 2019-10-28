#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MAXN = (ll)1e6;

ll n,m,i,j,freq;
ll prefix[MAXN + 5];
bool primes[MAXN + 5];
ll arr[MAXN + 5];

void sieve(){
	memset(primes,true,sizeof primes);
	primes[1] = primes[0] = false;
	freq = 0;
	for (i = 2; i <= MAXN ; i++) {
		if (primes[i]) {
			arr[freq++] = i;
			j = i;
			while (i*j <= MAXN) {
				primes[i*j] = false;
				j++;
			}
		}
	}
}

ll M(ll x){
	if (x == 1) return 1;
	else if (primes[x]) return -1;
	else {
		ll res = 0;
		for (ll z = 0 ; z < freq && x > 1; z++){
			if (x%arr[z]==0) {
				res++;
				int cc=0;
				while (x%arr[z]==0) {
					cc++;
					x /= arr[z];
				}
				if (cc >= 2) return 0;
				if (x == 1) break;
				if (primes[x]) {
					res++; break;
				}
			}
		}
		return (res%2 == 0 ? 1 : -1);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	for (i = 1 ; i <= MAXN; i++) {
		prefix[i] += prefix[i-1] + M(i);
	}
	for (i = 1 ; i <= 20 ; i++) {
		cout << i << " " << prefix[i] << '\n';
	}
}