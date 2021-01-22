#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	long long x,jumlah=0,a,b,c;
	
	cin>>n;
	for (i=1;i<=n;i++)
		{
			jumlah=0;
			cin>>x;
			a=2*(x/4)*((x/4)+1);
			b=7*((x/7)*(((x/7)+1))/2);
			c=14*(x/28)*((x/28)+1);
			jumlah=a+b-c;
			printf("%lld\n",jumlah);
		}
}