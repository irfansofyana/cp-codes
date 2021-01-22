#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	
	cin>>n;
	k=1;
	for (i=1;i<=(n/2)+1;i++)
		{
			for (j=1;j<=((n/2)+1-i);j++)
				printf("*");
			for (j=1;j<=k;j++)
				printf("D");
			for (j=1;j<=((n/2)+1-i);j++)
				{
					if (j==((n/2)+1-i))
						{
							printf("*\n");
						}
					else 
						printf("*");
				}
			k=k+2;
			if (i==(n/2)+1)
				printf("\n");
		}
	k=n-2;
	for (i=1;i<=(n/2);i++)
		{
			for (j=1;j<=i;j++)
				printf("*");
			for (j=1;j<=k;j++)
				printf("D");
			for (j=1;j<=i;j++)
				{
					if (j!=i)
						printf("*");
					else
						printf("*\n");
				}
			k=k-2;
		}
}