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

const int MAXN = 1e5+3;

int n, m;
bool visit[MAXN];
vector<int> adj[MAXN], adjr[MAXN];
LL ans, ways;
int cost[MAXN];
vector<int> order;
int val, nval;

void dfs1(int node){
	visit[node] = true;
	for (int i = 0; i < sz(adj[node]); i++){
		int neigh = adj[node][i];
		if (!visit[neigh])
			dfs1(neigh);
	}
	order.pb(node);
}

void dfs2(int node){
	visit[node] = true;
	if (val == -1 || cost[node] < val) {
		val = cost[node];
		nval = 1;
	}else if (cost[node] == val) nval++;
	for (int i = 0; i < sz(adjr[node]); i++){
		int neigh = adjr[node][i];
		if (!visit[neigh]){
			dfs2(neigh);
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> cost[i];
	cin >> m;
	for (int i = 0; i < m; i++){
		int a, b; cin >> a >> b;
		adj[a].pb(b);
		adjr[b].pb(a);
	}
	for (int i = 1; i <= n; i++){
		if (!visit[i]) dfs1(i);
	}
	memset(visit, false, sizeof visit);
	ways = 1;
	ans = 0;
	for (int i = sz(order)-1; i >= 0; i--){
		int v = order[i];
		if (!visit[v]){
			val = -1;
			nval = 0;
			dfs2(v);
			// cout << "xxx " << val << " " << nval << endl;
			ans += 1LL * val;
			ways = (ways * nval) % MODPRIME;
		}
	}
	cout << ans << " " << ways << '\n';
	return 0;
}