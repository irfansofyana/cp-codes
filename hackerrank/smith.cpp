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

const int MAXN = 1e6;

vector<int> primes;
bitset<MAXN+5> bs;
int N;

void sieve(){
	bs.set();
	for (int i = 2; i <= MAXN; i++){
		if (bs[i]){
			primes.pb(i);
			for (LL j = 1LL * i * i; j <= MAXN; j += i)
				bs[j] = false;
		}
	}
}


int sumDigit(int n){
	int ret = 0;
	while (n > 0){
		ret += n % 10;
		n /= 10;
	}
	return ret;
}

bool isSmith(int N){
	LL cnt = 0;
	int dig = sumDigit(N);
	int idx = 0; int PF = primes[idx];
	while (PF * PF <= N){
		if (N % PF == 0){
			int po = 0;
			while(N % PF == 0){
				N /= PF;
				po++;
			}
			cnt += 1LL * sumDigit(PF) * po;
		}
		PF = primes[idx++];
	}
	if (N != 1){
		cnt += 1LL * sumDigit(N);
	}
	return cnt == 1LL*dig;
}


int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	sieve();
	cin >> N;
	cout << (isSmith(N) ? 1 : 0) << '\n';
	return 0;	
}