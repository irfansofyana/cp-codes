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

const int MAXN = 2e5;

int t, n, m, nEven;
vector<int> adj[MAXN+3];
int dist[MAXN+3];
bool genap[MAXN+3];
queue<ii> antrian;

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i = 1; i <=n; i++) {
			adj[i].clear();
			dist[i] = 1e9;
		}
		for (int i = 0; i < m; i++){
			int u, v; cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		memset(genap, false, sizeof genap);
		antrian.push({1, 0});
		dist[1] = 0;
		nEven = 0;
		while (!antrian.empty()){
			ii el = antrian.front(); antrian.pop();
			int now = el.fi;
			int cur = el.se;
			if (cur % 2 == 0){
				genap[now] = true;
				nEven++;
			}
			for (int i = 0; i < sz(adj[now]); i++){
				int ne = adj[now][i];
				if (dist[now] + 1 < dist[ne]){
					dist[ne] = dist[now] + 1;
					antrian.push({ne, 1-cur});
				}
			}
		}
		cout << (nEven <= n/2 ? nEven : n-nEven) << '\n';
		for (int i = 1; i <= n; i++){
			if (nEven <= n/2){
				if (genap[i]) cout << i << " ";
			}else {
				if (!genap[i]) cout << i << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}