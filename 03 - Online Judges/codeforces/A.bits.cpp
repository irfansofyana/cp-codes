#include <iostream>
#include <cmath>
using namespace std;
long long a,b,n,i;
int main()
{
 cin>>n;
 while(n--)
  {
   cin>>a>>b;
   for (i=0;i<=log2(b);++i)
       if ((a|(1LL<<i))>a && (a+(1LL<<i))<=b) 
	     a+=(1LL<<i);
   cout<<a<<"\n";			 
  }
return 0;
}
