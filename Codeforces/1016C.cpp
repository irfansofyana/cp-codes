
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
const int MAXN = 400000;
LL arr[MAXN+5], brr[MAXN+5];
LL N;
LL ans, DP[8][MAXN+3], jumlah[MAXN+5];

int main(){
  OPTIMATION
  // inp()
  cin >> N;
  for (int i = 1; i <= N; i++)
    cin >> arr[i];
  for (int i = 1; i <= N; i++)
    cin >> brr[i];
  for (int i = N; i >= 1; i--){
    if (i == N) jumlah[i] = arr[i] + brr[i];
    else jumlah[i] = jumlah[i+1] + arr[i]+brr[i];
  }
  for (int i = N; i >= 1; i--){
    if (i == N){
      DP[1][i] = 0*arr[i] + 1*brr[i];
      DP[4][i] = 0*brr[i] + 1*arr[i];
    }
    else if (i == N-1){
      DP[1][i] = 0*arr[i] + 3*brr[i] + DP[1][i+1] + jumlah[i+1]; 
      DP[2][i] = 0*arr[i] + 1*brr[i] + DP[4][i+1] + 2*jumlah[i+1];
      DP[4][i] = 0*brr[i] + 1*arr[i] + DP[1][i+1] + 2*jumlah[i+1];
      DP[5][i] = 0*brr[i] + 3*arr[i] + DP[4][i+1] + jumlah[i+1];
    }
    else {
      DP[1][i] = 0*arr[i] + (2*(N-i+1)-1)*brr[i] + DP[1][i+1] + jumlah[i+1];
      DP[2][i] = 0*arr[i] + 1*brr[i] + DP[5][i+1] + 2*jumlah[i+1];
      DP[3][i] = 0*arr[i] + 1*brr[i] + 2*brr[i+1] + 3*arr[i+1] + max(max(DP[1][i+2], DP[2][i+2]), DP[3][i+2]) + 4*jumlah[i+2];
      DP[4][i] = 0*brr[i] + 1*arr[i] + DP[1][i+1] + 2*jumlah[i+1];
      DP[5][i] = 0*brr[i] + (2*(N-i+1)-1)*arr[i] + DP[5][i+1] + jumlah[i+1];
      DP[6][i] = 0*brr[i] + 1*arr[i] + 2*arr[i+1] + 3*brr[i+1] + max(max(DP[4][i+2], DP[5][i+2]), DP[6][i+2]) + 4*jumlah[i+2];
    }
  }
  // for (int i = 1; i <= 3; i++){
  //   for (int j = 1; j <= 6; j++){
  //     cout << i << " " << j << " : " << DP[j][i] << '\n';
  //   }
  // }
  cout << max(max(DP[1][1], DP[2][1]), DP[3][1]) << '\n';
  return 0;
}