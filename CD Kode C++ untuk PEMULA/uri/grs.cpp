#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,j,i;
	int A[1000];
	
	i=1;
	cin>>A[i];
	while (A[i]!=0)
		{
			i++;
			cin>>A[i];
				for (k=1;k<=A[i]-1;k++)
					printf("%d ",k);
				printf("%d\n",A[i]);
		}
	return 0;
}