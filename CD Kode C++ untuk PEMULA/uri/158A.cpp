#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,jum=0,banyak,tamb;
	int A[100000];
	
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
		jum+=A[i];
	}
	banyak=jum/4;
	tamb=jum%4;
		if (tamb>0)
			banyak++;
	printf("%d",banyak);
}