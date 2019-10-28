//
//  Main.cpp
//
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
int N, M;
LL dist[MAXN+5];
vector<pair<LL,LL> > adj[MAXN+5];
priority_queue<pair<LL,LL>, vector<pair<LL, LL> >, greater<pair<LL,LL> > >  PQ;
LL parent[MAXN+5];

int main(){
  OPTIMATION
  cin >> N >> M;
  for (int i = 0; i < M; i++){
    LL a, b, c;
    cin >> a >> b >> c;
    adj[a].pb({b, c});
    adj[b].pb({a, c});
  }
  for (int i = 1; i <= N; i++) {
    dist[i] = MAXX;
    parent[i] = (i == 1 ? 0 : i);
  }
  dist[1] = 0;
  PQ.push({0, 1});
  while (!PQ.empty()){
    pair<LL, LL> atas = PQ.top();
    PQ.pop(); 
    if (atas.fi > dist[atas.se]) continue;
    for (int i = 0; i < sz(adj[atas.se]); i++){
      LL nxt = adj[atas.se][i].fi;
      if (atas.fi + adj[atas.se][i].se < dist[nxt]){
        dist[nxt] = atas.fi + adj[atas.se][i].se;
        parent[nxt] = atas.se;
        PQ.push({dist[nxt], nxt});
      }
    }
  }
  if (dist[N] != MAXX){
    int curr = N;
    vector<LL> ans;
    while (curr != 0){
      ans.pb(curr);
      curr = parent[curr];
    }
    reverse(ans.begin(), ans.end());
    for (auto a : ans) 
      cout << a << " ";
    cout << '\n';
  }else cout << -1 << '\n';
  return 0;
}