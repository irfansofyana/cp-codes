#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	int x;
	long long A[61];
	
	cin>>n;
		for (i=1;i<=n;i++)
			{
				cin>>x;
				A[0]=0;
				A[1]=1;
					for (j=2;j<=x;j++)
						{
							A[j]=A[j-1]+A[j-2];
						}
				printf("Fib(%d) = %lld\n",x,A[x]);
			}
	return 0;
}
