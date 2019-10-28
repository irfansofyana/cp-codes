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

int n;
LL arr[3][MAXN+5];
LL dp[MAXN+5][3];

LL cari(int idx, int row){
	if (idx == n) return 0;
	if (dp[idx][row] != -1) return dp[idx][row];
	LL &ret = dp[idx][row];
	if (row == 0) {
		LL p1 = arr[1][idx] + cari(idx+1, 1);
		LL p2 = arr[2][idx] + cari(idx+1, 2);
		ret = max(max(p1, p2), cari(idx+1, row));
	}else if (row == 1) {
		LL p1 = arr[2][idx] + cari(idx+1, 2);
		LL p2 = cari(idx+1, row);
		ret = max(p1, p2);
	}else {
		LL p1 = arr[1][idx] + cari(idx+1, 1);
		LL p2 = cari(idx+1, row);
		ret = max(p1, p2);
	}
	return ret;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	for (int i = 1; i <= 2; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	memset(dp, -1, sizeof dp);
	cout << cari(0, 0) << '\n';
	return 0;
}