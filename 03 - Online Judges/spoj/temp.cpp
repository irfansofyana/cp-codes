#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MAXN = (ll)1e6;

ll n,m,i,j,cnt,sz;
bool bil[MAXN + 5];
ll primes[MAXN],K[MAXN];

inline bool cek(ll n){
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n > 2 && n%2 == 0) return false;
	for (ll z = 3 ; z <= (ll)sqrt(n);z+=2){
		if (n%z == 0) return false;
	}
	return true;
}
inline void generate(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2; i <= MAXN; i++) {
		if (bil[i]) {
			j = i;
			while (i * j <= MAXN) {
				bil[i*j] = false;
				j++;
			}
			primes[cnt++] = i;
		}
	}
	for (i = 0 ; i < cnt; i++) {
		ll sum = 1;
		ll curr = primes[i];
		while (curr <= MAXN) {
			sum += curr;
			if (cek(sum)) K[sz++] = curr;
			curr *= primes[i];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	//cout << cnt << '\n';
	for (i = 0 ; i < sz; i++) {
		cout << K[i] << '\n';
	}
	return 0;
}