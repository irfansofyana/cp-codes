#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MAXX = (ll)1e7;

int t,tc;
vector<ll> arr,primes;
bool bil[(int)1e7 + 5];
ll i,j,k,n,m;


void generate_prime(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2; i <= MAXX; i++){
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i * j <= MAXX) {
				bil[i * j] = false;
				j++;
			}
		}
	}
}

ll numfac(ll x){
	if (x == 1) return 1;
	else if (bil[x]) return 2;
	else {
		ll res = 1;
		for (i = 0 ; i < primes.size() && x > 1; i++){
			if (x%primes[i] == 0) {
				ll tmp = 0;
				while (x%primes[i] == 0) {
					tmp++;
					x /= primes[i];
				}
				res *= (tmp + 1);
			}
			if (bil[x]) {
				res *= 2;
				break;
			}
		}
		return res;
	}
}

void generate(){
	ll smt;
	generate_prime();
	arr.push_back(1);
	while (1) {
		smt = arr[(ll)arr.size()-1] + numfac(arr[(ll)arr.size()-1]);
		if (smt > 1000000) break;
		else arr.push_back(smt);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	cin >> t;
	while (t--) {
		cin >> n >> m;
		i = lower_bound(arr.begin(),arr.end(),n)- arr.begin();
		j = upper_bound(arr.begin(),arr.end(),m)- arr.begin();
		j--;
		cout << "Case " << ++tc << ": "<< j-i+1 << '\n';
	}
	return 0;
}