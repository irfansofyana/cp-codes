#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int,LL> pLL;

const int MAXN = 2e5;

LL N, K, anss, X, arr[MAXN+5];
LL sep, bil;
int le[MAXN+5];
vector<LL> ans[11];

int cnt(LL x){
  int res = 0;
  if (x == 0) return 1;
  while (x > 0){
    res++;
    x /= 10;
  }
  return res;
}

LL modulo(LL N, LL M){
  if (N >= 0) return (N%M);
  else {
    N *= -1;
    LL bagi = (N / M);
    return ((bagi + 1)*M - N)%M;
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
    le[i] = cnt(arr[i]);
    arr[i]%=K;
    ans[le[i]].push_back(arr[i]);
  }
  for (int i = 1; i <= 10; i++) sort(ans[i].begin(), ans[i].end());
  for (int i = 0; i < N; i++){
    sep = 10;
    for (int j = 1; j <= 10; j++){
      bil = (sep * arr[i])%K;
      LL lo = lower_bound(ans[j].begin(), ans[j].end(), modulo(-bil, K))-ans[j].begin();
      LL hi = upper_bound(ans[j].begin(), ans[j].end(), modulo(-bil, K))-ans[j].begin();
      hi--;
      if (lo <= hi) {
        anss += hi - lo + 1;
        if (modulo(-bil, K) == arr[i] && le[i] == j) anss--;
      }
      sep *= 10;
      if (sep > K) sep%=K;
    }
  }
  cout << anss << '\n';
  return 0;
}
