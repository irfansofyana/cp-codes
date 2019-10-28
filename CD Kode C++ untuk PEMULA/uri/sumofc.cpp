#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	int i,k,jum=0;
	
	cin>>n;
	for (i=1;i<=n;i++)
	{
		jum=0;
		cin>>x>>y;
			if (x%2==1)
				{
					k=1;
					while (k<=y)
						{
							jum=jum+x;
							x=x+2;
							k++;
						}
					cout<<jum<<endl;
				}
			else
				{
					k=1;
					while (k<=y)
						{
							jum=jum+x+1;
							x=x+2;
							k++;
						}
					cout<<jum<<endl;
				}
	}
return 0;
}