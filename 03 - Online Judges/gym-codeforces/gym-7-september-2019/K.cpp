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

const int MAXN = 1e5;

int m, n;
LL arr[MAXN+3];

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> m;
	for (int tc = 1; tc <= m; ++tc){
		cin >> n;
		for (int i = 0; i < n; ++i) cin >> arr[i];
		LL sum = 0;
		int ans = 0;
		sort(arr, arr + n);
		for (int i = 0; i < n; ++i){
			if (sum <= arr[i]){
				sum += arr[i];
				++ans;
			}
		}
		cout << "Case #" << tc << ": " << ans << '\n';
	}
	return 0;
}