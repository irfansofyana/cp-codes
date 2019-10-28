#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N,i,j;
ll A[20000005];
bool bil[20000005];
vector<ll> primes;

void sieve(){
	memset(bil,true,sizeof bil);
	for (i = 2; i <= 20000000; i++) {
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i*j<=20000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	A[1] = 23; j = 2;
	for (i = 0 ; i < primes.size(); i++) {
		ll temp ;
		if (i%2==0) temp = primes[i]*-1;
		else temp = primes[i];
		A[j] = A[j-1]+temp;
		j++;
	}
	while (cin >> N) {
		cout << A[N] << " Hz" << '\n';
	}
	return 0;
}