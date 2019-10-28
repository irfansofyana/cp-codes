#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A[20];
	int i,x;
	
	for (i=0;i<=19;i++)
		cin>>A[i];
	
	for (i=19;i>=0;i--)
		printf("N[%d] = %d\n",19-i,A[i]);
	return 0;
}