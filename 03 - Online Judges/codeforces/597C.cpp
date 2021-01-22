//
//  Main.cpp
//


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

//functions and procedures list
void fastscan(int &number) { 
  bool negative = false; 
  register int c; 
  number = 0; 
  c = getchar(); 
  if (c=='-') { 
      negative = true; 
      c = getchar(); 
  } 
  for (; (c>47 && c<58); c=getchar()) 
      number = number *10 + c - 48; 
  if (negative) 
      number *= -1; 
} 

//declare variables here
const int MAXN = 1e5;
LL dp[13][MAXN+3], tmp[13];
LL ans;
int N, x, K;

void update(int x,int jum, LL val){
  while (x <= MAXN){
    dp[jum][x]+=val;
    x += (x&(-x));
  }
}

LL get(int x,int jum){
  LL ret = 0;
  while (x > 0){
    ret += dp[jum][x];
    x -= (x&(-x));
  }
  return ret;
}

LL query(int jum,int L,int R){
  return get(R, jum) - get(L-1, jum);
}

int main(){
  OPTIMATION
  cin >> N >> K;
  for (int i = 0; i < N; i++){
    cin >> x;
    for (int j = 1; j <= K+1; j++){
      if (j == 1) tmp[j] = 1;
      else tmp[j] = query(j-1, 1, x-1);
      if (j == K+1) ans += tmp[j];
    }
    for (int j = 1; j <= K+1; j++){
      update(x, j, tmp[j]);
    }
  }
  cout << ans << '\n';
  return 0;
}