#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,i,j;
vector<ll> ans;
vector<ll> primes;
bool bil[10000005];

void sieve(){
	memset(bil,true,sizeof bil);
	for (i = 2 ; i <= 10000000; i++) {
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
	for (i = 2 ; i <= 10000; i++) {
		j = i;
		int beda,idx;
		beda = 0; idx = 0;
		while (j>1) {
			while (idx<primes.size() && j%primes[idx]!=0) idx++;
			bool pertama = true;
			while (j%primes[idx]==0) {
				if (pertama) {
					pertama = false;
					beda++;
				}
				j /= primes[idx];
			}
			idx++;
		}
		if (beda>=3) ans.push_back(i);
	}
	
	cin >> t;
	while (t--) {
		cin >> n;
		n--;
		cout << ans[n] << '\n';
	}
	return 0;
}