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
pair<LL, LL> berat[MAXN+5];
pair<int,pair<int,LL> > edge[2*MAXN+5];
int parent[MAXN+5];

void init(){
  for (int i = 1; i <= N; i++)
    parent[i] = i;
}

int cari(int x){
  return (parent[x] == x? x : parent[x] = cari(parent[x]));
}

void gabung(int x,int y){
  int a = cari(x);
  int b = cari(y);
  parent[a] = b;
}

bool cmp(pair<int,pair<int,LL> > a, pair<int,pair<int,LL> > b){
  return a.se.se < b.se.se;
}

int main(){
  OPTIMATION
  cin >> N >> M;
  init();
  for (int i = 0; i < N; i++){
    cin >> berat[i].fi;
    berat[i].se = i+1;
  }
  int ukuran = 0;
  for (int i = 0; i < M; i++){
    int a, b;
    LL c;
    cin >> a >> b >> c;
    edge[ukuran] = {a, {b, c}};
    ukuran++;
  }
  sort(berat, berat+N);
  for (int i = 1; i < N; i++){
    edge[ukuran] = {berat[0].se,{berat[i].se, berat[0].fi + berat[i].fi}};
    ukuran++;
  }
  sort(edge, edge+ukuran, cmp);
  LL ans = 0;
  for (int i = 0; i < ukuran; i++){
    int a = edge[i].fi;
    int b = edge[i].se.fi;
    LL c = edge[i].se.se;
    if (cari(a) != cari(b)){
      gabung(a, b);
      ans += c;
    }
  }
  cout << ans << '\n';
  return 0;
}