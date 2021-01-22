#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int i,j;
	int A[47];
	
	cin>>n;
	for (i=1;i<=n-1;i++)
		{
			if (i==1)
				{
					A[i]=0;
					cout<<A[i]<<" ";
				}
			else if ((i==2) or (i==3))
				{
					A[i]=1;
					cout<<A[i]<<" ";
				}
			else 
				{
					A[i]=A[i-1]+A[i-2];
					cout<<A[i]<<" ";
				}
		}
	cout<<A[n-1]+A[n-2]<<endl;
	return 0;
}