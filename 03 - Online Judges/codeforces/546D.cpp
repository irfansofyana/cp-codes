#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MAXN = (ll)5e6;

ll a, b, dp[MAXN+5], prefix[MAXN+5];
int t;
bitset<MAXN+5> prime;

inline void sieve(){
	prime.set();
	prime[0] = false; prime[1] = false;
	for (ll i = 2 ; i <= MAXN; i++) {
		if (prime[i]) {
			ll j = i;
			while (i * j <= MAXN){
				prime[i * j] = false;
				j++;
			}
		}
	}
}

inline void pre_compute(){
	dp[0] = 0; dp[1] = 0;
	for (int i = 2; i <= MAXN; i++) {
		if (prime[i]) {
			dp[i] = 1;
		}
		else if (i%2 == 0) {
			dp[i] = dp[i/2] + 1;
		}
		else {
			for (int j = 3; j <= (int)sqrt(i); j+=2){
				if (i%j == 0) {
					dp[i] = dp[i/j] + 1;
					break;
				}
			}
		}
	}
	for (int i = 1 ; i <= MAXN; i++) {
		prefix[i] = prefix[i-1] + dp[i];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	pre_compute();
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << prefix[a] - prefix[b] << '\n';
	}
	return 0;
}