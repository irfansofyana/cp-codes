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

int n, m;
int deg[MAXN+3];
vector<ii> edges;
vector<int> adj[MAXN+3];
vector<ii> ans;
bool visit[MAXN+3];

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		deg[u]++;
		deg[v]++;
		edges.pb({u, v});
		adj[u].pb(v);
		adj[v].pb(u);
	}
	int maks = 0;
	int node = 0;
	for (int i = 1; i <= n; i++){
		if (deg[i] > maks){
			maks = deg[i];
			node = i;
		}
	}
	queue<int> antri;
	antri.push(node);
	visit[node] = true;
	while (!antri.empty()){
		int now = antri.front(); antri.pop();
		for (int i = 0; i < sz(adj[now]); i++){
			if (!visit[adj[now][i]]){
				visit[adj[now][i]] = true;
				ans.pb({now, adj[now][i]});
				antri.push(adj[now][i]);
			}
		}
	}
	for (auto a : ans){
		cout << a.fi << " " << a.se << '\n';
	}
	return 0;
}