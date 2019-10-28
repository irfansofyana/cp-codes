#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int l,r;
	
	cin>>n;
	l=(n/2);
	r=(n/2);	
	for (i=1;i<=(n/2)+1;i++)
		{
			for (j=1;j<=n;j++)
				{
					if ((j==l) || (j==r))
						cout<<"*";
					else	
						cout<<" ";
				}
			l=l-1;
			r=r+1;
			cout<<endl;
			if (l+r>(n/2)+1)
				break;
		}
		
}