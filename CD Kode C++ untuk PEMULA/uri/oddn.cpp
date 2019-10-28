#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k,j;
	
	scanf("%d",&n);
		if (n%2==1)
			{
				for(j=0;j<=(n/2);j++)
					{
						k=2*j+1;
						printf("%d\n",k);
					}
			}
		else
			for(j=0;j<=(n/2)-1;j++)
				{
					k=2*j+1;
					printf("%d\n",k);
				}
	return 0;
}