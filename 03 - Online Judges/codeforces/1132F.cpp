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

int n;
string s;
int dp[505][505];

bool same(int l, int r){
	char c = s[l];
	for (int i = l+1; i <= r; ++i){
		if (s[i] != c) return false;
	}
	return true;
}

int cari(int l, int r){
	if (l > r) return 0;
	if (l == r) return 1;
	if (dp[l][r] != -1) return dp[l][r];
	int &res = dp[l][r];
	res = 1 + cari(l+1, r);
	for (int i = l+1; i <= r; ++i){
		if (s[i] == s[l]){
			res = min(res, cari(l+1, i-1) + cari(i, r));
		}
	}
	return res;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> s;
	memset(dp, -1, sizeof dp);
	cout << cari(0, n-1) << '\n';
	return 0;
}