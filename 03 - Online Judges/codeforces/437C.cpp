#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int MAXN = 1005;

int n, m, val[MAXN+5];
pair<int,int> arr[MAXN+5];
vector<int> adj[MAXN+5];
bool removed[MAXN+5];

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first > b.first;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        cin >> arr[i].first;
        arr[i].second = i;
        val[i] = arr[i].first;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < m; ++i){
        int u, v; cin >> u >> v;
        --u; --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    LL ans = 0LL;
    for (int i = 0; i < n; ++i){
        int node = arr[i].second;
        for (auto neks : adj[node]){
            if (!removed[neks]){
                ans += val[neks];
            }
        }
        // cout << node << " " << ans << '\n';
        removed[node] = true;
    }
    cout << ans << '\n';
    return 0;
}