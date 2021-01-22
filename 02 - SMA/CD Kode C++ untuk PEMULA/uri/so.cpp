#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,p,q;
	int i,j,jum;
	int A[1000];
	
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		jum=0;
		scanf("%d %d",&p,&q);
			if (p<=q)
				for (j=p+1;j<=q-1;j++)
					{
					if (j%2==1)
						jum=jum+j;
					}
			else
			for (j=q+1;j<=p-1;j++)
					{
					if (j%2==1)
						jum=jum+j;
					}
				
		A[i]=jum;
	}
	
	for (i=1;i<=n;i++)
		printf("%d\n",A[i]);
	return 0;
}