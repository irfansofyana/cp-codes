#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const ll MAXN = (ll)5e6;
const ll MOD = (ll)1e9 + 7;
ll n,i,j;
ll dp[MAXN+5];
ll t,l,r;
bitset<MAXN+5> bs;

void sieve(){
	bs.set();
	bs[0] = false; bs[1] = false;
	for (ll i = 2 ; i <= MAXN; i++) {
		if (bs[i]) {
			ll j = i;
			while (i * j <= MAXN) {
				bs[i*j] = false;
				j++;
			}
		}
	}
}

void pre_compute(){
	dp[2] = 1;
	for (ll i = 3 ; i <= MAXN; i++) {
		if (i%2 == 0) {
			dp[i] = dp[i/2] + i/2;
		}
		else {
			if (bs[i]) {
				dp[i] = (i*(i-1))/2;
				dp[i] %= MOD;
				continue;
			}
			for (ll j = 3; j <= (ll)sqrt(i); j+=2) {
				if (i%j == 0) {
					dp[i] = dp[i/j];
					ll tmp = (j*(j-1))/2;
					tmp %= MOD;
					tmp *= (i/j);
					tmp %= MOD;
					dp[i] += tmp;
					dp[i] %= MOD;	
					break;
				}
			}
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	pre_compute();
	cin >> t >> l >> r;
	ll ans = 0;
	ll pkt = 1;
	for (ll i = l ; i <= r; i++) {
		ans += pkt*dp[i];
		ans %= MOD;
		pkt *= t; 
		pkt %= MOD;
	}
	cout << ans << '\n';
	return 0;
}