#include <bits/stdc++.h>

using namespace std;
int pangkat(int a);

int main()
{
	int i,a,b;
	double jum=0;
	b=1;
	for (i=1;i<=20;i++)
		{
			jum=jum+(double(2*i-1)/b);
			b=2*b;
		}
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<jum<<endl;
	return 0;
}
