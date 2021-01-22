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

const int MOD = 998244353;

int n;
LL ans;

LL hitung(int x, int tipe){
	vector<int> ret;
	while (x > 0){
		ret.pb(x%10);
		x /= 10;
	}
	LL sep = (tipe == 1 ? 1 : 10);
	LL res = 0;
	for (int i = 0; i < sz(ret); i++){
		res += ret[i] * sep;
		res %= MOD;
		sep = (100 * sep) % MOD;
	}
	return res;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	ans = 0LL;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		ans = (ans + 1LL * n * hitung(x, 1)) % MOD;
		ans = (ans + 1LL * n * hitung(x, 2)) % MOD;
	}
	cout << ans << '\n';
	return 0;
}