#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a,b;
	
	cin>>n;
	if (n%2==0)
		{
			a=4;
			b=n-4;
			printf("%d %d\n",a,b);
		}
	else
		{
			a=9;
			b=n-9;
			printf("%d %d\n",a,b);
		}
	return 0;
}