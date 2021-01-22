#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,z,j=0;
	int i,jum=0;
	
	cin>>x;
	cin>>z;
	
	while (z<=x)
		{
			cin>>z;
		}
	
	i=x;
	while (jum<=z)
		{
			j++;
			jum=jum+i;
			i++;
		}
	cout<<j<<endl;
	return 0;
}