#include <bits/stdc++.h>

using namespace std;
int main()
{
	int i;
	double volume;
	const double pi=3.14159;
	
	cin >>i;
	volume=(4.0/3)*(pi*i*i*i);
	cout<<fixed<<showpoint;
	cout<<setprecision(3);
	cout<<"VOLUME = "<<volume<<endl;
	return 0;
}