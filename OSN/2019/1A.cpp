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

int r, c;

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> r >> c;
	int pref[r+1][c+1];
	char arr[r+1][c+1];
	int tot = 0;
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= c; j++){
			cin >> arr[i][j];
			if (arr[i][j] == '1'){
				pref[i][j] = 1;
				tot++;
			}
			else pref[i][j] = 0;
		} 
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			pref[i][j] += pref[i-1][j];
			pref[i][j] += pref[i][j-1];
			pref[i][j] -= pref[i-1][j-1];
		}
	}
	vector<int> fac;
	for (int i = 1; i <= (int)sqrt(tot); i++){
		if (tot % i == 0) {
			fac.pb(i);
			if (i!=tot/i) fac.pb(tot/i);
		}
	}
	sort(fac.begin(), fac.end());
	int ans = 1e9;
	for (int i = 0; i < sz(fac); i++){
		for (int j = 1; j + fac[i]-1 <= r; j++){
			int limit = tot/fac[i];
			for (int k = 1; k + limit -1 <= c; k++){
				int ada = pref[j+fac[i]-1][k+limit-1];
				ada -= pref[j+fac[i]-1][k-1];
				ada -= pref[j-1][k+limit-1];
				ada += pref[j-1][k-1];
				ans = min(ans, tot-ada);
			}
		}
	}
	cout << (ans == 1e9 ? -1 : ans) << '\n';
	return 0;
}