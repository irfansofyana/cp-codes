#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
using namespace std;

typedef long long ll;

ll n,m,i,j;
vector<ll> primes;
bool bil[10000005];
string dummy;
int sus;
vector<pair<ll,ll> > A;

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 10000000; i++) {
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i * j <= 10000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

ll sqr(ll x){
	return x*x;
}

ll pangkat(ll a,ll b){
	if (b==0) return 1;
	else if (b==1) return a;
	else if (b%2==0) return sqr(pangkat(a,b/2));
	else if (b%2==1) return a*(sqr(pangkat(a,(b-1)/2)));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy >> sus;
	cin >> n;
	sieve(); 
	for (i = 0 ; i < primes.size() && n > 1 ; i++){
		if (n%primes[i]==0) {
			ll tot = 0;
			while (n%primes[i]==0) {
				tot++;
				n/=primes[i];
			}
			A.pb(mp(primes[i],tot-1));
		}
	}
	if (n!=1) {
		A.pb(mp(n,0));
	}
	cout << A.size() << '\n'
	for (i = 0 ; i < A.size(); i++){
		cout << 1 << "/" << pangkat(A[i].first,A[i].second) << '\n';
	}
	return 0;
}