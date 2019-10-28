#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp() freopen("input.txt", "r", stdin);
#define out() freopen("output.txt", "w", stdout);
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
int N, ans, cntN, lastN, lastS;
int arr[105];


int main(){
  // IO
  OPTIMATION
  cin >> N;
  for (int i = 0 ; i < N; i++) cin >> arr[i];
  for (int i = 0 ; i < N; i++){
    if (arr[i] == 0) {
      cntN++;
      lastN = i;
    }
    else lastS = i;
  }
  for (int i = 0 ; i <= lastN; i++){
    if (arr[i] == 1) ans++;
  }
  int res = N-ans;
  res = max(res, max(cntN,max(ans, N-cntN)));
  cout << res << '\n';
  return 0;
}