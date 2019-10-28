#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,j,k;
	int A[1000];
	int i,jum;
	
	scanf("%d",&n);
	i=1;
	while (n!=0)
	{
		jum=0;
		if ((n%2)==0)
			{
				k=1;
				while (k<=5)
				{
					jum=jum+n;
					n=n+2;
					k++;
				}
				A[i]=jum;
			}
		else
			{
				k=1;
				while (k<=5)
				{
					jum=jum+n+1;
					n=n+2;
					k++;
				}
				A[i]=jum;
			}
		scanf("%d",&n);
		i++;
	}	
	for (j=1;j<=i-1;j++)
		{
			cout<<A[j]<<endl;
		}
}