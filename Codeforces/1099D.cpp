#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp(x) freopen(x.txt, "r", stdin);
#define out(x) freopen(x.txt, "w", stdout);
#define IO inp() out()
#define spacnl(i, n) cout << (i == n-1 ? '\n' : ' ');

//typedef Lists
typedef long long LL;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;

//constant values
const double pi = acos(-1);
const LL MODPRIMA = (LL)1e9 + 7;
const LL MAXX = (LL)1e18;
const LL MINN = -(LL)1e18;
const double EPS = 1e-9;

//declare variables here
const int MAXN = 1e5;

int N;
vector<int> adj[MAXN+5];
int sum[MAXN+5];
int ans[MAXN+5];

void DFS(int node,int par,int jum,int h){
  if (h%2 == 1){
    ans[node] = sum[node] - jum;
    for (int i = 0 ; i < sz(adj[node]); i++){
      int nxt = adj[node][i];
      if (nxt != par)
        DFS(nxt, node, sum[node], (h+1)%2); 
    }
  }else{
    int mini = -1;
    for (int i = 0; i < sz(adj[node]); i++){
      int nxt = adj[node][i];
      if (nxt != par){
        if (mini == -1) mini = sum[nxt];
        else mini = min(mini, sum[nxt]);
      }
    }
    if (mini != -1) {
      if (mini < jum) {
        cout << -1 << '\n';
        exit(0);
      }
      ans[node] = mini - jum;
      for (int i = 0; i < sz(adj[node]); i++){
        int nxt = adj[node][i];
        if (nxt != par){
          DFS(nxt, node, mini, (h+1)%2);
        }
      }
    }
  }
}

int main(){
  OPTIMATION
  cin >> N;
  for (int i = 2; i <= N; i++){
    int x;
    cin >> x;
    adj[x].pb(i);
    adj[i].pb(x);
  }  
  for (int i = 1; i <= N; i++){
    cin >> sum[i];
  }
  DFS(1, 0, 0, 1);
  LL ret = 0LL;
  for (int i = 1; i <= N; i++){
    ret += 1LL*ans[i];
  }
  cout << ret << '\n';
  return 0;
}