#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k;
	double a,b;
	
	a=0;
	b=1;
	for (i=1;i<=12;i++)
		{
			for (j=1;j<=3;j++)
				{
					if (a==0)
						printf("I=%d J=%d\n",a,b);
					else
						printf("I=%.1lf J=%.1lf\n",a,b);
					b=b+1;
				}
			a=a+0.2;
			b=b-2+0.2;
		}
	return 0;
}