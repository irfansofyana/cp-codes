#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a,n;
	int i,j;
	int jum=0;
	
	cin>>a>>n;
		while (n<=0)
		{
			cin>>n;
		}
	for (i=a;i<=(a+n-1);i++)
		jum=jum+i;
	cout<<jum<<endl;
	return 0;
}