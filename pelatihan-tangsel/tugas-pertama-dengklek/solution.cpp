#include <bits/stdc++.h>
using namespace std; 

typedef long long LL; 
const LL mod =1e9+7;

LL n, x, ans;
LL arr[1000005], smt[1000005];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  cin >> n; 
  ans = 0LL; 
  for (int i = 0;i<n; i++){
    cin >> x; 
    if (i == 0){
      arr[0]= 1;
      arr[1] = 1;
    }else{
      for (int j = 1; j<= (int)sqrt(x); j++){
         if (x % j==0){
           smt[j] = (smt[j] + arr[j-1])%mod; 
           int k = x/j; 
           if (k!=j) smt[k] = (smt[k] +arr[k-1])%mod; 
         }
      }
    }
    for (int j=1; j<=(int) sqrt(x); j++){
      if (x % j==0){
        arr[j] =(arr[j] +smt[j]) %mod; 
        smt[j] =0;
        int k=x/j; 
        if (k!=j) {
          arr[k] =(arr[k] +smt[k]) %mod; 
          smt[k] =0;
        }
      }
    }
  }
  for (int i = 1; i<= 1000000;i++) {
    ans=(ans+arr[i])%mod; 
}
  cout << (ans) %mod << '\n';
}