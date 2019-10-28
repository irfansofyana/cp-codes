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

const int MAXN = 2000;

int n;
vector<pair<int,ii> > tempCheck;
int l,depth[MAXN],tin[MAXN+3], tout[MAXN+3], timer, up[MAXN+3][32];
LL dist[MAXN+3][32];
vector<ii> adj[MAXN+3];
vector<pair<int,ii> > mustCheck;
int par[MAXN+3], arr[MAXN+3][MAXN+3];

void init(int n){
	for (int i = 1; i <= n; i++){
		par[i] = i;
	}
}

int cari(int x){
	return par[x] == x ? x : par[x] = cari(par[x]);
}

void gabung(int a, int b){
	int x = cari(a);
	int y = cari(b);
	par[x] = y;
}

void dfs(int node, int parent){
	tin[node] = ++timer;
	up[node][0] = parent;
	depth[node] = 1+depth[parent];
	for (int i = 1; i <= l; i++){
		up[node][i] = up[up[node][i-1]][i-1];
		dist[node][i] = 1LL * dist[node][i-1] + dist[up[node][i-1]][i-1];
	}
	for (ii neks : adj[node]){
		int neigh = neks.fi;
		if (neigh != parent){
			dist[neigh][0] = 1LL * neks.se;
			dfs(neigh, node);
		}
	}
	tout[node] = ++timer;
}

bool isAncestor(int u, int v){
	return tin[u] <= tin[v] && tout[v] <= tout[u]; 
}

int lca(int u, int v){
	if (isAncestor(u, v)) 
		return u;
	if (isAncestor(v, u))
		return v;
	for (int i = l; i >= 0; i--){
		if (!isAncestor(up[u][i], v))
			u = up[u][i];
	}
	return up[u][0];
}

void preProcess(int root){
	memset(tin, 0, sizeof tin);
	memset(tout, 0, sizeof tout);
	memset(depth, 0, sizeof depth);
	timer = 0;
	l = ceil(log2(n));
	dfs(root, root);
}

LL getDistanceAncestor(int node, int depth){
	LL sum = 0LL;
	for (int i = 0; depth; ++i){
		if (depth&1){
			sum += dist[node][i];
			node = up[node][i];
		}
		depth >>= 1;
	}
	return sum;
}


LL getDistance(int a, int b){
	int ancestor = lca(a, b);
	LL ans = 0;
	if (a != ancestor)
		ans += getDistanceAncestor(a, depth[a]-depth[ancestor]);
	if (b != ancestor)
		ans += getDistanceAncestor(b, depth[b]-depth[ancestor]); 
	return ans;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			int x; cin >> x;
			arr[i][j] = x;
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (arr[i][j] != arr[j][i]){
				// cout << "xxx\n";
				cout << "NO\n";
				return 0;
			}
			if (i == j && arr[i][j] > 0){
				cout << "NO\n";
				return 0;
			}
			if (i != j && arr[i][j] == 0){
				cout << "NO\n";
				return 0;
			}
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = i+1; j <= n; j++){
			tempCheck.pb({arr[i][j], {i, j}});	
		}
	}
	sort(tempCheck.begin(), tempCheck.end());
	init(n);
	for (int i = 0; i < sz(tempCheck); i++){
		int a = tempCheck[i].se.fi;
		int b = tempCheck[i].se.se;
		int w = tempCheck[i].fi;
		if (cari(a) != cari(b)){
			adj[a].pb({b, w});
			adj[b].pb({a, w});
			gabung(a, b);
		}else if (a!= b && cari(a) == cari(b)){
			mustCheck.pb(tempCheck[i]);
		}else {
			if (w != 0) {
				cout << "NO\n";
				return 0;
			}
		}	
	}
	preProcess(1);
	for (auto el : mustCheck){
		int u = el.se.fi;
		int v = el.se.se;
		int w = el.fi;
		if (getDistance(u, v) != w || w == 0){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}