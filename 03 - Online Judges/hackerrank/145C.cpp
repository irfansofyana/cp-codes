//
//  Main.cpp
//

#pragma GCC optimize ("03")
#pragma GCC target ("sse4")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp() freopen("in.txt", "r", stdin);
#define out() freopen("out.txt", "w", stdout);
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
const int MAXN = 1e5;
int N, K;
int bil, nluck, idx;
vector<int> luck;
int arr[2005];
LL dp[2005][2005];
LL faktorial[MAXN+5];

void isi(){
  faktorial[0] = 1;
  for (int i = 1; i <= MAXN; i++){
    faktorial[i] = 1LL*i*faktorial[i-1];
    faktorial[i] %= MODPRIMA;
  }
}
bool cek(int x){
  while (x > 0) {
    int dig = x%10;
    if (dig!=4 && dig!=7) return false;
    x /= 10;
  }
  return true;
}

void hitung(){
  memset(dp, 0, sizeof dp);
  dp[0][0] = 1;
  dp[1][0] = 1;
  dp[1][1] = arr[1];
  for (int i = 2; i <= idx; i++){
    for (int j = 0; j <= i; j++){
      if (j == 0) dp[i][j] = 1;
      else dp[i][j] = ((1LL*arr[i]*dp[i-1][j-1])%MODPRIMA + (dp[i-1][j])%MODPRIMA)%MODPRIMA;
    }
  }
}

LL power(LL a, LL b){
  if (b == 0) return 1;
  else if (b == 1) return a%MODPRIMA;
  LL tmp = power(a, b/2);
  tmp = ((tmp%MODPRIMA)*(tmp%MODPRIMA))%MODPRIMA;
  if (b%2 == 0) return tmp;
  else return ((a%MODPRIMA)*tmp)%MODPRIMA;
}

LL comb(LL N, LL K){
  LL res = faktorial[N];
  res = (res*power(faktorial[K], MODPRIMA-2))%MODPRIMA;
  res = (res*power(faktorial[N-K], MODPRIMA-2))%MODPRIMA;
  return res;
}

int main(){
  OPTIMATION
  isi();
  cin >> N >> K;
  for (int i = 0; i < N; i++){
    cin >> bil;
    if (!cek(bil)) nluck++;
    else luck.pb(bil);
  }
  sort(luck.begin(), luck.end());
  int i = 0;
  idx = 1;
  while (i < sz(luck)){
    int j = i + 1;
    int curr = 1;
    while (j < sz(luck) && luck[j] == luck[i]){
      curr++;
      j++;
    } 
    arr[idx] = curr;
    idx++;
    i = j;
  }
  idx--;
  hitung();
  LL ans = 0;
  for (int i = 0; i <= K; i++){
    if (i <= nluck) {
      int j = K-i;
      if (j <= idx){
        LL cara = (comb(nluck, i) * dp[idx][j])%MODPRIMA;
        ans += cara;
        ans %= MODPRIMA;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}