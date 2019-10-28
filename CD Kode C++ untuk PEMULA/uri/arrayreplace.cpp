#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A[10];
	int i,x;
	
	for (i=0;i<=9;i++)
		{
			cin>>x;
				if (x<=0)
					A[i]=1;
				else
					A[i]=x;
		}
	for (i=0;i<=9;i++)
		printf("X[%d] = %d\n",i,A[i]);
	return 0;
}