#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,i,j,m,sum;
bitset<10005> bil;
vector<ll> primes;
ll ans[10005];

void sieve(){
	bil.set();
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 10000; i++) {
		if (bil[i]) {
			j = i;
			primes.pb(i);
			while (i * j <= 10000){
				bil[i * j] = false;
				j++;
			}
		}
	}
}

void generate(){
	sieve();
	for (i = 0 ; i < primes.size(); i++) {
		if (primes[i] > 101) sum = 101;
		else sum = 101%primes[i];
		j = 3;
		while (sum%primes[i] != 0 && j <= primes[i]-2) {
			sum *= 100;
			sum++;
			sum %= primes[i];
			j += 2;
		}
		ans[primes[i]] = j;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	cin >> n;
	ll anss = 0;
	for (i = 0 ; i < primes.size() && primes[i] <= n ; i++) {
		if (ans[primes[i]] == primes[i]-2) anss++;
	}
	cout << anss << '\n';
	return 0;
}
