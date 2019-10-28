#include <bits/stdc++.h>

using namespace std;
int main()
{
	int A[1000],B[1000];
	int i,j,k;
	
	i=1;
	while (cin)
	{
		cin>>A[i]>>B[i];
		i++;
	}
	
	for (j=1;j<=i-1;j++)
	{
		k=(A[i]^^B[i]);
		cout<<k<<endl;
	}
	return 0;
}