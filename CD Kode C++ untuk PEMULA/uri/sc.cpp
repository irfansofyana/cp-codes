#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	int i;
	int a,b,c;
	
	cin>>n;
	for (i=1;i<=n;i++)
	{
		a=i;
		b=a*i;
		c=b*i;
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
}