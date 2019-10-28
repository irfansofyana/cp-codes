#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	int i,j,a,b,c;
	
	cin>>x>>y;
	for (i=1;i<=(y/3);i++)
		{
			a=3*i-2;
			b=a+1;
			c=b+1;
			printf("%d %d %d\n",a,b,c);		
				
		}
	return 0;
}