#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5;

int q, n, cnt;
int parent[MAXN+5];
int siz[MAXN+5];
vector<int> adj[MAXN+5];
bool visit[MAXN+5];

void dfs(int node,int banyak){
    visit[node] = true;
    parent[node] = cnt;
    for (int i = 0; i < (int)adj[node].size(); ++i){
        if (!visit[adj[node][i]]){
            dfs(adj[node][i], banyak+1);
        }else {
            siz[cnt] = banyak;
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> q;
    while (q--){
        cin >> n;
        for (int i = 1; i <= n; ++i){
            int bil;
            cin >> bil;
            adj[i].push_back(bil);
        }
        cnt = 0;
        for (int i = 1; i <= n; ++i){
            if (!visit[i]){
                dfs(i, 1);
                ++cnt;
            }
        }
        for (int i = 1; i <= n; ++i){
            cout << siz[parent[i]];
            if (i == n) cout << '\n';
            else cout << " ";
        }
        for (int i = 1; i <= n; ++i){
            adj[i].clear();
            visit[i] = false;
        }
    }
    return 0;
}