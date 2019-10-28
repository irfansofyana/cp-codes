#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int a[n],min=100000,temp=0,ans=0,final=1000000000;
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]<min)min=a[i];
    }
    for(int x=min;x>min-5;x--){
      ans=0;
      for(int i=0;i<n;i++){
        temp=a[i]-x;
        ans+=temp/5;
        temp%=5;
        ans+=temp/2;
        temp%=2;
        ans+=temp;
      }
     if(ans<final)final=ans;
    }
    printf("%d\n",final);
  }
  return 0;
}
              