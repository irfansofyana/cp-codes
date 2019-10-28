#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	double b,rata;
	
	cin>>a;
	cin>>b;
	rata=(static_cast<double>(a)/b);
	cout<<fixed<<showpoint;
	cout<<setprecision(3);
	cout<<rata<<" km/l"<<endl;
	
}