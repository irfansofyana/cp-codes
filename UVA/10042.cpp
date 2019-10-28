#include <bits/stdc++.h>
#define inf 10000000
#define pb push_back
using namespace std;

typedef long long ll;

bool bil[inf + 5];
vector<ll> primes;
ll n,i,j;
int t;

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= inf; i++) {
		if (bil[i]) {
			primes.pb(i);
			j = i;
			while (i * j <= inf){
				bil[i*j] = false;
				j++;
			}
		}
	}
}

bool cek_prima(ll n){
	for (ll z = 2; z <= (ll)sqrt(n); z++) {
		if (n%z == 0) return false;
	}
	return true;
}

ll jdigit(ll x){
	ll ret = 0;
	while (x > 0) {
		ret += x%10;
		x /= 10;
	}
	return ret;
}

ll cari(ll n){
	ll res = 0, idx = 0;
	ll pf = primes[idx];
	while (pf * pf <= n) {
		if (n%pf == 0) {
			while (n%pf == 0) {
				res += jdigit(pf);
				n /= pf;
			}
		}
		pf = primes[idx++];
	}
	if (n != 1) res += jdigit(n);
	return res;
}

bool cek(ll n){
	ll jumlah = 0, temp;
	temp = n;
	while (temp > 0) {
		jumlah += temp%10;
		temp /= 10;
	}
	if (n <= inf && bil[n]) return false; //bilangan prima
	else if (n <= inf){
		if (jumlah == cari(n)) return true;
		return false;
	}
	else if (n > inf) {
		if (cek_prima(n)) return false;
		else {
			if (jumlah == cari(n)) return true;
			return false;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> t;
	//cout << cari(4937775) << '\n';
	while (t--) {
		cin >> n;
		n++;
		while (!cek(n)) n++;
		cout << n << '\n';
	}
	return 0;
}
