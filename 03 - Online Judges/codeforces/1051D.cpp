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
const LL MOD = 998244353;
const int MAXN = 1000;

LL dp[MAXN+5][2*MAXN+5][2][2];
int N, K;

LL cari(int idx,int conn,int atas, int bawah){
  if (idx == N && conn == 0) return 1;
  if (idx == N) return 0;
  if (dp[idx][conn][atas][bawah] != -1) return dp[idx][conn][atas][bawah];
  LL tmp = 0;
  if (atas == 0 && bawah == 0){
    if (conn >= 0)
      tmp = (tmp + cari(idx+1, conn, 0, 0))%MOD;
    if (conn >= 1)
      tmp = (tmp + cari(idx+1, conn-1, 0, 1))%MOD;
    if (conn >= 1)
      tmp = (tmp + cari(idx+1, conn-1, 1, 0))%MOD;
    if (conn >= 1)
      tmp = (tmp + cari(idx+1, conn-1, 1, 1))%MOD;
  }else if (atas == 0 && bawah == 1) {    
    if (conn >= 0)
      tmp = (tmp + cari(idx+1, conn, 0, 0))%MOD;
    if (conn >= 0)
      tmp = (tmp + cari(idx+1, conn, 0, 1))%MOD;
    if (conn >= 2)
      tmp = (tmp + cari(idx+1, conn-2, 1, 0))%MOD;
    if (conn >= 0)
      tmp = (tmp + cari(idx+1, conn, 1, 1))%MOD;
  }else if (atas == 1 && bawah == 0){
    if (conn >= 0)
      tmp = (tmp + cari(idx+1, conn, 0, 0))%MOD;
    if (conn >= 2)
      tmp = (tmp + cari(idx+1, conn-2, 0, 1))%MOD;
    if (conn >= 0)
      tmp = (tmp + cari(idx+1, conn, 1, 0))%MOD;
    if (conn >= 0)
      tmp = (tmp + cari(idx+1, conn, 1, 1))%MOD;
  }else{
    if (conn >= 1)
      tmp = (tmp + cari(idx+1, conn-1, 0, 0))%MOD;
    if (conn >= 1)
      tmp = (tmp + cari(idx+1, conn-1, 0, 1))%MOD;
    if (conn >= 1)
      tmp = (tmp + cari(idx+1, conn-1, 1, 0))%MOD;
    if (conn >= 0)
      tmp = (tmp + cari(idx+1, conn, 1, 1))%MOD;
  }
  return dp[idx][conn][atas][bawah] = tmp;
}

int main(){
  OPTIMATION
  cin >> N >> K;
  memset(dp, -1, sizeof dp);
  LL ans = 0;
  if (K >= 1) ans = (ans + cari(1, K-1, 0, 0))%MOD;
  if (K >= 2) ans = (ans + cari(1, K-2, 0, 1))%MOD;
  if (K >= 2) ans = (ans + cari(1, K-2, 1, 0))%MOD;
  if (K >= 1) ans = (ans + cari(1, K-1, 1, 1))%MOD;
  cout << ans << '\n'; 
  return 0;
}