#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,i,j;
ll x,y;
ll t,sum[100005];
vector<ll> primes;
bool bil[100005];

bool cek(ll x){
	if ((x&(x-1)) == 0) return true;
	return false;
}


void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 100000 ; i++) {
		if (bil[i]) {
			primes.pb(i);
			j = i;
			while (i * j <= 100000) {
				bil[i * j] = false;
				j++;
			}
		}
	}
}

bool ye[100005];

void generate(){
	sum[0] = sum[1] = 0;
	for (i = 2; i <= 100000; i++) {
		if (bil[i]) {
			ye[i] = false;
			sum[i] = sum[i-1];
			continue;
		}
		ll tt = (ll)sqrt(i);
		if (tt * tt == i && bil[tt]) {
			sum[i] = sum[i-1] + 1;
			ye[i] = true;
			continue;

		}
		j = i;
		ll idx = 0;
		bool cc = true;
		ll ttt = 0;
		while (j > 1) {
			if (j%primes[idx] == 0) {
				ttt++;
				ll bnyk = 0;
				while (j%primes[idx] == 0) {
					j /= primes[idx];
					bnyk++;
				}
				if (bnyk > 1) cc = false;
			}
			idx++;
		}
		if (ttt == 2 && cc) {sum[i] = sum[i-1] + 1; ye[i] = true;}
		else {sum[i] = sum[i-1]; ye[i] = false;}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve(); generate();
	/*for (i = 2; i <= 50; i++) {
		if (ye[i]) cout << "YA " << i << '\n';
		else cout << "TIDAK " << i << '\n';
	}*/
	cin >> t;
	while (t--) {
		cin >> x >> y;
		cout << sum[y] - sum[x-1] << '\n';
	}
	return 0;
}