#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,i;
	int a,b,c;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=4*i-3;
		b=a+1;
		c=b+1;
		printf("%d %d %d PUM\n",a,b,c);
	}
	return 0;
}