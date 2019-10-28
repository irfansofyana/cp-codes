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
int N;
string s,t;
vector<int> ans;

int main(){
  OPTIMATION
  cin >> N;
  cin >> s >> t;
  bool found = true;
  for(int i = 0; i < N; i++){
    if (s[i] != t[i]){
      if (i == N-1) found = false;
      else {
        int last=i;
        int j;
        for (j = i; j < N && s[j] != t[i]; j++){
          last = j;
        }
        if (j == N) {
          found = false;
          break;
        }
        for (int j = last; j >= i; j--){
          ans.pb(j);
          swap(s[j], s[j+1]);
        }
        // cout << s << '\n';
      }
    }
  }
  // cout << s << '\n';
  if (found) {
    cout << sz(ans) << '\n';
    for (int i = 0; i < sz(ans); i++) {
      cout << ans[i]+1;
      spacnl(i, sz(ans))
    }
  }else cout << -1 << '\n';
  return 0;
}