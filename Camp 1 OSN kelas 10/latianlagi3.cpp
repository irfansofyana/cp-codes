#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	
	cin>>n;
	for (i=1;i<=n;i++)
		{
			if (i!=n)
				{
					if (i%2==1)
						cout<<i<<" ";
					else
						cout<<"*"<<" ";
				}
			else
				{
					if (i%2==1)
						cout<<i<<endl;
					else
						cout<<"*"<<endl;
				}
		}
}