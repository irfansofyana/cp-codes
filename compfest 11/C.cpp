#include <bits/stdc++.h>
using namespace std;
#define MAXN 200000
int n, l;
vector<pair<int,int> > adj[MAXN+5];

int timer;
vector<int> tin, tout;
vector<vector<int>> up;

void dfs(int v, int p)
{
    tin[v] = ++timer;
    up[v][0] = p;
    for (int i = 1; i <= l; ++i)
        up[v][i] = up[up[v][i-1]][i-1];

    for (pair<int,int> u : adj[v]) {
        if (u.first != p)
            dfs(u.first, v);
    }

    tout[v] = ++timer;
}

bool is_ancestor(int u, int v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v)
{
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
    tin.resize(n);
    tout.resize(n);
    timer = 0;
    l = ceil(log2(n));
    up.assign(n, vector<int>(l + 1));
    dfs(root, root);
}

bool visited[MAXN+5];
int par[MAXN+5], q,a,b,c;
map<int,int> cek[MAXN+5];

void createPar(int cur){
    visited[cur] = true;
    for(int i = 0; i < (int)adj[cur].size(); i++){
        if(!visited[adj[cur][i].first]){
            par[adj[cur][i].first] = cur;
            createPar(adj[cur][i].first);
            cek[adj[cur][i].first][cur] = adj[cur][i].second;
        }
    }
}

bool isValid(int x){
    return cek[x].find(par[x]) != cek[x].end();
}

int cari(int x, int root){
    //cout<<"ROOT: "<< root<<endl;
    while(x != root){
        //cout<<"START"<<endl;
        //cout<<x<<endl;
        int cur = x;
        int it = 0;
        while(!isValid(cur) && (!is_ancestor(up[x][it], root) || up[x][it] == root)){
            //cout<<cur<<endl;
            cur = up[x][it];
            it++;
            if(cur == root)break;
        }
        //cout<<it<<" "<<cur<<endl;
        if(it == 0 || cur == root)return cur;
        else x = up[x][it-1];
    }
}

int main(){
    scanf("%d %d", &n, &q);
    for(int i = 0; i < n-1; i++){
        scanf("%d %d %d", &a, &b, &c);
        a--;
        b--;
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }
    preprocess(0);
    createPar(0);
    for(int i = 0; i < q; i++){
        scanf("%d %d", &a, &b);
        a--;
        b--;
        int root = lca(a,b);
        long long res = 0;
        while(a != root){
            if(cek[a].find(par[a]) != cek[a].end()){
                res += cek[a][par[a]];
                cek[a].clear();
                a = par[a];
            } else {
                int x = cari(a,root);
                a = x;
            }
        }
        while(b != root){
            if(cek[b].find(par[b]) != cek[b].end()){
                res += cek[b][par[b]];
                cek[b].clear();
                b = par[b];
            } else {
                int x = cari(b,root);
                b = x;
            }
        }
        printf("%lld\n", res);
    }
}