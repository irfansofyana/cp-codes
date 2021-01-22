#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int a,b,c,d;
	
	cin>>n;
	a=(n/2)+1;
	b=(n/2)+1;
	c=(n/2)+n;
	d=(n/2)+n;
	for (i=1;i<=(n/2)+1;i++)
		{
			for (j=1;j<=2*n;j++)
				{
					if (((j==a) || (j==b)) || ((j==c) || (j==d)))
						cout<<"*";
					else
						cout<<" ";
				}
			a=a-1;
			b=b+1;
			c=c-1;
			d=d+1;
			cout<<endl;
		}
	a=a+2;
	b=b-2;
	c=c+2;
	d=d-2;
		for (i=1;i<=(n/2);i++)
		{
			for (j=1;j<=2*n;j++)
				{
					if (((j==a) || (j==b)) || ((j==c) || (j==d)))
						cout<<"*";
					else
						cout<<" ";
				}
			a=a+1;
			b=b-1;
			c=c+1;
			d=d-1;
			cout<<endl;
		}
}