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
#define inp() freopen("in.txt", "r", stdin);
#define out() freopen("out.txt", "w", stdout);
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
const int MAXN = 105;
int N, M, x, y, cnt, tot;
bool visited[MAXN];
vector<int> arr[MAXN+4];

void DFS(int node,int parent){
  visited[node] = true;
  for (int i = 0; i < sz(arr[node]); i++){
    int next = arr[node][i];
    if (next == parent) continue;
    if (visited[next]) tot++;
    if (!visited[next]) 
      DFS(next, node);
  }
}

int main(){
  OPTIMATION
  cin >> N >> M;
  for (int i = 0; i < M; i++){
    cin >> x >> y;
    arr[x].pb(y);
    arr[y].pb(x);
  }
  for (int i = 1; i <= N; i++){
    if (!visited[i]){
      cnt++;
      DFS(i, 0);
    }
  }
  tot /= 2;
  // cout << cnt << " " << tot << '\n'; 
  if (cnt == 1 && tot == 1) cout << "FHTAGN!\n";
  else cout << "NO\n";
  return 0;
}