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

const int MAXN = 1e5;
int m, n;
int diskon[MAXN+5];
int prices[MAXN+5];

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> m;
	for (int i = 0; i < m; i++) cin >> diskon[i];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> prices[i];
	sort(diskon, diskon + m);
	sort(prices, prices + n);
	int ans = 0;
	int i = n-1;
	int pake = diskon[0];
	while (i >= 0){
		// cout << "xxx " << i << '\n';
		int k = i;
		int tot = 0;
		int j;
		for (j = 0; j < pake && k >= 0; j++){
			tot += prices[k];
			k--;
		}
		if (j == pake){
			ans += tot;
			// cout << k << " " << tot << '\n';
			i = k-2;
		}else {
			ans += tot;
			i = -1;
		}
	}
	cout << ans << '\n';
	return 0;
}