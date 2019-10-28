#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	
	for (i=1;i<=9;i++)
	{
		if (i%2==1)
			{
				k=i+6;
				for (j=1;j<=3;j++)
				{
					printf("I=%d J=%d\n",i,k);
					k=k-1;
				}
			}	
	}
	return 0;
}