#include<bits/stdc++.h>

using namespace std;
int main()
{
	int i;
	int n,m;
	
	cin>>n;

	
	for (i=1;i<=n-1;i++)
		{
			if (n%i==0) 
				cout<<i<<" ";
		}
	
	cout<<n<<endl;
	return 0;
}