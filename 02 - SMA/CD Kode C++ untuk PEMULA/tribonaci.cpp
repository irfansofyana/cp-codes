#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	int A[200],jum=0;
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		if ((i==1) || (i==2))
			A[i]=0;
		else if (i==3)
			A[i]=1;
		else
		A[i]=A[i-1]+A[i-2]+A[i-3];
		
	}
	cout<<A[n]<<endl;
	jum=A[15]+A[n];
	cout<<jum<<endl;
}