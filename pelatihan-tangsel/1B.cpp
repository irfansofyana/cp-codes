#include <bits/stdc++.h>
using namespace std;

const int MAXN = (int)1e5 + 5;

int N, tmp[MAXN], idx, ans;
pair<int, int> arr[MAXN];


int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> N;
  for (int i = 0 ; i < N; i++) cin >> tmp[i];
  int i = 0;
  if (N == 1) {
    cout << 1 << '\n';
    return 0;
  }
  while (i < N) {
    int j = i + 1;
    int curr = 1;
    while (j < N && tmp[j] == tmp[i]){
      curr++;
      j++;
    } 
    arr[idx++] = {tmp[i], curr};
    i = j;
  }
  if (idx == 1) {
    cout << arr[0].second << '\n';
    return 0;
  }
  i = 0;
  int maks, mini;
  maks = mini = arr[i].first;
  int curr = arr[i].second;
  while (i < idx) {
    int j = i + 1;
    if (j == idx) break;
    maks = max(arr[j].first, maks);
    mini = min(mini, arr[j].first);
    if (maks - mini <= 1) {
      curr += arr[j].second;
      ans = max(ans, curr);
      i = j;
    }
    else {
      mini = maks = arr[i].first;
      curr = arr[i].second;
    }
  }
  cout << ans << '\n';
  return 0;
}