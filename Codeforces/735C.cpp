#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long val,i,j,k;
    for(i=2,j=1,k=0;i<=n;i=i+j,j=i-j,k++);
    cout<<k;
}