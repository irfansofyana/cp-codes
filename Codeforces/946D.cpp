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

int n, m, k;
int dp[2][505];
int tmp[505];
vector<vector<int> > posisi;

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m >> k;
	for (int i = 0; i < n; ++i){
		vector<int> tmp;
		for (int j = 0; j < m; ++j){
			char c; cin >> c;
			if (c == '1') tmp.pb(j);
		}
		posisi.pb(tmp);
	}
	for (int i = 0; i <= k; ++i) dp[0][i] = 1e9;
	for (int i = 0; i < sz(posisi[0]); ++i){
		for (int j = i; j < sz(posisi[0]); ++j){
			int ilang = i + sz(posisi[0])-1-j;
			dp[0][ilang] = min(dp[0][ilang], posisi[0][j]-posisi[0][i]+1);
		}
	}
	for (int i = sz(posisi[0]); i <= k; ++i) dp[0][i] = min(dp[0][i], 0);
	for (int i = 0; i <= k; ++i){
		dp[1][i] = 1e9;
		tmp[i] = 1e9;
	}
	for (int i = 1; i < n; ++i){
		for (int j = 0; j < sz(posisi[i]); ++j){
			for (int l = j; l < sz(posisi[i]); ++l){
				int ilang = j + sz(posisi[i])-1-l;
			 	tmp[ilang] = min(tmp[ilang], posisi[i][l]-posisi[i][j]+1);
			}
		}
		for (int j = sz(posisi[i]); j <= k; ++j) tmp[j] = min(tmp[j], 0);
		for (int j = 0; j <= k; ++j){
			for (int l = 0; l <= j; ++l){
				dp[1][j] = min(dp[1][j], dp[0][j-l]+tmp[l]);
			}
		}
		for (int j = 0; j <= k; ++j){
			dp[0][j] = dp[1][j];
			dp[1][j] = 1e9;
			tmp[j] = 1e9;
		}
	}
	int ans=1e9;
	for (int i = 0; i <= k; ++i){
		if (i == 0) ans = dp[0][i];
		else ans = min(ans, dp[0][i]);
	}
	cout << ans << '\n';
	return 0;
}