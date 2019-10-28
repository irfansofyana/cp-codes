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

int n, m;
vector<int> adj[MAXN+3];
map<vector<int>,int> mep;
int ans[MAXN+3];

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m;
	for (int i = 0; i < m; ++i){
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for (int i = 1; i <= n; ++i){
		sort(adj[i].begin(), adj[i].end());
	}
	int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (mep[adj[i]] == 0) {
            mep[adj[i]] = ++cnt;
            ans[i] = cnt;
            cout << "xxx " << i << " " << cnt << " " << ans[i] << '\n';
        } else {
            ans[i] = mep[adj[i]];
        }
        if (cnt > 3) {
        	cout << -1 << '\n';
            return 0;
        }
    }
    if (cnt != 3) {
    	cout << -1 << '\n';
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        if (mep[adj[i]] > 0 && (int) adj[i].size() == 0) {
           	cout << -1 << '\n';
            return 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? '\n' : ' ');
    }

	return 0;
}