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
const int MAXN = 1e5;
int N, warna[MAXN+5];
vector<int> arr[MAXN+5];
bool visit[MAXN+5];
int jaw;

int color(int node){
  visit[node] = true;
  int cnt = 0;
  for (int i = 0; i < sz(arr[node]); i++){
    if (!visit[arr[node][i]])
      cnt++;
  }
  if (cnt == 0) return warna[node];
  else {
    int tmp = -1;
    bool flag = false;
    for (int i = 0; i < sz(arr[node]); i++){
      if (!visit[arr[node][i]]){
        if (tmp == -1) tmp = color(arr[node][i]);
        else if (tmp != color(arr[node][i])) {
          flag = true;
          if (jaw == -1) jaw = node;
        }
      }
    }
    if (!flag) {
      if (tmp != warna[node]) {
        if (jaw == -1) jaw = node;
      }
    }
    return tmp;
  }
}

void check(int node,int bil){
  visit[node] = true;
  if (warna[node] != bil){
    jaw = -1;
  }
  for (int i = 0; i < sz(arr[node]); i++){
    if (!visit[arr[node][i]])
      check(arr[node][i], bil);
  }
}

int main(){
  OPTIMATION
  cin >> N;
  for (int i = 0; i < N-1; i++){
    int x, y;
    cin >> x >> y;
    arr[x].pb(y);
    arr[y].pb(x);
  }  
  for (int i = 1; i <= N; i++) cin >> warna[i];
  jaw = -1;
  int t = color(1);
  if (jaw == -1) 
    cout << "YES\n1\n";
  else{
    memset(visit, false, sizeof visit);
    visit[jaw] = true;
    for (int i = 0; i < sz(arr[jaw]); i++){
      check(arr[jaw][i], warna[arr[jaw][i]]);
    }
    if (jaw == -1) cout << "NO\n";
    else {
      cout << "YES\n";
      cout << jaw << '\n';
    } 
  }
  return 0;
}