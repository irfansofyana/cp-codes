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

const int MAXN = 1e6;

bitset<MAXN+5> bil;
int maksPrime[MAXN+5];

void sieve(){
	bil.set();
	bil[0] = bil[1] = false;
	memset(maksPrime, -1, sizeof maksPrime);
	for (int i = 2; i <= MAXN; i++){
		if (bil[i]){
			maksPrime[i] = max(maksPrime[i], i);
			for (LL j = 1LL * i * 2; j <= MAXN; j+=i) {
				bil[j] = false;
				maksPrime[j] = max(maksPrime[j], i);
			}
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	sieve();
	int x2;
	cin >> x2;
	int ans = 1e9;
	for (int i = x2; i >= x2-maksPrime[x2]+1; i--){
		int x1 = i;
		if (bil[x1]) continue;
		ans = min(ans, x1-maksPrime[x1]+1);
	}
	cout << ans << '\n';
	return 0;
}