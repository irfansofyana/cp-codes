#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
bool bil[10000005];
map<ll,bool> mep;

bool cek_prima(ll x){
	if (x<=1) return false;
	for (ll z = 2; z <= (ll)sqrt(x); z++){
		if (x%z==0) return false;
	}
	return true;
}

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 10000000; i++) {
		if (bil[i]) {
			j = i;
			while (i * j <= 10000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t,tc;
	sieve();
	tc = 0;
	cin >> t;
	while (t--) {
		cin >> n;
		ll sum = 0;
		mep.clear();
		while (n--) {
			cin >> m;
			if (m <= 10000000) {
				if (bil[m] && !mep[m]) {
					sum += m;
					mep[m] = true;
				}
			}
			else {
				if (cek_prima(m) && !mep[m]) {
					mep[m] = true;
					sum += m;
				}
			}
		}
		cout << "Case #" << ++tc << ": " << sum << '\n';
	}
	return 0;
}