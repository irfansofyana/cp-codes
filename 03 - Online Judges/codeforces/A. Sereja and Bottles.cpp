#include<iostream>
using namespace std;

int main() {

  int i,j,n,res=0;
  int a[1000],b[1000];

  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i]>>b[i];


  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      if( a[i]==b[j] && i!=j){res++; break;}
  cout<<n-res<<endl;
  return 0;
}
