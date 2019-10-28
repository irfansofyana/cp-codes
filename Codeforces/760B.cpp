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

LL n, m, k;
LL ans;

LL f(LL n, LL x){
	if (n-1 >= x-1){
		return ((x-1)*x)/2 + n - x;
	}else {
		return ((n-1)*(x-1+x-n+1))/2;
	}
}

bool can(LL x){
	LL sisa = m-x;
	LL tot = 0;
	if (k == 1 || k == n){
		tot = f(n, x);
	}
	else {
		tot = f(k, x) + f(n-k+1, x); 
	}
	return (tot <= sisa);
}	

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m >> k;
	if (n == 1) {
		cout << m << '\n';
		return 0;
	}
	int lo = m/n;
	int hi = m;
	ans = lo;
	while (lo <= hi){
		int mid = (lo + hi) >> 1;
		if (can(mid)){
			ans = mid;
			lo = mid+1;
		}else hi = mid-1;
	}
	cout << ans << '\n';
	return 0;
} 