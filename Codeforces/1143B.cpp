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

LL n;
LL pang[11];

int len(LL x){
	int ret = 0;
	while (x > 0){
		ret++;
		x /= 10;
	}
	return ret;
}

LL f(LL x){
	LL ret = 1LL;
	while (x > 0){
		ret *= x % 10;
		x /= 10;
	}
	return ret;
}

int fdigit(LL x){
	int ret = 0;
	while (x > 0){
		int dig = x%10;
		ret = dig;
		x /= 10;
	}
	return ret;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	pang[0] = 1;
	for (int i = 1; i < 11; i++){
		pang[i] = 10 * pang[i-1];
	}
	cin >> n;
	LL ans = f(n);
	ans = max(ans, f(n-1));
	ans = max(ans, f(pang[len(n)-1]-1));
	LL bil = (fdigit(n))*pang[len(n)-1]-1;
	
	// cout << "xx " << bil << endl;
	ans = max(ans, f(bil));
	cout << ans << '\n';
	return 0;
}