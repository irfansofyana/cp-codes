#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,i;
	cin>>x;
	while (x!=0)
		{
			for (i=1;i<=x-1;i++)
				printf("%d ",i);
			printf("%d\n",x);
			cin>>x;
		}
}