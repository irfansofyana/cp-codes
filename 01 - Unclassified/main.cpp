#include <bits/stdc++.h>
using namespace std;

int a, b;

int main(){
  cin >> a >> b;
  int ret = 1;
  while (b > 0){
    if (b&1)
      ret *= a;
    a *= a;
    b /= 2;
  }
  cout << ret << '\n';
  return 0;
}