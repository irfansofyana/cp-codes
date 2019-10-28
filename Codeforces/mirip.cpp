#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int sisa,x,i,y;
	bool p=false;
	
	cin>>n>>m;
	sisa=n%m;
	i=0;
	x=m*i+sisa;
	while ((x<=(n/2)) && (!p))
		{
			y=n-2*x;
			if ((x>=0) && (y>=0))
				{
					if (x>y)
						p=true;
				}
			i++;
			x=m*i+sisa;
		}
	if (p)
	else
		printf("%d\n"x+y);
	{
		
	}
		
}