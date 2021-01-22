#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pl;

vector<ll> primes;
ll n,x,i,j,bila;
bool bil[32005];
vector<pl> ans;

void sieve(){
	memset(bil,true,sizeof bil);
	bil[1] = false;
	for (i = 2 ; i <= 32000; i++) {
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i*j<=32000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

ll binser(ll l,ll r){
	ll mid = (l+r)/2;
	if (l > r) return -1;
	else if (primes[mid]==bila) return mid;
	else if (primes[mid]<bila) return binser(mid+1,r);
	else if (primes[mid]>bila) return binser(l,mid-1);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> n;
	while (n--) {
		cin >> x;
		ans.clear();
		for (i = 0 ; i < primes.size(); i++){
			if (primes[i]>x) break;
			bila = x-primes[i];
			if (binser(0,(ll)primes.size())!=-1) {
				if (binser(0,(ll)primes.size())>=i) {
					ans.push_back(make_pair(primes[i],primes[binser(0,(ll)primes.size())]));
				}
			}
		}
		cout << x << " has " << ans.size() << " representation(s)\n";
		for (i = 0 ; i < ans.size(); i++){
			cout << ans[i].first << "+" << ans[i].second << '\n';
		}
		if (n!=0) cout << '\n';
	}
	return 0;
}