#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp() freopen("input.in", "r", stdin);
#define out() freopen("output.out", "w", stdout);
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
int T;
LL N, V, L, R;


int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    inp()
  #endif
  cin >> T;
  while (T--){
    cin >> N >> V >> L >> R;
    cout << (N / V) - ((R/V) -((L-1)/V)) << '\n';
  }
  return 0;
}