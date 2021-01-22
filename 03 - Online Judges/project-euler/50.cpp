#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n,i,j;
bool bil[1000005];
vector<ll> primes;

void sieve(){
	memset(bil,true,sizeof bil);
	bil[1] = false;
	for (i = 2 ; i <= 1000000; i++){
		if (bil[i]){
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
	if (bil[953]) cout << "prime" << '\n';
	return 0;
}