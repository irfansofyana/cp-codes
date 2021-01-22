#include <bits/stdc++.h>
using namespace std;

typedef int LL;

int N;
LL font[3005];
LL rent[3005];
LL dp[3005][3005][4];

LL cari(int idx, int last, int cnt){
  if (cnt == 3) return 0;
  if (idx > N) return (LL)1e9;
  if (dp[idx][last][cnt] != -1) return dp[idx][last][cnt];
  LL mini = (LL)1e9;
  if (last == 0) {
    mini = min(mini, cari(idx + 1, last, cnt));
    mini = min(mini, cari(idx + 1, idx, cnt + 1) + rent[idx]);
  } 
  else {
    if (font[idx] > font[last]) mini = min(mini, cari(idx + 1, idx, cnt + 1) + rent[idx]);
    mini = min(mini, cari(idx + 1, last, cnt));
  }
  return dp[idx][last][cnt] = mini;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> N;
  for (int i = 1 ; i <= N; i++) cin >> font[i];
  for (int i = 1 ; i <= N; i++) cin >> rent[i];
  memset(dp, -1, sizeof dp);
  LL ans = cari(1, 0 , 0);
  cout << (ans == (LL)1e9 ? -1 : ans) << '\n';
  return 0;
}