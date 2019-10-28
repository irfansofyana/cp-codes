#include <bits/stdc++.h>
using namespace std;

int main()
{
	string A[1000];
	int m,n;
	int i,j;
	
	i=1;
	cin>>m>>n;
	while (m!=n)
	{
		if (n<m)
			A[i]="Decrescente";
		else if (n>m)
			A[i]="Crescente";
		i=i+1;
		cin>>m>>n;
	}
	
	for (j=1;j<=i-1;j++)
		{
			cout<<A[j]<<endl;
		}
	return 0;
	
}