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
LL N, K;
vector<LL> arr;
LL tot;

int main(){
  OPTIMATION
  cin >> N >> K;
  for (LL i = 1; i <= (LL)sqrt(N); i++){
    if (N%i == 0){
      arr.pb(i);
      LL j = N / i;
      if (i != j) tot+=2;
      else tot++;
    }
  }
  if (tot < K) cout << -1 << '\n';
  else {
    LL tmp = tot-1;
    K--;
    if (K > tmp/2) {
      cout << N / arr[tmp - K] << '\n';
    }else{
      cout << arr[K] << '\n';
    }
  }
  return 0;
}