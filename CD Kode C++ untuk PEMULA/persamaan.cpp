#include <bits/stdc++.h>

using namespace std;

int main()
{
	double  A[3],B[3],C[3];
	int T,i;
	int a,b,c;
	
	for (i=1;i<=3;i++)
	{
		cin>>a>>b>>c;
		A[i]=double(b+c)/2;
		B[i]=double(a-b)/2;
		C[i]=double(a-c)/2;
	}
	cout<<fixed<showpoint;
	cout<<setprecision(3);
	
	for (i=1;i<=3;i++)
	{
		cout<<"Case #"<<i<<":"<<endl;
		cout <<A[i]<<","<<B[i]<<","<<C[i]<<endl;
	}
	return 0;
	
}