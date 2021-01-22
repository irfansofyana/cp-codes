#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int j,k;
	
	k=1;
	cin>>n;
	for (i=1;i<=(n/2)+1;i++)
		{
			for (j=1;j<=(n/2)+1-i;j++)
				cout<<" ";
			cout<<"*";
			for (j=(n/2+1-i+1);j<=n;j++)
				{
					
				}
		}
	k=n-4;
	for (i=1;i<=(n/2);i++)
		{
			for (j=1;j<=i;j++)
				cout<<" ";
			cout<<"*";
			if (i!=(n/2))
				{
					for (j=1;j<=k;j++)
						cout<<" ";
					k=k-2;
					cout<<"*"<<endl;
				}
		}
}