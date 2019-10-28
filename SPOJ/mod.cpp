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
const double EPS = -1e9;

//declare variables here
LL DP[100005];
int T, N;

int main(){
  DP[0] = 1;
  DP[1] = 1;
  for (int i = 2; i <= 100000; i++){
  	LL t1 = (1LL*2*i*(DP[i-1]))%MODPRIMA;
  	LL t2 = (1LL*(i-1)*(i-1))%MODPRIMA;
  	t2 *= (DP[i-2]);
  	t2 %= MODPRIMA;
  	t1 = (t1 - t2 + MODPRIMA);
  	t1 = (1LL*i*t1)%MODPRIMA;
  	DP[i] = t1;
  	DP[i] *= (LL)(5e8+4);
  	DP[i] %= MODPRIMA;
  }
  scanf("%d", &T);
  while(T--) {
  	scanf("%d", &N);
  	printf("%lld\n", DP[N]);
  }
  return 0;
}