#include <bits/stdc++.h>
using namespace std;

string s;
int x, y;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> s;
  for (int i = 0; i < s.size(); i++){
    if (s[i] == 'x') x++;
    else y++;
  }
  for (int i = 0 ; i < abs(x- y); i++){
    if (x > y) cout << 'x';
    else cout << 'y';
  }cout << '\n';
  return 0;
}
