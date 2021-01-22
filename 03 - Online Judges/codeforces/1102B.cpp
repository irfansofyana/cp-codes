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

const int MAXN = 5005;

int N, K;
int ans[MAXN];
vector<int> adj[MAXN];

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> N >> K;
	bool ada = true;
	for (int i = 1; i <= N; i++){
		int x;
		cin >> x;
		adj[x].pb(i);
		if (sz(adj[x]) > K) {
			ada = false;
		} 
	}
	if (!ada) cout << "NO" << '\n';
	else {
		cout << "YES\n";
		int idx = 1;
		for (int i = 1; i <= 5000; i++){
			if (sz(adj[i]) == 0) continue;
			else {
				for (int j = 0; j < sz(adj[i]); j++){
					ans[adj[i][j]] = idx;
					idx++;
					if (idx > K) idx = 1; 
				}
			}	
		}
		for (int i = 1; i <= N; i++){
			cout << ans[i];
			cout << (i == N ? '\n': ' ');
		}
	}
	return 0;
}