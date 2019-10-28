#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,n,l;
	
	scanf("%d",&n);
	k=1;
	
	
	for (i=1;i<=n;i++)
	{
		for (j=n-i;j>=1;j--)
			printf(" ");
		for (l=1;l<=i;l++)
			{
				if (k>=10)
					k=k%9;
				printf("%d ",k);
				k++;
			}
		printf("\n");
	}
	
	for (i=1;i<=n-1;i++)
	{
		for (j=1;j<=i;j++)
			printf(" ");
		for (l=n-i;l>=1;l--)
			{
				if (k>=10)
					k=k%9;
				printf("%d ",k);
				k++;
			}
		cout<<endl;
	}
	
}