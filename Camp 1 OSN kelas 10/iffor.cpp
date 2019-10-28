#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for (i=1;i<=n;i++)
		{
			if (i!=n)
				{
					if (i%7==0)
						cout<<i<<" ";
				}
			else if (i==n)
				{
					if (i%7==0)
						cout<<i<<endl;
					else
						cout<<endl;
				}
		}
}