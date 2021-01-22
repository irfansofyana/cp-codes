/*
                                               
 ____                 ______           _____   
|    |            ___|\     \      ___|\    \  
|    |           |    |\     \    |    |\    \ 
|    |           |    |/____/|    |    | |    |
|    |        ___|    \|   | |    |    |/____/|
|    |       |    \    \___|/     |    ||    ||
|    |       |    |\     \        |    ||____|/
|____|  ___  |\ ___\|_____|  ___  |____|       
|    | |   | | |    |     | |   | |    |       
|____| |___|  \|____|_____| |___| |____|       
  \(             \(    )/           \(         
   '              '    '             '      
   				template v.1.4   
                                           
*/
#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(x) cerr << "#" << x << ": " << x << '\n';

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

const LL MODPRIME = 1e9 + 7;
const double EPS  = 1e-12;
const LL MAXL = 4e18;
const LL MINL = -4e18;
const int MAXI = 2e9;
const int MINI = -2e9;
const int MAXN = 1e7;

int x;
LL n, ans;
bitset<MAXN+3> bil;
vector<int> primes;

void sieve(){
	bil.set();
	bil[0] = bil[1] = false;
	for (int i = 2; i <= MAXN; ++i){
		if (bil[i]) {
			primes.pb(i);
			for (LL j = 1LL * i * i; j <= MAXN; j+=i){
				bil[j] = false;
			}
		}
	}
}

LL power(LL a, LL b){
	a %= MODPRIME;
	if (b == 0) return 1;
	else if (b == 1) return a;
	LL tmp = power(a, b/2);
	tmp = (tmp * tmp) % MODPRIME;
	return (tmp * power(a, b%2)) % MODPRIME;
}

LL mul(LL x,LL y){
	x %= MODPRIME; y %= MODPRIME;
	return (x*y) % MODPRIME;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	sieve();
	cin >> x >> n;
	vector<LL> arr;
	int idx = 0;
	LL pf = primes[idx];
	while (x > 1 && idx < sz(primes)){
		if (x % pf == 0){
			arr.pb(pf);
			while (x%pf == 0){
				x /= pf;
			}
		}
		pf = primes[idx++];
	} 
	if (x != 1) arr.pb(x);
	LL ans = 1;
	for (int i = 0; i < sz(arr); ++i) {
		LL maks = 1;
		while (maks <= n / arr[i]){
			maks *= arr[i];
		}
		LL cur = 0;
		while (maks > 0){
			LL ada = n / maks;
			ans = mul(ans, power(maks, ada-cur));
			maks /= arr[i];
			cur = ada;
		}
	}
	cout << ans << '\n';
	return 0;
}