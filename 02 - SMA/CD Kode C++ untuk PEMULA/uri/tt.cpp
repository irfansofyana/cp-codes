#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c;
	
	cin>>a>>b>>c;
	
	if ((a==b) && (b==c))
		{
			cout<<"TRIANGULO ACUTANGULO"<<endl;
			cout<<"TRIANGULO EQUILATERO"<<endl;
		}
	else
		if (((a==b) && (b!=c)) || ((a==c) && (c!=b)))
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
	else
		{
			if ((b==c) && (c!=a))
				cout<<"TRIANGULO ISOSCELES"<<endl;
			if (a>=(b+c))
				cout<<"NAO FORMA TRIANGULO"<<endl;
			if ((a*a)==(b*b)+(c*c))
				cout<<"TRIANGULO RETANGULO"<<endl;
			if ((a*a)>(b*b)+(c*c))
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
			if ((a*a)<(b*b)+(c*c))
				cout<<"TRIANGULO ACUTANGULO"<<endl;
		}
	return 0;
}