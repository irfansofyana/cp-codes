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

const int MAXN = 3000000+5;

LL N;
bitset<MAXN> bs;
vector<LL> primes;


void sieve(){
	bs.set();
	bs[0] = bs[1] = false;
	for (LL i = 2; i <= MAXN; i++){
		if (bs[i]){
			primes.pb(i);
			for (LL j = i * i ; j <= MAXN ; j+= i){
				bs[j] = false;
			}
		}
	}
}

LL solve(LL N){
	int idx = 0;
	LL pf = primes[idx];
	LL ret = -1;
	while (pf * pf <= N && idx < sz(primes)){
		if (N % pf == 0) {
			LL tmp = 0;
			while (N % pf == 0){
				tmp++;
				N /= pf;
			}	
			if (ret == -1) ret = tmp;
			else ret = __gcd(ret, tmp);
		}
		pf = primes[idx++];
	}
	if (N != 1) {
		ret = 1LL;
	}
	return ret;
}

LL can(LL n){
	while (n%2 == 0) n/=2;
	return n;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	sieve();
	while (cin >> N){
		if (N == 0) return 0;
		LL ans = solve(abs(N));
		LL t = can(ans);
		// cout << t << '\n';
		if (N < 0) cout << t << '\n';
		else cout << ans << '\n';
	}
	// cout << sz(primes) << '\n';

	return 0;
}