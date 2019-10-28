#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,banyak=0,k;
	int a[100],b[100],c[100];
	
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
	}
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
				for (k=1;k<=n;k++)
					{
						if (a[i]+b[j]==c[k])
						{
							printf("%d + %d - %d = 0\n",a[i],b[j],c[k]);
							banyak++;
						}	
					}
	printf("%d\n",banyak);
	return 0;
}