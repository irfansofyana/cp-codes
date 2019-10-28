#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,m=0,jo=0;
	int A[10000];
	
	cin>>n;
	while (n!=0)
	{
		for (i=1;i<=n;i++)
		{
			scanf("%d",&A[i]);
				if (A[i]==0)
					m++;
				else if (A[i]==1)
					jo++;
		}
		printf("Mary won %d times and john won %d times\n",m,jo);
		cin>>n;
	}
	
	return 0;
}