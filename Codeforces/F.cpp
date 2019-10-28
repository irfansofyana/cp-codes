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

const int MAXB = 1e7;

LL n;
bitset<MAXB+3> bil;
vector<LL> primes;
auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
std::mt19937 mt(seed);

void sieve(){
	bil.set();
	for (LL i = 2; i <= MAXB; i++){
		if (bil[i]){
			primes.pb(i);
			for (LL j = i * i;j <= MAXB; j+=i){
				bil[j] = false;
			}
		}
	}
}


long long power(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

LL myrand(LL mod){
	return mt() % mod;
}

bool millerTest(LL p){
	if (p == 2 || p == 3) return true;
	else if (p%2 == 0) return false;
	else if (p < 3) return false;
	else if (p == 4) return false;

	for (int i = 0; i < 1000; ++i){
		LL a = myrand(p-3) + 2;
		LL ln = (LL)log(p);
		LL b = myrand(2*ln*ln)+2;
		a = min(a, b);
		LL s = p-1;
		while (s % 2 == 0) s /= 2;
		LL mod = power(a, s, p);
		if (mod == 1 || mod == p-1) continue;
		bool flag = 0;
		while (s!=p-1){
			mod = power(a, s, p);
			if (mod == p-1 || mod == 1){
				flag = true;
				break;
			}
			s *= 2;
		}
		if (flag==0) return false;
	}
	return true;
}


bool miller(LL d, LL n){
	LL a = 2 + myrand(n-4);
	cout << a << '\n';
	LL x = power(a, d, n);
	if (x == 1 || x == n-1) return true;

	while (d != n-1){
		x = ((x%n) *(x%n))%n;
		d *= 2;
		if (x == 1) return false;
		if (x == n-1) return true;
	}
	return false;
}

bool squarePrima(LL n){
	for (int i = 0; i < sz(primes); ++i){
		LL bil = primes[i] * primes[i];
		if (bil == n) return true;
		if (bil > n) break;
	}
	return false;
}

bool isprime(LL n, int k){
	if (n <= 1 || n == 4) return false;
	if (n <= 3) return true;
	LL d = n-1;
	while (d % 2 == 0) d/=2;
	for (int i = 0; i < k; ++i){
		if (!miller(d, n)){
			return false;
		}
	}
	return true;
}

LL ans(LL n){
	LL res = 1;
	for (auto pf : primes){
		if (pf * pf * pf > n) break;
		LL cnt = 1;
		while (n%pf == 0){
			n /= pf;
			++cnt;
		}
		res = (res * cnt);
	}
	if (isprime(n, 10)) {
		res *= 2;
	}
	else if (squarePrima(n)) res *= 3;
	else if (n != 1) res *= 4;
	return res;
}


int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	sieve();
	OPTIMIZE
	cin >> n;
	// cout << ans(n) << '\n';
	// cout << power(2, 5, 6) << '\n';
	if (millerTest(31)) cout << "aaa\n";
	return 0;
}