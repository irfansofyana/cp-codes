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

LL A, B, fpb;
bitset<MAXN+3> bs;
vector<LL> primes;

void sieve(){
	bs.set();
	bs[0] = bs[1] = false;
	for (int i = 2; i <= MAXN; ++i){
		if (bs[i]){
			primes.pb(i);
			for (LL j = 1LL * i * i; j <= MAXN; j += i){
				bs[j] = false;
			}
		}
	}
}

int cPrimeFactor(LL x){
	int idx = 0;
	LL pf = primes[idx];
	int res = 0;
	while (pf * pf <= x && idx < sz(primes)){
		if (x%pf == 0){
			++res;
			while (x%pf == 0){
				x /= pf;
			}
		}
		pf = primes[idx++];
	}
	if (x != 1) ++res;
	return res;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	sieve();
	cin >> A >> B;
	fpb = __gcd(A, B);
	cout << cPrimeFactor(fpb) + 1 << '\n';
	return 0;
}