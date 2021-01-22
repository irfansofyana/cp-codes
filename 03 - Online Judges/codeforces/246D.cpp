#include <bits/stdc++.h>
#define pb push_back
using namespace std;

const int MAXN = 1e5;

int n, maks, ans, m, color[MAXN+3];
vector<int> adj[MAXN+3];
set<int> st[MAXN+3];
bool visit[MAXN+3];

void dfs(int node){
    visit[node] = true;
    for (auto neks : adj[node]){
        if (color[neks] != color[node]){
            st[color[node]].insert(color[neks]);
        }
        if (!visit[neks]){
            dfs(neks);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        cin >> color[i];
    }
    for (int i = 0; i < m; ++i){
        int a, b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for (int i = 1; i <= n; ++i){
        if (!visit[i]){
            dfs(i);
        }
    }
    maks = -1;
    ans = 1e9;
    for (int i = 1; i <= n; ++i){
        int len = st[color[i]].size();
        if (len > maks){
            maks = len;
            ans = color[i];
        }else if (len == maks) {
            ans = min(ans, color[i]);
        }
    }
    cout << ans << '\n';
    return 0;
}