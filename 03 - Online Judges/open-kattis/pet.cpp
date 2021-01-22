#include <bits/stdc++.h>
using namespace std;

int sum,i,j;
int maks,ans;

int main(){
   cin.tie(0);
   for (i = 1 ; i <= 5 ; i++) {
      sum = 0;
      for (j = 1 ; j <= 4 ; j++) {
         int a;
         cin >> a;
         sum += a;
      }
     if (sum>maks) {
         maks = sum;
         ans = i;
     }
   }
   cout << ans << " " << maks << endl;
   return 0;
}
