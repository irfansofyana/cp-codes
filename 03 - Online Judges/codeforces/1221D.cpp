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
 
const int MAXN = 3e5;
 
int q, n;
LL A[MAXN+3], B[MAXN+3];
LL dp[MAXN+3][5];
 
LL cari(int pos, int prv){
	LL &res = dp[pos][prv];
	if (pos == n){
		return 0;
	}
	if (res != -1) {
		return res;
	}else {
		res = 1e18;
		for (int i = 0; i <= 2; ++i){
			if (pos == 0 || A[pos]+i != A[pos-1]+prv){
				res = min(res, cari(pos+1, i) + i * B[pos]);
			}
		}
		return res;
	}
}
 
int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> q;
	while (q--){
		cin >> n;
		for (int i = 0; i < n; ++i){
			cin >> A[i] >> B[i];
		}
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < 5; ++j){
				dp[i][j] = -1;
			}
		}
		cout << cari(0, 0) << '\n';
	}
	return 0;
}