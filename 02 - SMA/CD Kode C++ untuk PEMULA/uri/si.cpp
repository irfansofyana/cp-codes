#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a;
	int i;
	double tot,t;
	
	cin>>a;
	if ((a>=0) && (a<=400.00))
		i=15;
	else
		if ((a>=400.01) && (a<=800.00))
			i=12;
	else
		if ((a>=800.01) && ((a<=1200.00)))
			i=10;
	else
		if ((a>=1200.01) && ((a<=2000.00)))
			i=7;
	else
		if (a>2000.00)
			i=4;
	
	t=(double(i)/100)*a;
	tot=a+t;
	cout<<fixed<<showpoint;
	cout<<setprecision(2);
	cout<<"Novo salario: "<<tot<<endl;
	cout<<"Reajuste ganho: "<<t<<endl;
	cout<<"Em percentual: "<<i<<" %"<<endl;
	return 0;
}