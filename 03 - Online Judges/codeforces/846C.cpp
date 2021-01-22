#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5;
typedef long long LL;

int N, ans1, ans2, ans3;
LL sum[MAXN+5], ans;
pair<LL,int> maks[MAXN+5];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> N;
  for (int i = 0 ; i < N; i++){
    LL x;
    cin >> x;
    sum[i] = (i == 0 ? x : (sum[i-1] + x));
  }
  for (int i = N-2; i >= 0; i--){
    if (i == N-2) {
      maks[i] = {sum[i], i};
    }
    else {
      if (sum[i] > maks[i+1].first) maks[i] = {sum[i], i};
      else maks[i] = maks[i+1];
    }
  }
  ans = 0;
  ans1 = ans2 = ans3 = 0;
  for (int i = 0; i <= N; i++){
    for (int j = i; j <= N; j++){
      LL bil = 0;
      if (i > 0) {
        bil += sum[i-1];
        bil -= (sum[j-1]-sum[i-1]);
      }
      else if (i == 0) {
        if (j > 0) bil -= (sum[j-1]);
      }

      LL bil1, bil2, bil3;
      bil1 = bil;
      bil1 -= (sum[N-1]-(j == 0 ? 0 : sum[j-1]));

      if (bil1 > ans) {
        ans = bil1;
        ans1 = i; ans2 = j; ans3 = j;
      }

      bil2 = bil;
      bil2 += (sum[N-1]-(j == 0 ? 0 : sum[j-1]));

      if (bil2 > ans){
        ans = bil2;
        ans1 = i; ans2 = j; ans3 = N;
      }

      if (j + 1 <= N-1) {
        bil3 = bil;
        bil3 += (2*maks[j].first - sum[N-1] - sum[j-1]);
        if (bil3 > ans) {
          ans = bil3;
          ans1 = i; ans2 = j; ans3 = (maks[j].second + 1);
        }
      }
    }
  }
  cout << ans1 << " " << ans2 << " " << ans3 << '\n';
  return 0;
}
