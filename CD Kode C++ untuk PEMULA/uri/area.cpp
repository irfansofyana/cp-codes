#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,c;
	const double pi=3.14159;
	double t,ci,tr,s,r;
	
	cin>>a>>b>>c;
	t=(1.0/2)*a*c;
	ci=pi*c*c;
	tr=(1.0/2)*(a+b)*c;
	s=b*b;
	r=a*b;
	cout<<fixed<<showpoint;
	cout<<setprecision(3);
	cout<<"TRIANGULO: "<<t<<endl;
	cout<<"CIRCULO: "<<ci<<endl;
	cout<<"TRAPEZIO: "<<tr<<endl;
	cout<<"QUADRADO: "<<s<<endl;
	cout<<"RETANGULO: "<<r<<endl;
	return 0;
}