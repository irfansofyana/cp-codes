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
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = b; i >= a; i--)
#define FORL(i, a, b) for (LL i = a; i <= b; i++)
#define FORDL(i, a, b) for (LL i = b; i >= a; i--)

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

const int MAXB = 1e7+5e6+2;
const int MAXN = 3e5+2;

int frek[MAXB];
vector<ii> cpres;
int n;
int arr[MAXN];
bitset<MAXB> bs;
vector<int> primes, facGcd;
int frek2[MAXN];
int cnt[MAXN];

void sieve(){
	bs.set();
	for (int i = 2; i < MAXB; i++){
		if (bs[i]){
			primes.pb(i);
			for (LL j = 1LL * i * i; j <= MAXB; j+=i)
				bs[j] = false;
		}
	}
}

void factorize(int x){
	LL idx = 0;
	LL pf = primes[idx];
	while (pf * pf <= x){
		if (x % pf == 0){
			frek[pf]++;
			while (x % pf == 0) x /= pf;
		}
		pf = primes[idx++];
	}
	if (x != 1){
		frek[x]++;
	}
}


int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	sieve();
	// cout << sz(primes) << endl;
	cin >> n;
	int gcd;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (i == 0) gcd = arr[i];
		else gcd = __gcd(gcd, arr[i]);
	}
	for (int i = 0; i < n; i++){
		arr[i] /= gcd;
		factorize(arr[i]);
	}
	int maks = -1;
	for (int i = 0; i < sz(primes); i++){
		if (frek[primes[i]] > 0) {
			maks = max(maks, frek[primes[i]]);
			// if (maks == 1) cout << primes[i] << endl;
		}
	}
	int ans = n - maks;
	if (ans == n || maks == -1) cout << -1 << '\n';
	else cout << ans << '\n';
	return 0;
}