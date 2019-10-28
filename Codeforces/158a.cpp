#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,banyak=0;
	int A[100];
	
	scanf("%d %d",&n,&k);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
	}
	{
	for (i=1;i<=n;i++)
			if (A[i]>=A[k]&&A[i]>0)
				banyak++;
	}
	printf("%d",banyak);
	return 0;
}