#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	long long x,y,k;
	long long max=0,temp;
	
	cin>>n>>k;
	for (i=0;i<n;i++){
		cin>>x>>y;
		if (i==0)
			{
				if (y>k)
					max=x-y+k;
				else if (y<=k)
					max=x;
			}
		else 
			{
				if (y>k)
					{
						temp=x-y+k;
						if (temp>max)
							max=temp;
					}
				else if (y<=k)
					{
						if (x>max)
							max=x;
					}
			}
	}
	printf("%I64d\n",max);
}