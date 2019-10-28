#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> primes;
bool bil[1000005];
vector<pair<ll,ll> > ans;
ll n,i,j,k;

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 1000000; i++) {
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i*j <= 1000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> n;
	for (i = 0 ; i < primes.size() && n > 1 ; i++){
		if (n%primes[i]==0) {
			ll pkt = 0;
			while (n%primes[i]==0) {
				pkt++;
				n /= primes[i];
			}
			ans.push_back(make_pair(primes[i],pkt));
		}
	}
	for (i = 0 ; i < ans.size(); i++){
		cout << ans[i].first ;
		if (ans[i].second >= 2) cout << '^' << ans[i].second;
		if (i==(int)ans.size()-1) cout << '\n';
		else cout << " x ";
	}
	return 0;
}