#include <iostream>
#include<cmath>
using namespace std;
long long a,b,k;
int main()
{
    cin>>k>>a>>b;
    long long c=abs(a)+2;
    c=(c/k+1)*k;
    cout<<(b+c)/k-(a+c-1)/k;
}