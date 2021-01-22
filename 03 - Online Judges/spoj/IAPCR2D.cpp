#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,i,j;
bool bil[115];
vector<ll> primes;
ll jum[115];
map<ll,ll> mep;

void generate(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 110; i++) {
		if (bil[i]) {
			j = i;
			while (i * j <= 110) {
				bil[i*j] = false;
				j++;
			}
			primes.push_back(i);
		}
	}
	memset(jum, 0 , sizeof jum);
	for (i = 1 ; i <= 110; i++) {
		if (i == 1) {
			mep[1] = 1;
		}
		else {
			ll idx,pf;
			j = i;
			idx = 0; pf = primes[idx];
			while (pf * pf <= j) {
				if (j % pf == 0) {
					ll tt = 0;
					while (j%pf == 0) {
						tt++;
						j /= pf;
					}
					jum[pf] += tt;
				}
				pf = primes[idx++];
			}
			if (j != 1) jum[j]++;
			ll smt = 1;
			for (j = 0 ; j < primes.size(); j++){
				smt *= (jum[primes[j]] + 1);
			//	if (smt > (ll)1e18) break;
			}
			//if (j < primes.size()) break;
			if (mep[smt] == 0) mep[smt] = i;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	//cout << fac[110] << '\n';
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		if (mep[n] == 0) cout << "nai\n";
		else cout << mep[n] << '\n';
	}
	return 0;
}
