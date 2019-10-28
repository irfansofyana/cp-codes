#include <bits/stdc++.h>
using namespace std;

int K, Q;
string a, b;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> K;
  while (K--){
    cin >> a;
    cin >> Q;
    while (Q--){
      cin >> b;
      int N = (int)a.size();
      int tmp = a.find(b);
      if (tmp >= 0 && tmp < N) cout << "y\n";
      else cout << "n\n";
    }
  }
  return 0;
}
