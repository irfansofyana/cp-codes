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
const int MOD = 998244353;

int arr[MAXN+5];
map<int,int> mep;
int cnt, n, maks;


int main(){
  OPTIMATION
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
    mep[arr[i]] = i;
  }
  int i = 1;
  maks = mep[arr[0]];
  cnt = 1;
  while (i < n){
    if (i > maks) {
      cnt++;
      maks = mep[arr[i]];
    }
    else maks = max(maks, mep[arr[i]]);
    i++; 
  }
  LL ans = 1;
  for (int i = 1; i <= cnt - 1; i++) {
    ans = (ans * 2)%MOD;
  }
  cout << ans << '\n';
  return 0;
}