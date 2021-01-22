#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long LL;

int from, to;
int n, m;
int bil;
int i, j;
vector<int> adj[20];
LL ans;
bool can[25][25];
LL cnt[25][25];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> from >> to;
    cin >> m;
    cin.ignore();
    string s;
    getline(cin, s);
    istringstream iss(s);
    int i = 0;
    int j = 0;
    while (iss >> bil){
        if (bil == 1){
            adj[i].pb(j);
        }
        ++j;
        ++n;
    }
    for (int i = 1; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> bil;
            if (bil == 1){
                adj[i].pb(j);
            }
        }
    }
    for (int i = 0; i < m; ++i){
        if (i == 0){
            cnt[]
        }
    }
    return 0;
}