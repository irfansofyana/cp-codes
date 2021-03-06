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
LL N, M;
LL maks;

int main(){
  OPTIMATION
  cin >> N >> M;
  LL mini = max((LL)0, N-2*M);
  for (LL i = 0; i <= N; i++){
  	if (((i*(i-1))/2) >= M){
  		maks = N-i;
  		break;
  	}
  }
  cout << mini << " " << maks << '\n';
  return 0;
}