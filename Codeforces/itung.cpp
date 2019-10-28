#include <bits/stdc++.h>
using namespace std;

int cnt;

int main(){
  for (int i = 1; i <= 100; i++)
    for (int j = i + 1; j <= 100; j++)
      for (int k = j + 1; k <= 100; k++){
        if ((i+j+k)%3 == 0) cnt++;
      }
  cout << cnt << '\n';
  return 0;
}
