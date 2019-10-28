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
#define inp(x) freopen(x.txt, "r", stdin);
#define out(x) freopen(x.txt, "w", stdout);
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
int N;
int arr[105];

int main(){
  OPTIMATION
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  int i = 0;
  int ans = 0;
  while (i < N){
    if (arr[i] == 1) i++;
    else {
      if (i >= 1 && arr[i-1] == 1) {
        if (i + 1 < N && arr[i + 1] == 1){
          if (i + 2 < N && arr[i + 2] == 0) {
            if (i + 3 < N && arr[i + 3] == 1) {
              ans++;
              i+=3;
            }
            else {
              ans++;
              i += 3;
            }
          } 
          else {
            ans++;
            i++;
          }
        }
        else i++;
       }
      else i++;
    }
  }
  cout << ans << '\n';
  return 0;
}