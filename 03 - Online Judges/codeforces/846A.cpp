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
int N, ans, sat;
int arr[105];
bool ada;

int main(){
  #ifndef ONLINE_JUDGE
   IO
  #endif
  OPTIMATION
  cin >> N;
  for (int i = 0 ; i < N; i++) cin >> arr[i];
  for (int i = 0 ; i < N; i++){
    if (arr[i] == 1){
      sat++;
      ada = true;
      int cnt = 0;
      for (int j = 0; j < i; j++){
        if (arr[j] == 1) cnt++;
      }
      for (int j = i+1; j < N; j++){
        if (arr[j] == 0) cnt++;
      }
      ans = max(ans, N-cnt);
    }
  }
  cout << max(ans, N-sat) << '\n';
  return 0;
}