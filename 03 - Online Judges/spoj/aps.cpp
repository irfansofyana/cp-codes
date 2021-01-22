#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MAXN = (ll)1e7 + 5;

int t;
ll n,i,j;
ll numb[MAXN],F[MAXN];

inline void resett(){
	for (i = 1 ; i <= MAXN-5; i++) numb[i] = (ll)1e9;
}

inline void precompute(){
	resett();
	for (i = 2; i <= MAXN-5; i++) {
		if (numb[i] == (ll)1e9) {
			numb[i] = i;
			j = i;
			while (i * j <= MAXN-5) {
				numb[i*j] = min(numb[i*j],i);
				j++;
			}
		}
	}
	F[0] = F[1] = 0;
	for (i = 2 ; i <= MAXN-5; i++) 
		F[i] = F[i-1] + numb[i];
}

int main(){
	precompute();
	scanf("%d", &t);
	/*for (i = 2 ; i <= 20 ; i++) {
		printf("%lld %lld\n", i, numb[i]);
	}*/
	while (t--) {
		scanf("%lld", &n);
		printf("%lld\n", F[n]);
	}
	return 0;
}