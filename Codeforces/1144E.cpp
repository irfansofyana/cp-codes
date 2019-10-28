#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5;

int a[MAXN+5], b[MAXN+5];
int ans[MAXN+5], k;
string s, t;

int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> k >> s >> t;
  for (int i = 0; i < k; i++){
      a[i] = (int)s[i]-'a'+1;
      b[i] = (int)t[i]-'a'+1;
  }
  int carry = 0;
  for (int i = 0; i < k; i++){
      if (i == 0) {
          ans[i] = (a[i] + b[i]);
          if (ans[i]%2 == 1) {
              ans[i]--;
              carry++;
          }
      }else {
          if (carry == 0) {
              ans[i] = a[i] + b[i];
              if (ans[i]%2 == 1) {
                  ans[i]--;
                  carry++;
              }
          } else {
              ans[i] = (a[i] + b[i] + 26);
              carry--;
              if (ans[i]%2 == 1){
                  ans[i]--;
                  carry++;
              }
          }
      }
  }
  for (int i = 0; i < k; i++) 
      ans[i] /= 2;
  carry = 0;
  for (int i = k-1; i >= 0; i--){
      if (carry == 0){
          if (ans[i] > 26) {
              ans[i] = ans[i]-26;
              carry++;
          }
      }else {
          ans[i]++;
          carry--;
          if (ans[i] > 26){
              ans[i] = ans[i]-26;
              carry++;
          }
      }
  }
  for (int i = 0; i < k; i++)
      cout << char(ans[i]-1+'a');
  cout << '\n';
  return 0;
}