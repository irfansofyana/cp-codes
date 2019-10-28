#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,i;
	int A[10];
	
	cin>>a;
	A[0]=a;
	
	printf("N[%d] = %d\n",0,a);
	
	for (i=1;i<=9;i++)
		{
			A[i]=2*A[i-1];
			printf("N[%d] = %d\n",i,A[i]);
		}
	return 0;
	
}