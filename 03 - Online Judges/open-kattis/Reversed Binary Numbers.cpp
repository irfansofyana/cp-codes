#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
long long ans;
string s;

string ubah(int k) {
    string res = "";
    while (k>0) {
         if (k%2==0) res = '0'+res;
         else res = '1' + res;
         k/=2;
    }
    return res;
}


int main() {
   cin.tie(0);
   cin >> n;
   s = ubah(n);
   reverse(s.begin(),s.end());
   for (i = (int)s.size()-1 ; i >=0 ; i--) {
      ans += ((int)s[i]-'0') * (1<<((int)s.size()-1-i));
   }
   cout << ans << endl;   return 0;
}
