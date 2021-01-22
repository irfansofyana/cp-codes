#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,k;
	int i,j;
	
	a=0.0;
	
	for (i=1;i<=11;i++)
	{
		k=1;
		if ((a==0.0) || (a=2.0) || (a=1.0))
		{
			for (j=1;j<=3;j++)
				{
					b=k+a;
					printf("I=%d J=%d",0,b);
					b=b+1;
				}
		}
		else
			{
				for (j=1;j<=3;j++)
					{
						b=k+a;
						printf("I=%.1lf J=%.1lf\n",a,b);
						b=b+1;
					}
			}
		a=a+0.2;
	}
	return 0;
}