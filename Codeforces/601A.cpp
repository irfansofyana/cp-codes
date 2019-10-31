#include <bits/stdc++.h>
#define pb push_back
using namespace std;

const int INF = 1e9;

int n, m;
int dist[405];
vector<int> adj[2][408];
bool ada[405][405];


int dijkstra(int t, int start){
    priority_queue<pair<int,int> ,vector<pair<int,int> >, greater<pair<int,int> > > pq;
    for (int i = 1; i <= n; ++i){
        dist[i] = INF;
    }
    pq.push({0, start});
    dist[start] = 0;
    while (!pq.empty()){
        int nowd = pq.top().first;
        int nown = pq.top().second;
        pq.pop();
        if (nowd > dist[nown]) continue;
        for (auto neks : adj[t][nown]){
            if (nowd + 1 < dist[neks]){
                dist[neks] = nowd + 1;
                pq.push({dist[neks], neks});
            }
        }
    }
    return (dist[n] == INF ? -1 : dist[n]);
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; ++i){
        int u, v; cin >> u >> v;
        adj[0][u].pb(v);
        adj[0][v].pb(u);
        ada[u][v] = true;
        ada[v][u] = true;
    }
    for (int i = 1; i <= n; ++i){
        for (int j = i+1; j <= n; ++j){
            if (!ada[i][j]){
                adj[1][i].pb(j);
                adj[1][j].pb(i);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 2; ++i){
        int tmp = dijkstra(i, 1);
        if (tmp == -1) {
            cout << -1 << '\n';
            return 0;
        }
        ans = max(ans, tmp);
    }
    cout << ans << '\n';
    return 0;
}