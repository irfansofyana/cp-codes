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
const int MAXN = 100;
int N, M, Q, a, b, c, ans;
vector<ii> arr[MAXN+3];
bool visit[MAXN+3];
int warna[MAXN+3];

void check(int node, int color){
  visit[node] = true;
  for (int i = 0; i < sz(arr[node]); i++){
    if (!visit[arr[node][i].fi])
      if (arr[node][i].se == color)
        check(arr[node][i].fi, color); 
  }
}

int main(){
  OPTIMATION
  cin >> N >> M;
  for (int i = 0; i < M; i++){
    cin >> a >> b >> c;
    arr[a].pb({b, c});
    arr[b].pb({a, c});
  }
  cin >> Q;
  while (Q--){
    cin >> a >> b;
    ans = 0;
    memset(warna, false, sizeof warna);
    for (int i = 0; i < sz(arr[a]); i++){
      memset(visit, false, sizeof visit);
      visit[a] = false;
      check(arr[a][i].fi, arr[a][i].se);
      if (visit[b] && !warna[arr[a][i].se]){
        ans++; 
        warna[arr[a][i].se] = true;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}