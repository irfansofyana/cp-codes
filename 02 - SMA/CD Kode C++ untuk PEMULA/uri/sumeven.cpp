#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,k;
	int jum=0;
	
	cin>>n;
	while (n!=0)
	{
		jum=0;
		if ((n%2)==0)
			{
				k=1;
				while (k<=5)
					{
						jum=jum+n;
						n=n+2;
						k++;
					}
				cout<<jum<<endl;
			}
		else
			{
				k=1;
				while (k<=5)
					{
						jum=n+1;
						n=n+2;
						k++;
					}
				cout<<jum<<endl;
			}
	}
	return 0;
}