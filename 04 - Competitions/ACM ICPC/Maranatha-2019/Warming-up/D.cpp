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
const int MAXN = (int)1e5;
const int INF = -(LL)1e9;
int T, N, TC;
LL arr[MAXN+5];


int main(){
  OPTIMATION
  cin >> T;
  while (T--){
  	cin >> N;
    arr[0] = 0;
  	for (int i = 1 ; i <= N; i++) cin >> arr[i];
  	for (int i = 1 ; i <= 5; ++i){
      if (i == 1) arr[i] = INF;
      else {
        LL maks = INF;
        for (int j = 2; j <= 5; ++j){
          if (i-j >= 0){
            maks = max(maks, arr[i-j]);
          }
        }
        arr[i] += maks;
      }
    }
    for (int i = 6; i <= N; ++i){
      LL maks;
      for (int j = 2; j <= 5; ++j){
        if (j == 2) maks = arr[i-j];
        else maks = max(arr[i-j], maks);
      }
      arr[i] += maks;
    }
  	cout << "Case " << ++TC << " : " << max(arr[N], arr[N-1]) << '\n';
  }
  return 0;
}