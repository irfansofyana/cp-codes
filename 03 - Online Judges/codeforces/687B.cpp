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
const int MAXN = 1e6;
int N, K, x;
vector<int> primes;
bitset<MAXN+5> bs;
vector<pair<int,int> > primek;
int maks[MAXN+5];

void generate(){
  bs.set();
  bs[0] = bs[1] = false;
  for (LL i = 2; i <= MAXN; i++){
    if (bs[i]) {
      primes.pb((int)i);
      for (LL j = i * i ; j <= MAXN; j+=i)
        bs[j] = false;
    }
  }
}

void getK(){
  for (int i = 0; i < primes.size() && K > 1; i++){
    if (K%primes[i] == 0) {
      int ret = 0;
      while (K%primes[i] == 0){
        ret++;
        K /= primes[i];
      }
      primek.pb({primes[i], ret});
    }
  }
}


int main(){
  OPTIMATION
  generate();
  cin >> N >> K;
  getK();
  for (int i = 0; i < N; i++){
    cin >> x;
    for (int j = 0; j < (int)primek.size(); j++){
      if (x%primek[j].fi == 0){
        int ret = 0;
        while (x % primek[j].fi == 0) {
          ret++;
          x /= primek[j].fi;
        }
        maks[j] = max(maks[j], ret);
      }
    }
  }
  for (int i = 0; i < (int)primek.size(); i++){
    if (primek[i].se > maks[i]) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}