#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n,a,b;
	int k,i;
	
	cin>>n;
	for (i=1;i<n;i++)
		{
			a=i;
			b=n*n-a*a;
			k=int(sqrt(b));
			if (k*k==b)
				printf("%d %d\n",a,k);
		}
	return 0;
}