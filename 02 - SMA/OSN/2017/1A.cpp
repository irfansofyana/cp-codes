#include <bits/stdc++.h>
using namespace std;

string s;
long long N, Sd, Sm;
long long ans;
long long Smusuh, kabur, lawan;
long long Snow;
priority_queue<long long, vector<long long>, greater<long long> > pq;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> s;
  cin >> N >> Sd >> Sm;
  bool can = true;
  for (int i = 1; i <= N-1; i++) {
    cin >> Smusuh >> kabur >> lawan;
    if (Smusuh > Sd) {
      while (Smusuh > Sd && !pq.empty()) {
        Sd++;
        ans += pq.top();
        pq.pop();
      }
      if (Smusuh > Sd) {
        can = false;
      }
    }
    if (lawan <= kabur) {
      ans += lawan;
      Sd++;
    }
    else {  //lawan > kabur
      ans += kabur;
      pq.push(lawan-kabur);
    }
  }
  while (Sm > Sd && !pq.empty()) {
    Sd++;
    ans += pq.top();
    pq.pop();
  }
  if (Sm > Sd || !can) cout << -1 << '\n';
  else cout << ans << '\n';
  return 0;
}