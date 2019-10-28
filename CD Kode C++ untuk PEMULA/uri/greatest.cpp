#include <bits/stdc++.h>
using namespace std;
int main()

{
	int a,b,c;
	cin >> a >> b >> c;
		if ((a>=b) && (b>=c))
			cout<<a<<" eh o maior"<<endl;
		else if ((a>=c) && (c>=b))
			cout<<a<<" eh o maior"<<endl;
		else if ((b>=a) && (a>=c))
			cout<<b<<" eh o maior"<<endl;
		else if ((b>=c) && (c>=a))
			cout<<b<<" eh o maior"<<endl;
		else if ((c>=a) && (a>=b))
			cout<<c<<" eh o maior"<<endl;
		else if ((c>=b) && (b>=a))
			cout<<c<<" eh o maior"<<endl;
	return 0;
}