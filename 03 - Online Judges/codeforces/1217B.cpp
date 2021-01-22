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

// x + minv*k <= maksd
// x-maksd <= minv * k
// k >= (x-maksd)/(-1*minv)
int t, n, x, maksd, minv, diff;

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> t;
	while (t--){
		cin >> n >> x;
		maksd = -1;
		minv = 2e9;
		for (int i = 0; i < n; ++i){
			int d, h; cin >> d >> h;
			maksd = max(maksd, d);
			minv = min(minv, h-d);
		}
		if (maksd >= x) cout << 1 << '\n';
		else if (minv >= 0) cout << -1 << '\n';
		else {
			diff = x-maksd;
			minv *= -1;
			int k;
			if (diff % minv == 0) k = diff/minv;
			else k = diff/minv + 1;
			int rem = x - minv * k;
			if (rem <= 0) cout << k << '\n';
			else cout << k + 1 << '\n';
		}
	}
	return 0;
}
