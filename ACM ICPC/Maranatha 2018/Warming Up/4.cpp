#include <bits/stdc++.h>
using namespace std;

int T, ans;
string s;
pair<int,int> a;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  a = {1, 2};
  cin >> T;
  while(T--){
    cin.ignore();
    cin >> s;
    int N = (int)s.size();
    for (int i = 1; i <= N; i++){
      if (N%i == 0) {
        int cnt = 0;
        string tmp = s.substr(0, i);
        int last = 0;
        int temu = s.find(tmp, last);
        while (temu >= 0 && temu < N){
          cnt++;
          last = temu;
          temu = s.find(tmp, last+1);
        }
        if (cnt == N/i) {
          ans = i;
          break;
        }
      }
    }
    cout << ans << '\n';
    if (T != 0) cout << '\n';
  }
  return 0;
}
