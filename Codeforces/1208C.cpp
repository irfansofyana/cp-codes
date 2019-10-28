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

int n, ans[1005][1005];

bool cek(){
	int xr = 0;
	for (int i = 0; i < n; ++i){
		xr = 0;
		for (int j = 0; j < n; ++j) xr ^= ans[i][j];
		if (xr != 0) {
			return false; 
		}
	}
	for (int i = 0; i < n; ++i){
		xr = 0;
		for (int j = 0; j < n; ++j) xr ^= ans[j][i];
		if (xr != 0) {
			return false;
		}
	}
	return true;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	memset(ans, -1, sizeof ans);
	for (int i = 0; i < n; ++i){
		ans[i][0] = 4 * i;
	}
	for (int i = 0; i < n; i+=4){
		for (int j = 0; j < 4; ++j){
			ans[0][i+j] = n * i + j;
		}
	}
	for (int i = 1; i < n; ++i){
		for (int j = 1; j < n; ++j){
			ans[i][j] = ans[i-1][j]+4;
		}
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cout << ans[i][j] << " ";
		}cout << '\n';
	}
	// if (cek()) cout << "yes\n";
	// else cout << "no\n";
	return 0;
}