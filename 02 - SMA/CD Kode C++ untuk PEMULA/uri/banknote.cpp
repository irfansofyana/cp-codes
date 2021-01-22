#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	int a,b,c,d,e,f,g;
	
	cin>>n;
	a=n/100;
	b=(n%100)/50;
	c=((n%100)%50)/20;
	d=(((n%100)%50)%20)/10;
	e=((((n%100)%50)%20)%10)/5;
	f=(((((n%100)%50)%20)%10)%5)/2;
	g=((((((n%100)%50)%20)%10)%5)%2)/1;
	
	cout<<n<<endl;
	cout<<a<<" nota(s) de R$ "<<"100,00"<<endl;
	cout<<b<<" nota(s) de R$ "<<"50,00"<<endl;
	cout<<c<<" nota(s) de R$ "<<"20,00"<<endl;
	cout<<d<<" nota(s) de R$ "<<"10,00"<<endl;
	cout<<e<<" nota(s) de R$ "<<"5,00"<<endl;
	cout<<f<<" nota(s) de R$ "<<"2,00"<<endl;
	cout<<g<<" nota(s) de R$ "<<"1,00"<<endl;
	return 0;
	
	
}