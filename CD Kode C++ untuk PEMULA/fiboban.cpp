#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	int A[100];
	bool ket=false;
	
	i=1;
	cin>>n;
	while ((i<=n) && (!ket))
		{
			if (i==1)
				A[i]=1;
			else if (i==2)
				A[i]=2;
			else 
				A[i]=A[i-1]+A[i-2];
			
			if (A[i]>2014)
				ket=true;
			i++;
		}
	cout<<i<<endl;
	return 0;
}