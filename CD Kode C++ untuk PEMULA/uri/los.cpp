#include <bits/stdc++.h>

using namespace std;
int main()
{
	int x,y;
	int j,i,k,c;
	
	cin>>x>>y;
	k=1;
		for (i=1;i<=(y/x);i++)
			{
				c=1;
				while (c<=x)
					{
						cout<<k<<" ";
						k++;
						c++;
					}
				if (i!=(y/x))
					cout<<endl;
			}
		for (i=1;i<=(y%x);i++)
			cout<<k<<" ";

	return 0;
}