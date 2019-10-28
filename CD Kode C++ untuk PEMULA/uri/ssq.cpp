#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	double jumlah=0;
	
	for (i=1;i<=100;i++)
		{
			jumlah=jumlah+((double(1)/i));
		}
	cout<<fixed<<showpoint;
	cout<<setprecision(2);
	cout<<jumlah<<endl;
}