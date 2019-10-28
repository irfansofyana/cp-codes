#include <bits/stdc++.h>
#define pb push_back
using namespace std;

const int MAXN = 2e5;

int n, x, ans;
vector<int> adj[MAXN+2];
int dist[MAXN+3][3], maksDep[MAXN+3];
bool visit[MAXN+3];

void dfs(int node, int dep, int tipe){
    visit[node] = true;
    dist[node][tipe] = dep;
    for (auto neks : adj[node]){
        if (!visit[neks]){
            dfs(neks, dep+1, tipe);
        }
    }
}

void dfs1(int node){
    visit[node] = true;
    int mks = -1;
    for (auto neks : adj[node]){
        if (!visit[node]){
            dfs1(neks);
            mks = max(mks, maksDep[node]);
        }
    }
    maksDep[node] = 1 + mks;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); 
    cin >> n >> x;
    for (int i = 0; i < n-1; ++i){
        int a, b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1, 0, 0);
    memset(visit, false, sizeof visit);
    dfs1(1);
    memset(visit, false, sizeof visit);
    dfs(x, 0, 1);
    for (int i = 1; i <= n; ++i){
        if (dist[i][1] < dist[i][0]){
            int tmp = maksDep[i] + dist[i][0];
            ans = max(ans, 2 * tmp);
        }
    }
    cout << ans << '\n';
    return 0;
}