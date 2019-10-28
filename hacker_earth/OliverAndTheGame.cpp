#include <bits/stdc++.h>
using namespace std;

#define pb push_back

const int MAXN = 1e5;
int N, Q;
int x, y;
vector<int> adj[MAXN+5];
int ancestor[MAXN+5];
bool visited[MAXN+5];
bool ans[5*MAXN+5];

struct queries{
    int no, tipe, node1, node2;
};

vector<queries> arr[MAXN+5];

void init(){
    for (int i = 1; i <= N; i++)
        ancestor[i] = i;
}

int cari(int x){
    return (ancestor[x] == x ? x : ancestor[x] = cari(ancestor[x]));
}

void gabung(int x,int y){
    int a = cari(x);
    int b = cari(y);
    ancestor[a] = b;
}

void DFS(int now){
    visited[now] = true;
    ancestor[now] = now;
    for (int i = 0; i < adj[now].size(); i++){
        int nxt = adj[now][i];
        if (!visited[nxt]){
            DFS(nxt);
            gabung(nxt, now);
            ancestor[cari(now)] = now;
        }
    }
    for (int i = 0; i < arr[now].size(); i++){
        queries tmp = arr[now][i];
        int nxt;
        if (tmp.node1 == now) nxt = tmp.node2;
        else nxt = tmp.node1;
        if (visited[nxt]) {
            int parent = ancestor[cari(nxt)];
            // cout << "ancestor " << now << " " << tmp.node << " = " << parent << '\n';
            if (tmp.tipe == 0) {   
                ans[tmp.no] = (parent == tmp.node1);
            }else{
                ans[tmp.no] = (parent == tmp.node2);
            }
        }
    }
}

int main(){
    init();
    scanf("%d", &N);
    for (int i = 0; i < N-1; i++){
        scanf("%d %d", &x, &y);
        adj[x].pb(y);
        adj[y].pb(x);
    }
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int a, b, c;
        cin >> a >> b >> c;
        queries tmp;
        tmp.no = i;
        tmp.tipe = a;
        tmp.node1 = b;
        tmp.node2 = c;
        arr[c].pb(tmp);
        arr[b].pb(tmp);
    }
    DFS(1);
    for (int i = 0; i < Q; i++){
        cout << (ans[i] ? "YES" : "NO") << '\n';
    }
    return 0;
}