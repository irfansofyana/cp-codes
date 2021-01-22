//
//  Main.cpp
//
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
int N, M;
int C[1005], A[1005];

int main(){
  OPTIMATION
  cin >> N >> M;
  for (int i = 0; i < N; i++)
    cin >> C[i];
  for (int i = 0; i < M; i++)
    cin >> A[i];
  int j = 0;
  int ans = 0;
  for (int i = 0 ; i < N && j < M; i++){
    if (A[j] >= C[i]){
      ans++;
      j++;
    }
  }
  cout << ans << '\n';
  return 0;
}