#include <bits/stdc++.h>
#define pb push_back
#define sz(a) (int)a.size()
#define fi first
#define se second

using namespace std;


const int MAXN = 1e5;

int n, q, cMin;
vector<pair<int,pair<int,int> > > arr;
vector<pair<int,int> > adj[MAXN+3];
vector<pair<int,int> > adj1[MAXN+3];
int parent[MAXN+3], visitedNode, backNode, parNode[MAXN+3];
map<int,int> mep[MAXN+2];
map<int,int> idxEdge[MAXN+2];
bool visit[MAXN+3];
bool found, inCycle[MAXN+3];
vector<int> candParent;
int timer, l;
int tin[MAXN+3], tout[MAXN+3];
int up[MAXN+3][34];
int minPath[MAXN+3][35], level[MAXN+3];

void findCycle(int node, int par){
    if (found) return;
    visit[node] = true;
    for (int i = 0; i < (int)adj[node].size(); ++i){
        int neks = adj[node][i].fi;
        if (!visit[neks] && neks != par){
            // cout <<"yy " << node << " " << par << " " << neks << '\n';
            parent[neks] = node;
            findCycle(neks, node);
        }else if (visit[neks] && neks != par){
            visitedNode = neks;
            backNode = node;
            // cout << "zz " << visitedNode << " " << backNode << '\n';
            found = true;
            return;
        }
        if (found) return;
    }
}

void findPar(int node, int par){
    visit[node] = true;
    parNode[node] = par;
    for (int i = 0; i < sz(adj[node]); ++i){
        if (!visit[adj[node][i].fi] && !inCycle[adj[node][i].fi]){
            findPar(adj[node][i].fi, par);
        }
    }
}

void deleteCycle(){
    int siz = (int)candParent.size(); 
    int minimal, idx;
    for (int i = 0; i < siz; ++i){
        int a = candParent[i];
        int b = candParent[(i+1)%siz];
        if (i == 0){
            minimal = mep[a][b];
            idx = i;
        } else {
            if (mep[a][b] < minimal){
                minimal = mep[a][b];
                idx = i;
            }
        }
    }
    cMin = minimal;
    int ilang = idxEdge[candParent[idx]][candParent[(idx+1)%siz]];
    for (int i = 0; i < n; ++i){
        if (i != ilang){
            int a = arr[i].fi;
            int b = arr[i].se.fi;
            int c = arr[i].se.se;
            adj1[a].pb({b, c});
            adj1[b].pb({a, c});
        }
    }
}


void dfs(int v, int p){
    // cout << "xxx " << v << " " << p << '\n';
    tin[v] = ++timer;
    up[v][0] = p;
    level[v] = level[p]+1;
    for (int i = 1; i <= l; ++i){
        up[v][i] = up[up[v][i-1]][i-1];
        int tmp = minPath[v][i-1];
        tmp = min(tmp, minPath[up[v][i-1]][i-1]);
        minPath[v][i] = tmp;
    }
    for (int u = 0; u < (int)adj1[v].size(); ++u) {
        int neks = adj1[v][u].fi;
        if (neks != p){
            minPath[neks][0] = adj1[v][u].se;
            dfs(neks, v);
        }
    }

    tout[v] = ++timer;
}

bool is_ancestor(int u, int v){
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v){
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (int i = l; i >= 0; --i) {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    return up[u][0];
}

void preprocess(int root) {
    timer = 0;
    l = ceil(log2(n));
    memset(up, 0, sizeof up);
    for (int i = 1; i <= n; ++i){
        for (int j = 0; j < 32; ++j){
            minPath[i][j] = 1e9;
        }
    }
    level[0] = 0;
    dfs(root, root);
}

int getMin(int node,int len){
    int res = 1e9;
    for (int i = 0; len; ++i){
        if (len&1){
            res = min(res, minPath[node][i]);
            node = up[node][i];
        }
        len >>= 1;
    }
    return res;
}

int findMin(int a, int b){
    int ancest = lca(a, b);
    int ret = 1e9;
    if (ancest != a){
        ret = min(ret, getMin(a, level[a]-level[ancest]));
    }
    // cout << ret << '\n';
    if (ancest != b){
        // cout << "x " << minPath[7][0] << " " << minPath[7][2] << '\n';
        // cout << b << " " << level[b]-level[ancest] << '\n';
        ret = min(ret, getMin(b, level[b]-level[ancest]));
        // cout << ret << '\n';
    }
    return ret;
}

int main(){
    cin >> n >> q;
    for (int i = 0; i < n; ++i){
        int a, b, c; cin >> a >> b >> c;
        adj[a].pb({b, c});
        adj[b].pb({a, c});
        mep[a][b] = c;
        mep[b][a] = c;
        idxEdge[a][b] = i;
        idxEdge[b][a] = i;
        arr.pb({a, {b, c}});
    }
    findCycle(1, 0);
    candParent.pb(visitedNode);
    inCycle[visitedNode] = true;
    while(parent[backNode] != visitedNode){
        candParent.pb(backNode);
        inCycle[backNode] = true;
        backNode = parent[backNode];
    }
    candParent.pb(backNode);
    inCycle[backNode] = true;
    memset(visit, false, sizeof visit);
    for (int i = 0; i < sz(candParent); ++i){
        findPar(candParent[i], candParent[i]);
    }
    deleteCycle();
    // for (int i = 1; i <= n; ++i){
    //     cout << i << ": ";
    //     for (int j = 0; j < adj1[i].size(); ++j){
    //         cout << adj1[i][j].fi << " " << adj1[i][j].se << " x ";
    //     }
    //     cout << '\n';
    // }
    preprocess(1);
    // for (int i = 1; i <= n; ++i){
    //     for (int j = 0; j <= 3; ++j){
    //         cout << i << " " << j << " " << minPath[i][j] << '\n';
    //     }
    // }
    while (q--){
        int a, b;
        cin >> a >> b;
        // cout << parNode[a] << " " << parNode[b] << '\n';
        if (parNode[a] == parNode[b]){
            //LCA tree
            cout << findMin(a, b) << '\n';
        }else {
            int l1 = level[parNode[a]] - level[a];
            int t1 = findMin(a, parNode[a]);
            int l2 = level[parNode[b]] - level[b];
            int t2 = findMin(b, parNode[b]);
            int t3 = findMin(parNode[a], parNode[b]) + cMin;
            cout << min(t1, min(t2, t3)) << '\n';
        }
    }
    return 0;
}