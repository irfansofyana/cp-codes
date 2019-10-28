#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,i;
	double a,b,c;
	double A[1000];
	
	cin>>n;
	for (i=1;i<=n;i++)
		{
			cin>>a>>b>>c;
			a=a*0.2;
			b=b*0.3;
			c=c*0.5;
			A[i]=a+b+c;
		}
	cout<<fixed<<showpoint;
	cout<<setprecision(1);
	for (i=1;i<=n;i++)
		{
			cout<<A[i]<<endl;
		}
	return 0;
}