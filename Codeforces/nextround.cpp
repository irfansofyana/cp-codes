#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,banyak=0,acuan;
	int A[100];
	
	scanf("%d %d",&n,&k);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
	}
	if (A[k]>0)
		acuan=A[k];
	for (i=1;i<=n;i++)
	{
			if (A[i]>=acuan)
				banyak++;
	}
	printf("%d\n",banyak);
	return 0;
}