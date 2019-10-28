#include <bits/stdc++.h>
#define OPTIMASI ios_base::sync_with_stdio(0);
using namespace std;

int tc,n,i,j,a,b;
char A[20];
vector<string> ans;
string temp;

int main(){
  OPTIMASI
  cin >> tc;
  while (tc--) {
   cin >> a >> b;
   j = 0;
   for (i = 1 ; i <= a-b; i++) {
      A[j] = '0';
      j++;
   }
   for (i = 1 ; i <= b; i++) {
      A[j] = '1';
      j++;
   }
   ans.clear();
   do {
      temp = "";
      for (i = 0 ; i < j ; i++)
         temp = temp+A[i];
      ans.push_back(temp);
   }  while (next_permutation(A,A+j));
   sort(ans.begin(),ans.end());
   for (i = 0 ; i < ans.size(); i++)
         cout << ans[i] << '\n';
   if (tc!=0) cout << '\n';
  }
  return 0;
}
