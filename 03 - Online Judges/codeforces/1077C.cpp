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
LL sum;
ii arr[MAXN+4];
int N;
vector<int> ans;

int main(){
  OPTIMATION
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> arr[i].fi;
    arr[i].se = i;
    sum += arr[i].fi;
  }
  sort(arr, arr + N);
  for (int i = 0; i < N; i++){
    if (i != N-1) {
      if (sum - arr[i].fi == 2 * arr[N-1].fi) {
        ans.pb(arr[i].se);
      }
    }else{
      if (sum - arr[i].fi == 2 * arr[N-2].fi) {
        ans.pb(arr[i].se);
      }
    }
  }
  cout << sz(ans) << '\n';
  for (int i = 0; i < sz(ans); i++){
    cout << ans[i] + 1;
    cout << (i == sz(ans) - 1 ? '\n' : ' ');
  }
  return 0;
}