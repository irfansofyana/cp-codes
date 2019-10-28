#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int i,k;
	
	scanf("%d",&n);
	
	if (n%2==0)
		for(i=(n/2);i<=(n/2)+5;i++)
			{
			k=2*i+1;
			printf("%d\n",k);
			}
	else
		for(i=(n/2);i<=(n/2)+5;i++)
			{
			k=2*i+1;
			printf("%d\n",k);
			}
	return 0;
}