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
const int MAXN = 2e5;
int arr[MAXN+3], N;
vector<ii> jadi;

int main(){
  OPTIMATION
  cin >> N;
  for (int i = 0; i < N; i++) cin >> arr[i];
  int i = 0;
  sort(arr, arr + N);
  while (i < N){
    int j = i + 1;
    int curr = 1;
    while (j < N && arr[j] == arr[j-1]){
      curr++;
      j++;
    }
    jadi.pb({curr, arr[i]});
    i = j;
  }
  sort(jadi.begin(), jadi.end());
  LL ret = 0;
  for (int i = 1; i <= N; i++){
    int idx = -1;
    LL ans = 0;
    LL bil = i;
    while (idx < sz(jadi)){
      int lo = idx + 1;
      int hi = sz(jadi) - 1;
      int indeks = -1;
      while (lo <= hi){
        int mid = (lo + hi) / 2;
        if (jadi[mid].fi >= bil){
          indeks = mid;
          hi = mid - 1;
        }else lo = mid + 1;
      }
      if (indeks != -1) {
        ans += bil;
        bil = 1LL * bil * 2;
        idx = indeks;
      }else break;
    }
    ret = max(ans, ret);
  }
  cout << ret << '\n';
  return 0;
}