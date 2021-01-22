#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i;
	int x,y,min=0;
	
	int k=1;
	cin>>n>>m;
	for (y=0;y<=(n/2);y++)
		{
			x=n-2*y;
			if (((x+y)%m==0) && (k==1))
				{
					min=x+y;
					k++;
				}
			else if ((x+y)%m==0)
				{
					if ((x+y)<min)
						min=x+y;
				}
		}
	if (min==0)
		printf("-1\n");
	else
		printf("%d\n",min);
	return 0;
}