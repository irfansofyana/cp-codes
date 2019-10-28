#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int n,i,j,x,y,k,neks,beda;
vector<int> primes;
bool bil[32105];
int lo,hi,it;

void sieve(){
	memset(bil, true, sizeof bil);
	bil[0] = bil[1] = false;
	int z,zz;
	for (z = 2 ; z <= 32100; z++) {
		if (bil[z]) {
			primes.pb(z);
			zz = z;
			while (zz * z <= 32100) {
				bil[z*zz] = false;
				zz++;	
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	while (cin >> x >> y){
		if (x == 0 && y == 0) return 0;
		lo = lower_bound(primes.begin(), primes.end(), x) - primes.begin();
		hi = upper_bound(primes.begin(), primes.end(), y) - primes.begin();
		hi--;
		//cout << lo << " " << hi << '\n';
		i = lo;
		while (i <= hi) {
			j = i+1;
			if (i > hi) break;
			while (j <= hi) {
				if (j - i == 1) {
					beda = primes[j]-primes[i];
					k = 2;
				}
				else {
					if (primes[j]-primes[j-1] != beda) break;
					else k++;
				}
				j++;
			}
			if (k >= 3) {
				for (it = i ; it <= j-1; it++) {
					cout << primes[it] ;
					cout << (it == j-1 ? '\n' : ' ');
				}
				i = j-1;
			}
			else i++;
		}
	}
	return 0;
}
