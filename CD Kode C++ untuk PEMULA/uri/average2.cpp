#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,c;
	double rata;
	
	cin>>a;
	cin>>b;
	cin>>c;
	a=a+0.2;
	b=b+0.3;
	c=c+0.5;
	rata=a+b+c;
	rata=rata/3;
	cout<<fixed<<showpoint;
	cout<<setprecision(1);
	cout<<"MEDIA = "<<rata;
	return 0;
	
}