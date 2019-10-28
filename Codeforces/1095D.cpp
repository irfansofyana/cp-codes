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
const int MAXN = 2e5;

int N, M;
bool visited[MAXN+5];
vector<int> adj[MAXN+5];
vector<int> ans;
pair<int,int> arr[MAXN+5];

void DFS(int node){
  visited[node] = true;
  for (int i = 0; i < (int)adj[node].size(); i++){
    int nxt = adj[node][i];
    if (!visited[nxt]) 
      DFS(nxt);
  }
  ans.pb(node);
}

bool cansee(int x,int y){
  return (arr[x].fi == y || arr[x].se == y);
}

int main(){
  OPTIMATION
  cin >> N;
  for (int i = 1; i <= N; i++){
    cin >> arr[i].fi >> arr[i].se;
  }
  for (int i = 1; i <= N; i++){
    if (cansee(arr[i].fi, arr[i].se)){
      adj[i].pb(arr[i].fi);
      adj[arr[i].fi].pb(arr[i].se);
    }else{
      adj[i].pb(arr[i].se);
      adj[arr[i].se].pb(arr[i].fi);
    }
  }
  DFS(1);
  reverse(all(ans));
  for (auto a : ans){
    cout << a << " ";
  }cout << '\n';
}