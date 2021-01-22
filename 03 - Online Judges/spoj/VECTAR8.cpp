#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long ll;

int t;
ll n,i,j,tmp;
bool bil[(int)1e6 + 5];
vector<ll> primes,afraid;

string ubah(ll k){
	stringstream ss;
	ss << k;
	return ss.str();
}

ll ubahh(string s){
	stringstream ss(s);
	ll res;
	return ss >> res ? res : 0;
}

void generate(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (ll z = 2 ; z <= (ll)1e6 ; z++) {
		if (bil[z]) {
			primes.pb(z);
			ll zz = z;
			while (zz * z <= (ll)1e6) {
				bil[zz*z] = false;
				zz++;
			}
		}
	}
	for (i = 0 ; i < primes.size(); i++) {
		//j = primes[i];
		string s = ubah(primes[i]);
		for (j = 0 ; j < s.size(); j++) {
			if (s[j] == '0') break;
		}
		if (j == s.size()) {
			for (j = 1 ; j < s.size(); j++) {
				if (!bil[ubahh(s.substr(j,(int)s.size()-j))]) break;
			}
			if (j == s.size()) afraid.pb(primes[i]);
		}
		else continue;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	cin >> t;
	while (t--) {
		cin >> n;
		ll ans = upper_bound(afraid.begin(),afraid.end(),n) - afraid.begin();
		cout << ans << '\n';
	}
	return 0;
}
