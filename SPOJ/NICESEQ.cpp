#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
const double EPS = -1e9;

//declare variables here
int T, N;
LL dp[1005][1025];
vector<int> faktor[10];

void isi(){
  for (int i = 2; i <= 9; i++) {
    for (int j = 1; j <= i ; j++) {
      if (i%j == 0) faktor[i].pb(j);
    }
  }
}

LL cari(int idx,int mask){
  if (idx == N) return 1;
  if (dp[idx][mask] != -1) return dp[idx][mask];
  LL res = 0;
  if (idx == 0) {
    for (int i = 1; i <= 9; i++){
      res += cari(idx + 1, (mask|(1<<i)));
      if (res > MODPRIMA) res %= MODPRIMA;
    }
  }
  else {
    res += cari(idx + 1, mask);
    if (res > MODPRIMA) res %= MODPRIMA;
    for (int i = 2; i <= 9; i++) {
      for (int j = 1; j < faktor[i].size(); j++) {
        if ((mask&(1<<faktor[i][j])) > 0){
          res += cari(idx + 1, (mask | (1 << i)));
          if (res > MODPRIMA) res %= MODPRIMA;
          break;
        }
      } 
    }
  }
  return dp[idx][mask] = res;
}

int main(){
  OPTIMATION
  isi();
  cin >> T;
  while (T--) {
    cin >> N;
    memset(dp, -1, sizeof dp);
    cout << cari(0, 0) << '\n';
  }
  return 0;
}