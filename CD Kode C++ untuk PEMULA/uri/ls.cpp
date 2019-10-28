#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,i,j;
	int a,b,c;
	
	cin>>n;
	for (i=1;i<=n;i++)
		{
			a=i;
			b=a*i;
			c=b*i;
			for (j=1;j<=2;j++)
				{
					if (j==1)
						printf("%d %d %d\n",a,b,c);
					else
						printf("%d %d %d\n",a,b+1,c+1);
				}
		}
	return 0;
}