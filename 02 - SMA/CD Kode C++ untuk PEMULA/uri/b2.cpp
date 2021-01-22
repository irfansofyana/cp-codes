#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	int k;
	
	for (a=1;a<=9;a++)
	{
		if (a%2==1)
			{ 
				k=7;
				for (b=1;b<=3;b++)
					{
						printf("I=%d J=%d\n",a,k);
						k=k-1;
					}

			}
	}		
}
