#include <bits/stdc++.h>
using namespace std;
int main()
{
	int genap[15];
	int ganjil[15];
	int je,jo;
	int i,n,l,j,k,a,b,c;
	
	je=0;
	jo=0;
	for (i=1;i<=15;i++)
		{
			cin>>n;
				if (n%2==0)
					{
						genap[je]=n;
						je++;
					}
				else
					{
						ganjil[jo]=n;
						jo++;
					}
		}
	if (je-1>=4)
		{
			for (j=0;j<=4;j++)
				{
					printf("par[%d] = %d\n",j,genap[j]);
				}
			for (a=0;a<=jo-1;a++)
				{
					if (a>=5)
					{
						k=a;
						a=a-5;
						printf("impar[%d] = %d\n",a,ganjil[k]);
					}
					else
						printf("impar[%d] = %d\n",a,ganjil[a]);
				}
			l=je-5;
			for (b=0;b<=l;b++)
				{
					printf("par[%d] = %d\n",j,genap[5+b]);
				}
		}
	else 
		{
			for (j=0;j<=(je-1);j++)
				{
					printf("par[%d] = %d\n",j,genap[j]);
				}
			for (a=0;a<=jo-1;a++)
				{
					if (a>=5)
					{
						k=a;
						a=a-5;
						printf("impar[%d] = %d\n",a,ganjil[k]);
					}
					else
						printf("impar[%d] = %d\n",a,ganjil[a]);
				}
		}
	return 0;
}