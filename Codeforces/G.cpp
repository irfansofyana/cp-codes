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

int N, K;
int arr[MAXN+5];
vector<ii> jadi;

bool cmp(ii a, ii b){
  return a.fi > b.fi;
}

bool can(int mid){
  int res = 0;
  for (int i = 0 ;i < sz(jadi); i++){
    res += jadi[i].fi / mid;
  }
  return (res >= K);
}

int main(){
  OPTIMATION
  cin >> N >> K;
  for (int i = 0 ;i < N; i++)
    cin >> arr[i];
  sort(arr, arr + N);
  int i =0;
  while (i < N){
    int j = i + 1;
    int curr = 1;
    while(j < N && arr[j] == arr[j-1]){
      curr++;
      j++;
    }
    jadi.pb({curr, arr[i]});
    i = j;
  }
  sort(jadi.begin(), jadi.end(), cmp);
  int le = 1;
  int ri = N / K;
  int ret = 0;
  while (le <= ri){
    int mid = (le + ri) / 2;
    if (can(mid)){
      ret = mid;
      le = mid + 1;
    }else ri = mid - 1;
  }
  vector<int> ans;
  int udah = K;
  int idx = 0;
  while (udah > 0 && idx < sz(jadi)){
    int bisa = jadi[idx].fi / ret;
    bisa = min(bisa, udah);
    for (int i = 0; i < bisa; i++)
      ans.pb(jadi[idx].se);
    udah -= bisa;
    idx++;
  }
  for (int i = 0; i < sz(ans); i++){
    cout << ans[i];
    cout << (i == sz(ans)-1 ? '\n' : ' ');
  }
  return 0;
}