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
const int MAXN = 3e5;
int N;
pair<int,int> arr[MAXN+5];
pair<int,int> le[MAXN+5], ri[MAXN+5];

int cari(pair<int,int> x){
  int t = 0;
  return max((x.se-x.fi), t);
}

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  cin >> N;
  for (int i = 0 ; i < N; i++){
    cin >> arr[i].fi >> arr[i].se;
  }
  sort(arr, arr + N);
  for (int i = 0 ; i < N; i++){
    if (i == 0) le[i] = arr[i];
    else {
      le[i].fi = max(arr[i].fi, le[i-1].fi);
      le[i].se = min(arr[i].se, le[i-1].se);
    }
  }
  for (int i = N-1; i >= 0; i--){
    if (i == N-1) ri[i] = arr[i];
    else {
      ri[i].fi = max(arr[i].fi, ri[i+1].fi);
      ri[i].se = min(arr[i].se, ri[i+1].se);
    }
  }
  int ans = 0;
  for (int i = 0 ; i < N; i++){
    if (i == 0){
      ans = max(ans, cari(ri[1]));
    }else if (i == N-1){
      ans = max(ans, cari(le[i-1]));
    }else{
      int kiri = le[i-1].fi; 
      int kanan = le[i-1].se;
      kiri = max(kiri, ri[i+1].fi);
      kanan = min(kanan, ri[i+1].se);
      ans = max(ans, cari({kiri, kanan}));
    }
    // if (ans == 3) cout << i << '\n';
  }
  cout << ans << '\n';
  return 0;
}