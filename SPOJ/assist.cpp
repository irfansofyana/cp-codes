#include <bits/stdc++.h>
using namespace std;

const int MAXN = (int)1e5 + 5;

int n,i,j;
vector<int> primes;
bool candidates[MAXN];

inline void sieve(){
	memset(candidates,true,sizeof candidates);
	for (i = 2 ; i <= MAXN-5; i++) {
		if (candidates[i]) {
			j = i;
			while (i * j <= MAXN-5) {
				candidates[i*j] = false;
				j++;
			}
			primes.push_back(i); 
		}
	}
}

int main(){
	sieve();
	while (scanf("%d", &n)){
		if (n == 0) return 0;
		else printf("%d\n", primes[n-1]);
	}
	return 0;
}