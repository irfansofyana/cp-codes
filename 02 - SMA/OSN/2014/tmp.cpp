#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const LL MOD = (LL)1e9 + 7;

const int MAXN = (int)1e5 + 5;

LL N, K, X;
LL DP[MAXN][2];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> N >> K >> X;
  DP[N-1][0] = 0;
  DP[N-1][1] = 1;
  for (int i = N-2; i >= 1; i--) {
    DP[i][0] = (K-1) * DP[i + 1][1];
    DP[i][1] = (K-2) * DP[i + 1][1] + DP[i + 1][0];
    DP[i][0] %= MOD;
    DP[i][1] %= MOD;
  }
  if (X == 1) cout << DP[1][0]%MOD << '\n';
  else cout << DP[1][1]%MOD << '\n';
  return 0;
}