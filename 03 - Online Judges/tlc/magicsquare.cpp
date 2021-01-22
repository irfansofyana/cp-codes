#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t,i,n,ditanya;
	
	cin>>t;
	for (i=1;i<=t;i++)
		{
			cin>>n;
			ditanya=(((n)*(n*n+1))/2);
			printf("%lld\n",ditanya);
		}
}