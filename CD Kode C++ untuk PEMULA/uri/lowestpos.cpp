#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A[1001];
	int i,j,min,pos;
	int n;
	
	
	scanf("%d",&n);
	scanf("%d",&A[0]);
	min=A[0];
	pos=0;
	for (i=1;i<=n-1;i++)
	{
		scanf("%d",&A[i]);
		if (A[i]<min)
			{
				min=A[i];
				pos=i;
			}
	}
	printf("Menor valor: %d\n",min);
	printf("Posicao: %d\n",pos);
	return 0;
}