#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x,A[100];
	int i;
	
	for (i=0;i<=3;i++)
		{
			cin>>x;
				if (x<=10)
					A[i]=x;
				else
					A[i]=100;
		}
	for (i=0;i<=3;i++)
		{
			if (A[i]<=10)
				printf("A[%d] = %.2lf\n",i,A[i]);
		}
	return 0;
}