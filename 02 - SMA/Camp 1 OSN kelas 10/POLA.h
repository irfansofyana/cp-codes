#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,l,p,j,r;
	cin>>n;
	l=(n/2)+1;
	r=(n/2)+1;
	for (i=1;i<=(n/2+1);i++)
		{
			for (j=1;j<=n;j++)
				{
					if ((j==l) || (j==r))
						cout<<" ";
					else
						cout<<"*";
				}
			l=l-1;
			r=r+1;
			cout<<endl;
		}
	l=l+2;
	r=r-2;
	for (i=1;i<=(n/2);i++)
		{
			for (j=1;j<=n;j++)
				{
					if ((j==l) || (j==r))
						cout<<" ";
					else
						cout<<"*";
				}
			l=l+1;
			r=r-1;
			cout<<endl;
		}
}