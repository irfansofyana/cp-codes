#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n;
	double A[100];
	int i;
	
	cin>>n;
	A[0]=n;
	cout<<fixed<<showpoint<<setprecision(4);
	cout<<"N"<<"["<<0<<"]"<<" = "<<n<<endl;
	for (i=1;i<=99;i++)
		{
			A[i]=(A[i-1]/2);
			cout<<fixed<<showpoint<<setprecision(4);
			cout<<"N"<<"["<<i<<"]"<<" = "<<A[i]<<endl;
		}
	return 0;
}