#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int i,j;
	
	cin>>n;
	j=1;
	for (i=1;i<=n;i++)
		{
			if(n%i==0)
				{
					cout<<i<<endl;
				}
		}
	return 0;
}