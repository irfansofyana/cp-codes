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
string S;
int K, tot, diff;

int main(){
  OPTIMATION
  cin >> S >> K;
  for (int i = 0 ; i < sz(S); i++){
    if (S[i] != '?' && S[i] != '*') tot++;
    else diff++;
  }
  if (K < tot-diff) cout << "Impossible\n";
  else {
    if (K > tot){
      int need = K - tot;
      int pos = -1;
      for (int i = 0; i < sz(S); i++){
        if (S[i] == '*') {
          pos = i;
          break;
        }
      }
      if (pos == -1) cout << "Impossible\n";
      else {
        for (int i = 0; i < sz(S); i++){
          if (i != pos && S[i] != '*' && S[i] != '?') cout << S[i];
          else if (i == pos) {
            for (int j = 0; j < need; j++) cout << S[i-1];
          }
        }
        cout << '\n';
      }
    }else if (K < tot){
      if (tot - K > diff) cout << "Impossible\n";
      else{ 
        int need = tot - K;
        for (int i = 1; i < sz(S) && need > 0; i++){
          if (S[i] == '*' || S[i] == '?') {
            S[i-1] = '.';
            need--;
          }
        }
        for (int i = 0; i < sz(S); i++){
          if (S[i] != '.' && S[i] !='*' && S[i]!='?') cout << S[i];
        }
        cout << '\n';
      }
    }else{
      for (int i = 0 ; i < sz(S); i++){
        if (S[i] != '*' && S[i] != '?') cout << S[i];
      }
      cout << '\n';
    }
  }
  return 0;
}